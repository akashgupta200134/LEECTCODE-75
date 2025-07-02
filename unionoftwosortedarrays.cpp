#include <iostream>
#include <vector>
using namespace std;

vector<int> Union(vector<int> arr1, vector<int> arr2, int n, int m)
{

    int i = 0;
    int j = 0;

    vector<int> result;

    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
// back() is inbuilt function in cpp  to check the previous element result(result.size()-1)
            if (result.size() == 0 || result.back() != arr1[i])
            {
                result.push_back(arr1[i]);
            }
            i++;
        }

        else
        {

            if (result.size() == 0 || result.back() != arr2[j])
            {
                result.push_back(arr2[j]);
            }

            j++;
        }
    }
  

    // condition to handle => if arr1 have more elements than arr2 or elements remain in arr1
        while (i < n)
        {
            if (result.back() != arr1[i])
            {
                result.push_back(arr1[i]);
            }
            i++;
        }

         // condition to handle  => if arr2 have more elements than arr1 or elements remain in arr2
        while (j < m)
        {
            if (result.back() != arr2[j])
            {
                result.push_back(arr2[j]);
            }
            j++;
        }
    

    return result;
}

int main()
{

    vector<int> arr1 = {1, 2, 3, 3, 4, 5, 6};
    vector<int> arr2 = {3, 3, 4, 5, 5, 6, 7, 8};

    int n = arr1.size();
    int m = arr2.size();

    vector<int> ans = Union(arr1, arr2, n, m);

    for(int i = 0 ; i < ans.size(); i++){
        cout << ans[i] <<" " ;
    }

return 0;
    
}