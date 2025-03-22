#include <iostream>
using namespace std;

void findsubsequences(string str, int n, int i, string output)
{

    // base case

    if (i >= n)
    {
        cout << output << endl;
        return;
    }

    // exclude

    findsubsequences(str, n, i + 1, output);

    // include

    output = output + str[i];
    findsubsequences(str, n, i + 1, output);
}

int main()
{

    string str = "abc";
    string output = "";

    int n = str.length();
    int i = 0;

    findsubsequences(str, n, i, output);

    return 0;
}