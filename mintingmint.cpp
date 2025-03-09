#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << " nter the no of min to the first boy" << endl;
    cin >> n;

    int length;
    cout << "Enter the length of the Queue" << endl;
    cin >> length;

    int sum = n;
    int prev = 0;

    for (int i = 1 ; i < length; i++)
    {
            prev = sum - 1;
            sum = sum + prev;
    }

   
    cout << sum << endl;
    return 0;
}