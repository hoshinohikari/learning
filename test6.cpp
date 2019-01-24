#include<iostream>
#include<string>
#include<math.h>

int main()
{
  int num, numBit;

  std::cin >> num;

  for(double i = 2; i >= 0; i--)
  {
    numBit = num / pow(10, i);
    switch((int)i)
    {
      case 2:
        for(int j = 0; j < numBit; j++)
          std::cout << "B";
        break;
      case 1:
        for(int j = 0; j < numBit; j++)
          std::cout << "S";
        break;
      case 0:
        for(int j = 1; j < numBit + 1; j++)
          std::cout << j;
        break;
    }
    num = num - numBit * pow(10, i);
  }

  std::cout << std::endl;
  system("pause");
}