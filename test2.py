numBit = 0
sum = 0
sumBit = 0

num = input()

for i in range(len(num)):
  numBit = eval(num[i])
  sum = sum + numBit

sumS = str(sum)

for i in range(len(sumS), 0, -1):
  sumBit = sum // pow(10, i - 1)
  if(sumBit == 0):
    print("ling", end = "")
  elif(sumBit == 1):
    print("yi", end = "")
  elif(sumBit == 2):
    print("er", end = "")
  elif(sumBit == 3):
    print("san", end = "")
  elif(sumBit == 4):
    print("si", end = "")
  elif(sumBit == 5):
    print("wu", end = "")
  elif(sumBit == 6):
    print("liu", end = "")
  elif(sumBit == 7):
    print("qi", end = "")
  elif(sumBit == 8):
    print("ba", end = "")
  elif(sumBit == 9):
    print("jiu", end = "")

  sum = sum - sumBit * pow(10, i - 1)
  if(i > 1):
    print(" ", end = "")
