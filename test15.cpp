#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

struct Student
{
  char id[9];
  int de;
  int cai;
};

bool Cmp(Student a, Student b)
{
  if ((a.de + a.cai) != (b.de + b.cai))
    return a.de + a.cai > b.de + b.cai;
  else
  {
    if (a.de != b.de)
      return a.de > b.de;
    else
    {
      if (a.cai != b.cai)
        return a.cai > b.cai;
      else
        return std::strcmp(a.id, b.id) < 0;
    }
  }
}

int main()
{
  int N, L, H, M = 0;
  std::cin >> N >> L >> H;
  std::vector<Student> v1, v2, v3, v4;
  Student students;
  
  for(int i = 0; i < N; i++)
  {
    std::cin >> students.id >> students.de >> students.cai;

    if (students.de >= L && students.cai >= L)
    {
      if (students.de >= H && students.cai >= H)
        v1.push_back(students);
      else if (students.de >= H)
        v2.push_back(students);
      else if (students.de < H && students.cai < H && students.de >= students.cai)
        v3.push_back(students);
      else
        v4.push_back(students);

      M++;
    }
  }

  std::sort(v1.begin(), v1.end(), Cmp);
  std::sort(v2.begin(), v2.end(), Cmp);
  std::sort(v3.begin(), v3.end(), Cmp);
  std::sort(v4.begin(), v4.end(), Cmp);

  std::cout << M << std::endl;

  for(std::vector<Student>::iterator iter = v1.begin(); iter != v1.end(); iter++)
    std::cout << iter -> id << " " << iter -> de << " "<< iter -> cai << std::endl;
  for(std::vector<Student>::iterator iter = v2.begin(); iter != v2.end(); iter++)
    std::cout << iter -> id << " " << iter -> de << " "<< iter -> cai << std::endl;
  for(std::vector<Student>::iterator iter = v3.begin(); iter != v3.end(); iter++)
    std::cout << iter -> id << " " << iter -> de << " "<< iter -> cai << std::endl;
  for(std::vector<Student>::iterator iter = v4.begin(); iter != v4.end(); iter++)
    std::cout << iter -> id << " " << iter -> de << " "<< iter -> cai << std::endl;

  system("pause");
}