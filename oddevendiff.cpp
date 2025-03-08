#include <iostream>
#include<cstring>
#include<math.h>
using namespace std;


int diffrenceoddeven(char arr[], int n)
{
    int odd = 0;
    int even = 0;
    int diffrence  = 0 ;
    for (int i = 0; i < n; i++)
    {
        int digit = arr[i] -'0';

        if((i + 1)%2 == 0){
even = even + digit;

        }

        else{
            odd = odd + digit;
        }

        
    }
   

    diffrence = abs(even - odd);

    return diffrence;


}

int main()
{

    char arr[] = "4567";
    int n = strlen(arr);

    int  result = diffrenceoddeven(arr, n);

    cout << result << endl ;
}