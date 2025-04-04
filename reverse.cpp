
// reversing array using biwise XOR
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int start = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    int end = n - 1;

    while (start < end)
    {

        arr[start] = arr[start] ^ arr[end];
        arr[end] = arr[end] ^ arr[start];
        arr[start] = arr[start] ^ arr[end];

        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
