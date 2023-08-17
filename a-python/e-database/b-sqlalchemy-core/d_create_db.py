from b_connect import engine
from c_tables import users_table, comments_table, meta_obj
from loguru import logger

if __name__ == "__main__":
    logger.info("Creating Database..")
    try:    
        meta_obj.create_all(bind=engine)
        logger.success("Created Successfully..")
    except Exception as e:
        logger.error(e)


