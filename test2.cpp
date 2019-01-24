#include<iostream>
#include<string>
#include<math.h>

int main()
{
  int numBit = 0, sum = 0, sumBit = 0;
  std::string num, sumS;

  std::cin >> num;

  for(int i = 0; i < num.size(); i++)
  {
    numBit = (int)num[i] - 48;
    sum = sum + numBit;
  }

  sumS = std::to_string(sum);

  for(double i = sumS.size(); i > 0; i--)
  {
    sumBit = sum / pow(10, i - 1);
    switch(sumBit)
    {
      case 0:
        std::cout << "ling";
        break;
      case 1:
        std::cout << "yi";
        break;
      case 2:
        std::cout << "er";
        break;
      case 3:
        std::cout << "san";
        break;
      case 4:
        std::cout << "si";
        break;
      case 5:
        std::cout << "wu";
        break;
      case 6:
        std::cout << "liu";
        break;
      case 7:
        std::cout << "qi";
        break;
      case 8:
        std::cout << "ba";
        break;
      case 9:
        std::cout << "jiu";
        break;
    }
    sum = sum - sumBit * pow(10, i - 1);
    if(i > 1)
      std::cout << " ";
  }

  std::cout << std::endl;
  system("pause");
}
