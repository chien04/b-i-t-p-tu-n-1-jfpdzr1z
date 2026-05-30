#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int left = 0;
    int right = s.length() - 1;

    bool palindrome = true;

    while (left < right) {
        if (s[left] != s[right]) {
            palindrome = false;
            break;
        }

        left++;
        right--;
    }

    if (palindrome) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}