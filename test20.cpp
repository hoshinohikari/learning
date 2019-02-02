#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

struct yue
{
  float ku;
  float zong;
  float dan;
};

bool cmp(yue a, yue b)
{
  return a.dan > b.dan;
}

int main()
{
  int N;
  float D, sum = 0;
  std::cin >> N >> D;
  float *ku = new float[N];
  float *zong = new float[N];
  std::vector<yue> a;
  yue A;

  for(int i = 0; i < N; i++)
    std::cin >> ku[i];
  for(int i = 0; i < N; i++)
    std::cin >> zong[i];
  for(int i = 0; i < N; i++)
  {
    A.ku = ku[i];
    A.zong = zong[i];
    A.dan = zong[i] / ku[i];
    a.push_back(A);
  }

  std::sort(a.begin(), a.end(), cmp);
  std::vector<yue>::iterator iter = a.begin();

  while(D > 0 && iter != a.end())
  {
    if (D > iter -> ku)
    {
      sum = sum + iter -> zong;
      D = D - iter -> ku;
    }
    else
    {
      sum = sum + D * iter -> dan;
      D = 0;
    }
    iter++;
  }

  std::cout << std::setprecision(2) << std::fixed << sum << std::endl;
  system("pause");
}