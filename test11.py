n = eval(input())

for i in range(n):
  arr = input()
  num = [int(n) for n in arr.split()]
  if(num[0] + num[1] > num[2]):
    print("Case #%d: true" %(i + 1))
  else:
    print("Case #%d: false" %(i + 1))