import time 
t1 =time.time()

counter = 0
for i in range(1000000000):
    counter=counter+1

t2 = time.time()

print(f"time {t2-t1: .4f}")