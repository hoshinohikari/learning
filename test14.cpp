#include<iostream>
#include<algorithm>
#include<string>

int main()
{
  std::string a, b, c, d;
  int z = 0;

  std::cin >> a >> b >> c >> d;

  for(int i = 0; i < std::min(a.length(), b.length()); i++)
  {
    if(a[i] == b[i] && (int)a[i] >= 65 && (int)a[i] <= 71 && z == 0)
    {
      switch(a[i])
      {
        case 'A':
          std::cout << "MON ";
          break;
        case 'B':
          std::cout << "TUE ";
          break;
        case 'C':
          std::cout << "WED ";
          break;
        case 'D':
          std::cout << "THU ";
          break;
        case 'E':
          std::cout << "FRI ";
          break;
        case 'F':
          std::cout << "SAT ";
          break;
        case 'G':
          std::cout << "SUN ";
          break;
      }
      z++;
      continue;
    }
    if(a[i] == b[i] && (int)a[i] >= 48 && (int)a[i] <= 78 && z == 1)
    {
      if((int)a[i] >= 48 && (int)a[i] <= 57)
        std::cout << "0" << (int)a[i] - 48 << ":";
      if((int)a[i] >= 65 && (int)a[i] <= 78)
        std::cout << (int)a[i] - 55 << ":";
      z++;
    }
  }

  for(int i = 0; i < std::min(c.length(), d.length()); i++)
  {
    if(c[i] == d[i] && ((c[i] >= 65 && c[i] <= 90) || (c[i] >= 97 && c[i] <= 122)) && z == 2)
    {
      if(i < 10)
        std::cout << "0" << i;
      else
        std::cout << i;
      break;
    }
  }
  std::cout << std::endl;
  system("pause");
}