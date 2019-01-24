k = eval(input())
arr = input()

s = []

num = [int(n) for n in arr.split()]

for i in range(len(num)):
  tm = num[i]
  while(tm != 1 and tm != 0):
    if(tm % 2 == 0):
      tm = tm / 2
    else:
      tm = (3 * tm + 1) / 2
    
    if(tm in num):
      d = num.index(tm)
      num[d] = 0

num.sort()
num.reverse()
n = num.index(0)
del num[n:]

for i in range(len(num)):
  if(i < len(num) - 1):
    print(num[i], end = " ")
  else:
    print(num[i], end = "")