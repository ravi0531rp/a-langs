import subprocess as sp
import os
from threading import Thread , Timer
import sched, time
from loguru import logger
import GPUtil


logger.add("./logs/gpu-logs.log")


def get_gpu_memory():
    output_to_list = lambda x: x.decode('ascii').split('\n')[:-1]
    COMMAND = "nvidia-smi --query-gpu=memory.used --format=csv"
    try:
        memory_use_info = output_to_list(sp.check_output(COMMAND.split(),stderr=sp.STDOUT))[1:]
    except sp.CalledProcessError as e:
        raise RuntimeError("command '{}' return with error (code {}): {}".format(e.cmd, e.returncode, e.output))
    memory_use_values = [int(x.split()[0]) for i, x in enumerate(memory_use_info)]
    return {
        "graphics_memory_in_GB": memory_use_values[0]/1024, "gpu_pct_load": GPUtil.getGPUs()[0].load
    }

def print_gpu_memory_every_2secs():
    Timer(2.0, print_gpu_memory_every_2secs).start()
    logger.debug(get_gpu_memory())
    

print_gpu_memory_every_2secs()