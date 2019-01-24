def panduan(s):
  a = b = c = q = z = h = 0

  for i in range(len(s)):
    if(s[i] == 'A'):
      if(a == 0 and b == 0):
        q = q + 1
      elif(a == 1 and b == 0):
        z = z + 1
      elif(a == 1 and b == 1):
        h = h + 1
    elif(s[i] == 'P'):
      a = a + 1
    elif(s[i] == 'T'):
      b = b + 1
    else:
      c = 0
      return c

  if(h == q * z and z >= 1 and a == 1 and b == 1):
    c = 1

  return c

a = eval(input())
t = []

for i in range(a):
  s = input()
  t.append(panduan(s))

for i in range(a):
  if(t[i] == 1):
    print("YES")
  else:
    print("NO")
