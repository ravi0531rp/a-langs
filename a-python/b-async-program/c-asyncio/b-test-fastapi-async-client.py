import aiohttp
import asyncio
from concurrent.futures import ThreadPoolExecutor
import time
from loguru import logger


logger.add("../logs/log.log", level="DEBUG")

URL = "http://127.0.0.1:8000/predict"

async def fetch(session, url):
    async with session.get(url) as response:
        json_resp = await response.json()
        logger.debug(json_resp)

async def main():
    #logger.debug(f"Requesting the fastAPI app async with 5 sec asyc, sync, threadpool sleep each ; 4 workers")
    logger.debug(f"Requesting the fastAPI app async with a timepass func ; 4 workers")
    n_requests = 4
    start_time = time.perf_counter()
    
    async with aiohttp.ClientSession() as session:
        tasks = [fetch(session, URL) for _ in range(n_requests)]
        await asyncio.gather(*tasks)
    

    end_time = time.perf_counter()
    logger.debug(f"Total time with Asyncio for {n_requests} requests is {end_time - start_time} seconds..")
    
if __name__ == "__main__":
    asyncio.run(main())
