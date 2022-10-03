#!/usr/bin/env python3
"""
__author__ : Ravi Prakash
created on : 4 June 2022 at 10:15 PM

"""

# To run the server ; uvicorn main_v1:app --port 8000 --reload

from fastapi import FastAPI
from typing import Union, Optional
import asyncio
from loguru import logger
import inflect
from utils import Address, BaseValueMapping, Model, ModelWeights, timer

num2word = inflect.engine()
base_value_map = BaseValueMapping()
model_weights = ModelWeights()

app = FastAPI()

@app.get("/")
async def read_root():
    return {"Text" : "Hello"}

@app.get("/items/{item_id}")
async def root(item_id : int, q: Union[str, None] = None):
    asyncio.sleep(2)
    logger.debug("Slept for 2 seconds...")
    return {"item_id" : item_id , "q" : q}

@timer
@app.post("/predict/{model_id}/{request_id}")
async def predict_price(address : Address, request_id : str, model_id : Model, format : Optional[bool] = False):
    try:
        base_price = base_value_map.data.get(address.pin)
        coeffs = model_weights.model_data[model_id]
        
        cost  = base_price + coeffs[0]*address.rooms + coeffs[1]*address.halls + coeffs[2]*int(address.is_pool_present)
        if format:
            cost = num2word.number_to_words(cost) 
            cost = f"{cost.capitalize()} US Dollars"
        else:
            cost = f"{cost} $"
        return {"request_id" : request_id ,"status" : 200 , "message" : "Success" ,"cost" : cost}
    except Exception as e:
        logger.error(e)
        return {"request_id" : request_id , "status" : "5000" , "message" : "Could not process Request"}



@app.post("/address/{address_path:path}")  # name of parameter is address_path ; and path tells that it should match any path 
async def add_address(address : Address):
    logger.info(address)
    return  {"status" : 200 , "message" : "Address Received"}