#include <iostream>
using namespace std;

int Factorial(int n)
{

    if (n == 1 || n == 0)
    {
        return 1;
    }

    int finalans = n * Factorial(n - 1);

    return finalans;
}

 
int main()
{

    int n;

    cin >> n;

    int ans = Factorial(n);

    cout << ans << endl;

    return 0;
}