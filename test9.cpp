#include<iostream>
#include<string>

std::string w,k[1000002];

int main()
{
  std::getline(std::cin, w);
  int s = 0;

  for(int i = 0; i < w.length(); i++)
  {
    if(w[i] == ' ')
    {
      s++;
      continue;
    }
    k[s] += w[i];
  }
  for(int i = 0; i <= s; i++)
  {
    std::cout << k[s - i];
    if(i < s)
      std::cout << " ";
  }
  std::cout << std::endl;
  system("pause");
}