#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

char firstNonRepeatingCharacter(const string &str) {
    unordered_map<char, int> charCount;
    
    // Count occurrences of each character
    for (char ch : str) {
        charCount[ch]++;
    }
    
    // Find the first character with count 1
    for (char ch : str) {
        if (charCount[ch] == 1) {
            return ch;
        }
    }
    
    return '-1';
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    
    char result = firstNonRepeatingCharacter(input);
    if (result != '-1') {
        cout << "The first non-repeating character is: " << result << endl;
    } else {
        cout << "All characters are repeated." << endl;
    }
    
    return 0;
}
