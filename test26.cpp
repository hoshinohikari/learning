#include <iostream>
#include <cmath>

double round(double r)
{
    return (r > 0.0) ? std::floor(r + 0.5) : std::ceil(r - 0.5);
}

int main()
{
  double c1, c2;
  int h, m, s;
  std::cin >> c1 >> c2;

  s = round((c2 - c1) / 100);

  m = s / 60;
  s = s % 60;

  h = m / 60;
  m = m % 60;

  printf("%02d:%02d:%02d\n", h, m, s);
  system("pause");
}