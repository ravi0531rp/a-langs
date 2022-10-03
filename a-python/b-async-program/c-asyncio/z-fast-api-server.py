import asyncio
from fastapi import FastAPI
from fastapi.concurrency import run_in_threadpool
from loguru import logger
import os
import time
from datetime import datetime

app = FastAPI()

async def time_pass_func():
    j = 0
    for i in range(0,10000000):
        j += 1

    """
    With only await asyncio.sleep(2) 
    1) sync requests took 2 secs each for returning json and total time taken was 9.8 seconds..
    2) async requests took approx 2 secs to complete all 4. Imagine not waiting for the sleep to be over to proceed.
    """
    # await asyncio.sleep(2) 

    """
    With only time.sleep(2) 
    1) sync requests took 2 secs each for returning json and total time taken was 9.8 seconds..
    2) async requests took 2 secs each for returning json and total time taken was 9.8 seconds.. Same 2 same
    """
    # time.sleep(2) 

    """
    With only await run_in_threadpool(time.sleep, 2)
    1) sync requests took 2 secs each for returning json and total time taken was 9.8 seconds..
    2) async requests took approx 2 secs to complete all 4. 
    
    This is a good choice for the function calls which do not have the async type builtin. But, still take time.
    For instance Model.run() type calls
    """
    await run_in_threadpool(time.sleep, 2)
    return j
    

@app.get("/predict")
async def root():
    pid = os.getpid()
    logger.debug(f"{pid} : Request Received at {datetime.now()}")
    time_pass_out = await time_pass_func()
    logger.debug(f"After time pass func at {datetime.now()}")
    return {"message" : f"Sample time_pass_out {time_pass_out} at {datetime.now()}"}
