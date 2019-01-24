#include<iostream>
#include <algorithm>

void shanchu(int *k, int j)
{
  k[j] = 0;
  //std::cout << k[j] << " " << j << std::endl;
}

void found(int *k, int i, int n)
{
  for(int j = 0; j < n; j++)
  {
    //std::cout << k[j] << " " << i << std::endl;
    if(k[j] == i)
    {
      shanchu(k, j);
      break;
    }
  }
}

bool cmp(int a,int b)
{
    return a > b;
}

int main()
{
  int k, tm;

  std::cin >> k;

  int *num = new int[k];

  for(int i = 0; i < k; i++)
  {
    std::cin >> num[i];
  }

  for(int i = 0; i < k; i++)
  {
    tm = num[i];
    while(tm != 1 && tm != 0)
    {
      if(tm % 2 == 0)
        tm = tm / 2;
      else
        tm = (3 * tm + 1) / 2;
      found(num, tm, k);
      //std::cout << tm << std::endl;
    }
  }

  std::sort(num, num + k - 1, cmp);

  for(int i = 0; i < k; i++)
  {
    if(num[i] != 0)
      std::cout << num[i];
    
    if(num[i + 1] != 0 && i < k - 1)
      std::cout << " ";
  }
  std::cout << std::endl;

  system("pause");
}