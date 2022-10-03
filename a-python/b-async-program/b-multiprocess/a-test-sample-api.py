import requests
from multiprocessing.pool import Pool
import time
from loguru import logger


logger.add("../logs/log.log", level="DEBUG")

URL = "https://httpbin.org/uuid"

def fetch(session, url):
    with session.get(url) as response:
        logger.debug(response.json()["uuid"])


def main():
    n_requests = 20
    n_processes = 4
    start_time = time.perf_counter()
    with Pool(n_processes) as pool:
        with requests.Session() as session:
            for _ in range(n_requests):
                fetch(session, URL)
    end_time = time.perf_counter()
    logger.debug(f"Total time with Multiprocessing[{n_processes}] for {n_requests} requests is {end_time - start_time} seconds..")
    
if __name__ == "__main__":
    main()