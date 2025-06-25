#include <iostream>
#include <string>
using namespace std;

string longestRepeatingSubstring(string s) {
    int n = s.length();
    string longest = "";

    // Try every pair of starting points (i, j)
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int k = 0;
            // Check how long the substrings match
            while (i + k < n && j + k < n && s[i + k] == s[j + k]) {
                k++;
                // Update if this repeating substring is longer
                if (k > longest.length()) {
                    longest = s.substr(i, k);
                }
            }
        }
    }

    return longest.empty() ? "No repeating pattern found" : longest;
}

// Example usage
int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    string result = longestRepeatingSubstring(s);
    cout << "Longest Repeating Pattern: " << result << endl;
    return 0;
}
