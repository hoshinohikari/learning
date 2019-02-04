#include <iostream>
#include <math.h>

void shaloupanduan(int &i, int &d, int &c)
{
  float a, b;
  
  a = ((float)i + 1) / 2;
  b = sqrt(a);

  d = (int)b;
  int e = (int)(b + 0.999999);

  if(d == e)
  {
    c = 0;
    return;
  }
  else
  {
    c = i - 2 * pow(d, 2) + 1;
    return;
  }
}

int main()
{
  int a, c, d;
  char b;
  std::cin >> a >> b;
  shaloupanduan(a, c, d);

  for(int i = 0; i < c; i++)
  {
    for(int j = 0; j < (2 * c - 1 - i); j++)
    {
      if(j >= i && j < (2 * c - 1 - i))
        std::cout << b;
      else
        std::cout << " ";
    }
    std::cout << std::endl;
  }
  for(int i = c - 2; i >= 0; i--)
  {
    for(int j = 0; j < 2 * c - 1 - i; j++)
    {
      if(j >= i && j < (2 * c - 1 - i))
        std::cout << b;
      else
        std::cout << " ";
    }
    std::cout << std::endl;
  }

  std::cout << d << std::endl;
  system("pause");
}