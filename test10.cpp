#include<iostream>

int main()
{
  int arr[100];
  int a, index = 0;

  while(std::cin >> a)
  {
    arr[index++] = a;
    char ch = getchar();
    if(ch == '\n')
      break;
  }

  if(index == 2 && arr[1] == 0)
    std::cout << "0 0" << std::endl;
  else
  {
    for(int i = 0; i < index - 1; i += 2)
    {
      if(arr[i + 1] != 0)
      {
        std::cout << arr[i] * arr[i + 1];
        std::cout << " ";
        std::cout << arr[i + 1] - 1;
        if(arr[index - 1] == 0)
        {
          if(i < index - 4)
            std::cout << " ";
        }
        else
        {
          if(i < index - 2)
            std::cout << " ";
        }
      }
    }
  std::cout << std::endl;
  }
  system("pause");
}