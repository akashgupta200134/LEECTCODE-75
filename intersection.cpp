#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findintersection(vector<int> &a, vector<int> &b)
{

    int n = a.size();
    int m = b.size();

    vector<int> result;

    int i = 0;
    int j = 0;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            if (result.size() == 0 || result.back() != a[i])
            {
                result.push_back(a[i]);
            }

            i++;
        }

        else if (a[i] < b[j])
        {
            i++;
        }

        else
        {
            j++;
        }
    }

    return result;
}

int main()
{
    vector<int> a = {3, 4, 5, 2, 1, 4};
    vector<int> b = {11, 12, 9, 8, 2, 4, 5};

    vector<int> ans = findintersection(a, b);

    for (int i = 0; i < ans.size(); i++)
    {

        cout << ans[i] << endl;
    }

    return 0;
}