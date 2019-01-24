#include<iostream>
#include<cmath>

bool prime(int x)
{
  int y;
  for(y = 2; y <= sqrt(x); y++)
    if (x % y == 0)
      return false;
  return true;
}

int main()
{
  int pm, pn, i = 2, j = 1;
  std::cin >> pm >> pn;

  while(true)
  {
    if(prime(i))
    {
      j++;
      if(j > pm)
      {
        std::cout << i;
        if(j <= pn && (j - pm) % 10 != 0)
          std::cout << " ";
        if((j - pm) % 10 == 0 && (j - pm) != 0)
          std::cout << std::endl;
        if(j > pn)
          break;
      }
    }
    i++;
  }
  if((j - pm) % 10 != 0)
    std::cout << std::endl;
  system("pause");
}