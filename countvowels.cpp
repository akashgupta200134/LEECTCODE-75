#include <iostream>
#include <string>
using namespace std;

int countVowels(string str, int n)
{

    if (n == 0)
    {
        return -1;
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {

            count++;
        }
    }

    return count;
}

int main()
{

    string str = "aeiouAkash";

    int n = str.length();

    int ans = countVowels(str, n);

    cout << ans << endl;

    return 0;
}