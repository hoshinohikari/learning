#include <iostream>
#include <string>
#include <algorithm>

int main()
{
  std::string N;
  int C = 1;
  std::cin >> N;
  int n[4] = {0, 0, 0, 0};
  int A = 0, B = 0;

  for(int i = 0; i < N.length(); i++)
  {
    n[i] = N[i] - 48;
  }

  while(C != 6174 && C != 0)
  {
    std::sort(n, n + 4);

    for(int i = 0; i < 4; i++)
    {
      A = 10 * A + n[i];
      B = 10 * B + n[3-i];
    }
    C = B - A;

    printf("%04d - %04d = %04d\n", (int)B, (int)A, (int)C);

    n[3] = C % 10;
    n[2] = (C / 10) % 10;
    n[1] = (C / 100) % 10;
    n[0] = C / 1000;
    B = 0;
    A = 0;
  }

  system("pause");
}