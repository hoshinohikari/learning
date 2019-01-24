#include<iostream>

int main()
{
  int k;
  std::cin >> k;

  long int *a = new long int[k];
  long int *b = new long int[k];
  long int *c = new long int[k];

  for(int i = 0; i < k; i++)
  {
    std::cin >> a[i] >> b[i] >> c[i];
    if(a[i] + b[i] > c[i])
      std::cout << "Case #" << i + 1 << ": true" << std::endl;
    else
      std::cout << "Case #" << i + 1 << ": false" << std::endl;
  }

  system("pause");
}