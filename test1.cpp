#include<iostream>

int main()
{
  int i, j = 0;
  std::cin >> i;
  while(i != 1)
  {
    if(i % 2 == 0)
      i = i / 2;
    else
      i = (3 * i + 1) / 2;
    j++;
  }
  std::cout << j << std::endl;
  system("pause");
}