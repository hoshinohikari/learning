import math

def prime(x):
  i = (int)(x ** 0.5)
  for y in range(2, i + 1, 1):
    if(x % y == 0):
      return False
  return True

N = eval(input())
tmp = 2
j = 0

for i in range(0, N + 1, 1):
  if(prime(i)):
    if(i - tmp == 2):
      j += 1
    tmp = i

print(j)