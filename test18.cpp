#include <iostream>

int main()
{
  int N, ping = 0, yin = 0, shu = 0, jc = 0, jj = 0, jb = 0, yc = 0, yj = 0, yb = 0;
  std::cin >> N;
  char J, Y;

  for(int i = 0; i < N; i++)
  {
    std::cin >> J >> Y;

    if (J == Y)
      ping++;
    else if ((J == 'C' && Y == 'J') || (J == 'J' && Y == 'B') || (J == 'B' && Y == 'C'))
    {
      if (J == 'C')
        jc++;
      else if (J == 'J')
        jj++;
      else if (J == 'B')
        jb++;
      yin++;
    }
    else
    {
      if (Y == 'C')
        yc++;
      else if (Y == 'J')
        yj++;
      else if (Y == 'B')
        yb++;
      shu++;
    }
  }

  std::cout << yin << " " << ping << " " << shu << std::endl;
  std::cout << shu << " " << ping << " " << yin << std::endl;
  
  if (jb >= jc && jb >= jj)
    std::cout << "B ";
  else if (jc >= jb && jc >= jj)
    std::cout << "C ";
  else
    std::cout << "J ";

  if (yb >= yc && yb >= yj)
    std::cout << "B" << std::endl;
  else if (yc >= yb && yc >= yj)
    std::cout << "C" << std::endl;
  else
    std::cout << "J" << std::endl;
  system("pause");
}