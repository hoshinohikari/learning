#include<iostream>
#include<string>

int main()
{
  int n, max = 0, min = 0;

  std::cin >> n;

  std::string *name = new std::string[n];
  std::string *number = new std::string[n];
  int *score = new int[n];

  for(int i = 0; i < n; i++)
  {
    std::cin >> name[i] >> number[i] >> score[i];
  }

  for(int i = 0; i < n; i++)
  {
    if(score[i] > score[max])
      max = i;
    else if(score[i] < score[min])
      min = i;
  }

  std::cout << name[max] << " " << number[max] << std::endl;
  std::cout << name[min] << " " << number[min] << std::endl;

  system("pause");
}