#include <iostream>
using namespace std;

int fact(int n)
{

    if (n == 0 || n == 1)
    {
        return 1;

    } 
  

    int ans = n * fact(n - 1);

    return ans;


}

int main()
{

    int n;
    cout << " Enter the value of  n" << endl;
    cin >> n;

    int result = fact(n);

    cout << result << endl;


    return 0;
}
