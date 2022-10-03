from typing import Union, Optional
from loguru import logger
from pydantic import BaseModel
from enum import Enum

class Model(str, Enum):
    v1 = "model1"
    v2 = "model2"
    v3 = "model3"

class Address(BaseModel):
    id: str
    value: str
    pin: int
    rooms: int
    halls: int
    is_pool_present: bool

