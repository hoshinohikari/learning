numBit = 0
num = eval(input())

for i in range(2, -1, -1):
  numBit = num // pow(10, i)
  if(i == 2):
    for j in range(numBit):
      print("B", end = "")
  elif(i == 1):
    for j in range(numBit):
      print("S", end = "")
  elif(i == 0):
    j = 1
    while(j < numBit + 1):
      print(j, end = "")
      j += 1
  num = num - numBit * pow(10, i)

#print()