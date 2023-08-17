import os
from threading import Timer
import psutil
from loguru import logger

logger.add("./logs/cpu-ram-logs.log")

RAM = psutil.virtual_memory().total/(1024*1024*1024)


def get_cpu_ram():
    cpu = psutil.cpu_percent(percpu=True)
    ram_usage = psutil.virtual_memory()[2] * RAM/100
    data = {
        "CPU COUNT" : os.cpu_count(),
        "cpu_usage_percent":cpu,
        "ram_usage_in_GB":ram_usage
    }
    return data


def log_cpu_ram_periodically():
    Timer(2.0, log_cpu_ram_periodically).start()
    logger.debug(get_cpu_ram())

log_cpu_ram_periodically()