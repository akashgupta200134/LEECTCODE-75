#include <iostream>
using namespace std;

void uppertolower(char arr[])
{

    int n = 100;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] != ' ' && arr[i] >= 'A' && arr[i] <= 'Z')
        {

            arr[i] = arr[i] - 'A' + 'a';
        }
    }
}

int main()
{

    char arr[100] = "";

    cin.getline(arr, 100);

    uppertolower(arr);

    cout << arr << endl;

    return 0;
}