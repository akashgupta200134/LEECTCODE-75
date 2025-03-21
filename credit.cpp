#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countcredit(int NumberofSub, vector<int> creditpersub, int Numberoftudent, vector<int> creditlimitofStudent)
{
    int count = 0;

    sort(creditpersub.begin(), creditpersub.end());
    sort(creditlimitofStudent.begin(), creditlimitofStudent.end());

    int i = 0;
    int j = 0;

    while (i < NumberofSub && j < Numberoftudent)
    {
        if (creditlimitofStudent[j] >= creditpersub[i])
        {
            count++;
             i++;
        }
        j++;
    }
    return count; 
}

int main()
{

    int NumberofSub;
    cout << "Enter the  nUmber of Subjects" << endl;
    cin >> NumberofSub;

    vector<int> creditpersub(NumberofSub);
    cout << "Enter the creditlimt of Subjects" << endl;
    for (int i = 0; i < NumberofSub; i++)
    {

        cin >> creditpersub[i];
    }

    int Numberofstudent;
    cout << "Enter the Number of Student " << endl;
    cin >> Numberofstudent;

    vector<int> creditlimitofStudent(Numberofstudent);
    cout << "Enter the Credit limit of the students" << endl;
    for (int i = 0; i < Numberofstudent; i++)
    {

        cin >> creditlimitofStudent[i];
    }

    int result = countcredit(NumberofSub, creditpersub, Numberofstudent, creditlimitofStudent);

    cout << result << endl;

    return 0;
}
