#include <iostream>

int main()
{
  int a[10];
  int i = 1;

  for(int i = 0; i < 10; i++)
  {
    std::cin >> a[i];
  }

  while(1)
  {
    if(a[i] != 0)
    {
      std::cout << i;
      a[i] = a[i] - 1;
      break;
    }
    i++;
  }
  
  for(int i = 0; i < 10; i++)
    for(int j = 0; j < a[i]; j++)
      std::cout << i;
  std::cout << std::endl;
  system("pause");
}