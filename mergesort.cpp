#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> &arr, int start, int end, int mid)
{
    // create a left aaray and right array to copy hte elements from orginal array
    int leftlength = mid - start + 1;
    int rightlength = end - mid;

    int *leftarr = new int[leftlength];
    int *rightarr = new int[rightlength];

    // k is the  starting index og origin array
    int k = start;

    // copying the elemetns in left array of original array
    for (int i = 0; i < leftlength; i++)
    {
        leftarr[i] = arr[k];
        k++;
    }

    k = mid + 1;
    // copying the elemetns in right array of original array
    for (int i = 0; i < rightlength; i++)
    {
        rightarr[i] = arr[k];
        k++;
    }

    // mereging two sorted arrays
    int leftindex = 0;
    int rightindex = 0;
    int originalarrayindex = start;

    while (leftindex < leftlength && rightindex < rightlength)
    {
        if (leftarr[leftindex] < rightarr[rightindex])
        {
            arr[originalarrayindex] = leftarr[leftindex];
            originalarrayindex++;
            leftindex++;
        }

        else
        {
            arr[originalarrayindex] = rightarr[rightindex];
            originalarrayindex++;
            rightindex++;
        }
    }

    // jab left array khatam ho gyA HO Aur right array me aabhi bhi element baki ho

    while (rightindex < rightlength)
    {

        arr[originalarrayindex] = rightarr[rightindex];
        originalarrayindex++;
        rightindex++;
    }

    while (leftindex < leftlength)
    {
        arr[originalarrayindex] = leftarr[leftindex];
        originalarrayindex++;
        leftindex++;
    }
}

void meregeSort(vector<int> &arr, int start, int end)
{

    int mid = (start + end) / 2;

    // base cases
    if (start > end)
    {
        return;
    }
    if (start == end)
    {
        return;
    }

    // sort left array using recursion

    meregeSort(arr, start, mid);

    // sort right array using recursion
    meregeSort(arr, mid + 1, end);

    // merege two sorted arrays
    merge(arr, start, end, mid);
}

int main()
{

    vector<int> arr = {2, 7, 6, 9, 1, 8};
    int n = arr.size();
    int start = 0;
    int end = n - 1;

    meregeSort(arr, start, end);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
