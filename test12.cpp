#include<iostream>
#include<iomanip>

int main()
{
  int n, A1 = 0, A2 = 0, i = 0, A3 = 0, A5 = 0, num;
  float A4 = 0, j = 0;
  std::cin >> num;
  while(std::cin >> n)
  {
    if(n % 5 == 0 && n % 2 == 0)
      A1 += n;
    if(n % 5 == 1)
    {
      if(i % 2 == 0)
        A2 += n;
      else
        A2 -= n;
      i++;
    }
    if(n % 5 == 2)
      A3++;
    if(n % 5 == 3)
    {
      A4 += n;
      j++;
    }
    if(n % 5 == 4)
      if(n > A5)
        A5 = n;
    char ch = getchar();
    if(ch == '\n')
      break;
  }

  if(A1 == 0)
    std::cout << "N ";
  else
    std::cout << A1 << " ";

  if(A2 == 0)
    std::cout << "N ";
  else
    std::cout << A2 << " ";

  if(A3 == 0)
    std::cout << "N ";
  else
    std::cout << A3 << " ";

  if(A4 == 0)
    std::cout << "N ";
  else
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(1) << A4 / j << " ";

  if(A5 == 0)
    std::cout << "N" << std::endl;
  else
    std::cout << A5 << std::endl;

  system("pause");
}