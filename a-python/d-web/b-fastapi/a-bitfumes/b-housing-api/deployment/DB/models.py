from .database import Base
from sqlalchemy import Column, Integer, String

class AddressData(Base):
    __tablename__ = 'addresses'
    id = Column(Integer, primary_key=True, index=True)
    title = Column(String)
    pincode = Column(Integer)
    n_rooms = Column(Integer)
    n_halls = Column(Integer)
    is_pool_available = Column(Integer)