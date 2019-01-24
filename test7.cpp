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
  int N, tmp = 0, j = 0;

  std::cin >> N;

  for(int i = 0; i <= N; i++)
  {
    if(prime(i))
    {
      if(i - tmp == 2)
        j++;
      tmp = i;
    }
  }

  std::cout << j << std::endl;
  system("pause");
}