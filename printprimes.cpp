#include <iostream>
#include <vector>
using namespace std;

bool checkprime(int n)
{

    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

vector<int> printprimes(int n)
{

    vector<int> primenumbers;
    for (int i = 2; i < n; i++)
    {
        if (checkprime(i))
        {
            primenumbers.push_back(i);
        }
    }
    return primenumbers;
}

int countprime(int n)
{

    int count = 0;
    vector<bool> prime(n + 1, true);

    prime[0] = prime[1] = false;

    for (int i = 2; i < n; i++)
    {

        if (checkprime(i))
        {
            count++;

            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = false;
            }
        }
    }

    return count;
}

int main()
{
    int n;

    cin >> n;

    bool ans = checkprime(n);
    vector<int> result = printprimes(n);

    int countans = countprime(n);
    cout << countans << endl;
    int m = result.size();

    for (int i = 0; i < m; i++)
    {

        cout << result[i] << endl;
    }

    return 0;
}
