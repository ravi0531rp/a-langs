from typing import Union, Optional
import asyncio
from loguru import logger
import inflect
import time
from pydantic import BaseModel
from enum import Enum

class BaseValueMapping:
    def __init__(self):
        self.data = {
            842002 : 25000,
            842001 : 30000,
            560037 : 80000,
            560001 : 85000
        }

class Model(str, Enum):
    v1 = "model1"
    v2 = "model2"
    v3 = "model3"

class ModelWeights:
    def __init__(self):
        self.model_data = {
            "model1" : [25000, 30000, 50000],
            "model2" : [26000, 30000, 51000],
            "model3" : [35000, 40000, 40000],
        }

class Address(BaseModel):
    id: str
    value: str
    pin: int
    rooms: int
    halls: int
    is_pool_present: bool

def timer(function):
    def wrapper(*args, **kwargs):
        t_start = time.perf_counter()
        _ = function(*args, **kwargs)
        t_end = time.perf_counter()
        logger.debug(f"Time taken for call is {t_end - t_start} seconds..")

