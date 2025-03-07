#include <iostream>
using namespace std;

bool checkprime(int n)
{

    if (n <= 1)
    {
        return true;
    }

    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            return true;
        }

      
    }
    return false;
}

int main()
{

    int n;
    cin >> n;

    bool result = checkprime(n);

    if (!result)
    {
        cout << " prime Number" << endl;
    }

    else
    {
        cout << "Not a  prime Number" << endl;
    }

    return 0;
}