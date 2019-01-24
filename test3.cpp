#include<iostream>
#include<string>

int panduan(std::string s)
{
  int a = 0, b = 0, c = 0, q = 0, z = 0, h = 0;

  for(int i = 0; i < s.size(); i++)
  {
    if(s[i] == 'A')
    {
      if(a == 0 && b == 0)
        q++;
      else if(a == 1 && b == 0)
        z++;
      else if(a == 1 && b == 1)
        h++;
    }
    else if(s[i] == 'P')
      a++;
    else if(s[i] == 'T')
      b++;
    else
    {
      c = 0;
      return c;
    }
  }

  if(h == q * z && z >= 1 && a == 1 && b == 1)
    c = 1;

  return c;
}

int main()
{
  int a, b;
  std::string s;

  std::cin >> a;

  int *t = new int[a];

  for(int i = 0; i < a; i++)
  {
    std::cin >> s;
    t[i] = panduan(s);
  }

  for(int j = 0; j < a; j++)
  {
    if(t[j] == 1)
      std::cout << "YES" << std::endl;
    else
      std::cout << "NO" << std::endl;
  }
  system("pause");
}