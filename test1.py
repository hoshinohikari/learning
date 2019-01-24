i = eval(input())
j = 0

while(i != 1):
  if(i % 2 == 0):
    i = i / 2
  else:
    i = (3 * i + 1) / 2
  j = j + 1

print(j)