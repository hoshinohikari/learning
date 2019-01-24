n = max = min = 0

n = eval(input())

name = []
number = []
score = []

for i in range(n):
  namet, numbert, scoret= input().split()
  name.append(namet)
  number.append(numbert)
  score.append(eval(scoret))

for i in range(n):
  if(score[i] > score[max]):
    max = i
  elif(score[i] < score[min]):
    min = i

print(name[max], end = " ")
print(number[max])
print(name[min], end = " ")
print(number[min])
