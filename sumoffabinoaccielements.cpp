#include <iostream>
using namespace std;

int sumfib(int n)
{
  int f0 = 0;
  int f1 = 1;
  int f2;
  int sum = 1;

  if (n == 0)
  {
    return 0;
  }

  if (n == 1)
  {
    return 1;
  }

  for (int i = 2; i < n; i++)
  {
    f2 = f0 + f1;
    sum = sum + f2;
    f0 = f1;
    f1 = f2;
  }

  return sum;
}

int main()
{

  int n;
  cin >> n;

  int result = sumfib(n);
  cout << result << endl;
  return 0;
}
