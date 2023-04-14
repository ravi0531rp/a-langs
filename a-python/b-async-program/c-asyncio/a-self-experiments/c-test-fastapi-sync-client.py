import requests
import time
from loguru import logger


logger.add("../logs/log.log", level="DEBUG")

URL = "http://127.0.0.1:8000/predict"

def fetch(session, url):
    with session.get(url) as response:
        logger.debug(response.json())


def main():
    logger.debug(f"Requesting the fastAPI app sequentially with a timepass func ; 4 workers")
    n_requests = 4
    start_time = time.perf_counter()
    with requests.Session() as session:
        for _ in range(n_requests):
            fetch(session, URL)
    end_time = time.perf_counter()
    end_time = time.perf_counter()
    logger.debug(f"Total time with Requests sync for {n_requests} requests is {end_time - start_time} seconds..")
    
if __name__ == "__main__":
    main()