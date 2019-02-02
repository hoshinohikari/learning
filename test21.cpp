#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct shu
{
  int D;
  int M;
};

bool cmp(shu a, shu b)
{
  return a.D < b.D;
}

int main()
{
  std::string N;
  std::cin >> N;
  std::vector<shu> a;
  shu A;
  std::vector<shu>::iterator iter = a.begin();

  for(int i = 0; i < N.length(); i++)
  {
    if (N[i] != 'X')
    {
      A.D = (int)N[i] - '0';
      int M = 1;
      for(int j = i + 1; j < N.length(); j++)
        if (N[i] == N[j])
        {
          M++;
          N[j] = 'X';
        }
      A.M = M;
      a.push_back(A);
    }
  }

  std::sort(a.begin(), a.end(), cmp);

  for(std::vector<shu>::iterator iter = a.begin(); iter != a.end(); iter++)
    std::cout << iter -> D << ":" << iter -> M << std::endl;
  system("pause");
}