#!/usr/bin/env python3
"""
__author__ : Ravi Prakash
created on : 4 June 2022 at 5:28 PM

"""

# To run the server ; uvicorn main:app --port 8000 --reload
# To query , Try like... http://127.0.0.1:8000/items/5?q=somequery
# To get the cost,  http://127.0.0.1:8000/predict/AB67-9UY1-R13X-B239?num_rooms=2&num_halls=1&is_pool_present=True
# To get the formatted cost,  http://127.0.0.1:8000/predict/AB67-9UY1-R13X-B239?num_rooms=2&num_halls=1&is_pool_present=True&format=True

from fastapi import FastAPI
from typing import Union, Optional
import asyncio
from loguru import logger
import inflect
from utils import Fibonacci, timer

num2word = inflect.engine()

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
@app.get("/predict/{request_id}")
async def pred(request_id : str ,num_rooms : int , num_halls : int , is_pool_present : bool , format : Optional[bool] = False):
    cost = 24088 + 3000*num_rooms + 3599*num_halls + 5000*int(is_pool_present)
    fibo_input = 10
    fibo = Fibonacci(fibo_input)
    if format:
        cost = num2word.number_to_words(cost) 
        cost = f"{cost.capitalize()} US Dollars"
    else:
        cost = f"{cost} $"

    return {"request_id" : request_id ,"cost" : cost , "fibo" : f"{fibo}"}
