import requests
from concurrent.futures import ThreadPoolExecutor
import time
from loguru import logger


logger.add("../logs/log.log", level="DEBUG")

URL = "https://httpbin.org/uuid"

def fetch(session, url):
    with session.get(url) as response:
        logger.debug(response.json()["uuid"])

def main():
    n_requests = 20
    n_threads = 10
    start_time = time.perf_counter()
    with ThreadPoolExecutor(max_workers= n_threads) as executer:
        with requests.Session() as session:
            executer.map(fetch, [session]*n_requests , [URL]*n_requests)
            executer.shutdown(wait=True)

    end_time = time.perf_counter()
    logger.debug(f"Total time with Multithreading[{n_threads}] for {n_requests} requests is {end_time - start_time} seconds..")
    
if __name__ == "__main__":
    main()