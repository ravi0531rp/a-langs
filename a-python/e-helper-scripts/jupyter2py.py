import os
from glob import glob

files = glob("/Users/raprak-blrm20/Desktop/personal/CODES/e-deep-learning/e-pytorch-udemy/*.ipynb")

print(files)
for f in files:
    os.system(f"jupyter nbconvert {f} --to script")

print("Done..")