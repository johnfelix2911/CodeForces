#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    string str;
    vector<int> a;
    
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        cin >> str;  // Reading the string using std::cin

        a.clear(); // Clear the vector for each test case
        for (char c : str) {
            if (isdigit(c)) { // Ensure the character is a digit
                a.push_back(c - '0');
            }
        }

        for (int d : a) {
            cout << d << " ";
        }
        cout << endl;  // Add a newline for better readability between test cases
    }
    return 0;
}
