from sqlalchemy import create_engine, text
from loguru import logger

engine = create_engine("sqlite:///sample.db", echo = True)

if __name__ == "__main__":
    with engine.connect() as conn:
        result = conn.execute(text('SELECT "HELLO"'))
        logger.debug(result.all())