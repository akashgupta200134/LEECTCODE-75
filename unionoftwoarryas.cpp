#include <iostream>
#include <vector>
#include <climits>
using namespace std;


int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int sizea = 7;

    int brr[] = {5, 6, 7, 8, 9};
    int sizeb = 5;

    vector<int> ans;

    for (int i = 0; i < sizea; i++)
    {
        int value = arr[i];

        if (value != INT_MIN)
        {
            ans.push_back(value);
        }
    }

    for (int i = 0; i < sizeb; i++)
    {
        int value = brr[i];
        if (value != INT_MIN)
        {
            ans.push_back(value);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "  ";
    }
}