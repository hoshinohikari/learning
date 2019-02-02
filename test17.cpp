#include <iostream>
#include <string>

int main()
{
  std::string A;
  char B;
  int a, b, c, y = 0;

  std::cin >> A >> B;

  for(int i = 0; i < A.length(); i++)
  {
    a = y * 10 + (int)A[i] - 48;
    b = (int)B - 48;
    c = a / b;
    y = a % b;

    if (i == 0 && c == 0){}
    else
      std::cout << c;
  }

  if (A.length() == 1 && ((int)A[0] - 48) < ((int)B - 48))
    std::cout << "0";
  std::cout << " " << y << std::endl;
  system("pause");
}