#include <iostream>
#include <string>
#include <cmath>

int main()
{
  std::string A;
  std::cin >> A;
  int z, w;
  double e;

  for(int i = 0; i < A.length(); i++)
    if (A[i] == 'E')
    {
      if (A[i + 1] == '+')
        z = 1;
      if (A[i + 1] == '-')
        z = 2;

      w = i - 3;

      for(int j = i + 2; j < A.length(); j++)
        e = e + (A[j] - '0') * pow(10, A.length() - j - 1);
      break;
    }

  if (z == 1)
  {
    if (A[0] == '-')
      std::cout << "-";

    if (e < w)
    {
      std::cout << A[1];
      for(int i = 3; i < 3 + e; i++)
        std::cout << A[i];
      std::cout << ".";
      for(int i = 3 + e; i < w + 3; i++)
        std::cout << A[i];
    }
    else
    {
      std::cout << A[1];
      for(int i = 3; i < 3 + w; i++)
        std::cout << A[i];
      for(int i = 3 + w; i < 3 + e; i++)
        std::cout << "0";
    }
  }

  if (z == 2)
  {
    if (A[0] == '-')
      std::cout << "-";

    std::cout << "0.";
    for(int i = 0; i < e - 1; i++)
      std::cout << "0";
    std::cout << A[1];
      for(int i = 3; i < 3 + w; i++)
        std::cout << A[i];
  }

  std::cout << std::endl;
  system("pause");
}