import aiohttp
import asyncio
from concurrent.futures import ThreadPoolExecutor
import time
from loguru import logger


logger.add("../logs/log.log", level="DEBUG")

URL = "https://httpbin.org/uuid"

async def fetch(session, url):
    async with session.get(url) as response:
        json_resp = await response.json()
        logger.debug(json_resp["uuid"])

async def main():
    n_requests = 20
    start_time = time.perf_counter()
    
    async with aiohttp.ClientSession() as session:
        tasks = [fetch(session, URL) for _ in range(n_requests)]
        await asyncio.gather(*tasks)
    

    end_time = time.perf_counter()
    logger.debug(f"Total time with Asyncio for {n_requests} requests is {end_time - start_time} seconds..")
    
if __name__ == "__main__":
    asyncio.run(main())