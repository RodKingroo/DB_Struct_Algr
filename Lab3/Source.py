from datetime import datetime

f = open("numbers.txt")

start_time = datetime.now()

numlist = [int(x) for x in f.readlines()]

k = 0
for i in range(len(numlist)-2):
    a = numlist[i]
    b = numlist[i+1]
    if ((a + b) % 3 == 0) and ((a + b) % 6 != 0) and ((a * b) % 10 == 8):
        k += 1

end_time = datetime.now()

print(k)
print((end_time - start_time).microseconds // 1000)
f.close()
