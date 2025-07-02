#include <iostream>
#include <unordered_map>
#include<algorithm>
#include <vector>
using namespace std;

// vector<pair<char, int>>findFrequency(string str, int n)
// {

//     vector<pair<char, int>> ans;
//     unordered_map<char, int>m;

//     int frequncy = 0;

//     for (int i = 0; i < n; i++)
//     {
//         m[str[i]]++;

//         frequncy++;
//         ans.push_back(str[i], frequncy);
//     }

//     return ans;
// }


// vector<pair<char, int>>findFrequency(string str, int n)
// {

//   vector<pair<char, int>> ans;
//   sort(str.begin() , str.end());

//     for (int i = 0; i < n; i++)
//     {
//         int frequency = 1;

//         while (i < n - 1 && str[i] == str[i + 1])
//         {
//             frequency++;
//             i++;
//         }

//         if (frequency > 0)
//         {
//               ans.push_back({str[i], frequency});
//         }
//     }

//     return ans;
// }

// int main()
// {

//     string str = "aabbccaaaaadebbbbbaaaacccceeeedddd";

//     int n = str.length();

  
//     vector<pair<char, int>> finalans = findFrequency(str, n);

//     for (auto p : finalans)
//     {
//         cout << p.first << ": " << p.second << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <map>
using namespace std;

void findFrequency(string str) {
    map<char, int> mp;

    // Count frequency of each character
    for (int i = 0 ; i < str.length();i++) {
        mp[str[i]]++;
    }

    // Print the result
for (auto p : mp) {
    cout << p.first << ": " << p.second << endl;
}
}

int main() {
    string str = "aabbcaadebbacccedddaaaabbb";

    findFrequency(str);

    return 0;
}
