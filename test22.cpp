#include <iostream>
#include <vector>

int main()
{
  int A, B, C, c, D;
  std::cin >> A >> B >> D;
  std::vector<int> d;

  C = A + B;

  while(C != 0)
  {
    c = C % D;
    d.push_back(c);
    C = C / D;
  }
  
  if (d.end() != d.begin())
    for(std::vector<int>::iterator iter = d.end() - 1; iter != d.begin() - 1; iter--)
      std::cout << *iter;
  else
    std::cout << "0";
    
  std::cout << std::endl;
  system("pause");
}