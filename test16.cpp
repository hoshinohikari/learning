#include <iostream>
#include <string>
#include <cmath>

int main()
{
  std::string A, B;
  char DA, DB;
  double PA, PB, ca = 0, cb = 0;
  long long sum = 0;

  std::cin >> A >> DA >> B >> DB;

  PA = (int)DA - 48;
  PB = (int)DB - 48;

  for(int i = 0; i < A.length(); i++)
    if (A[i] == DA)
      ca++;

  for(int i = 0; i < B.length(); i++)
    if (B[i] == DB)
      cb++;

  for(double i = 0; i < ca; i++)
    sum = sum + PA * pow(10, i);

  for(double i = 0; i < cb; i++)
    sum = sum + PB * pow(10, i);

  std::cout << sum << std::endl;
  system("pause");
}