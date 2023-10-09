#include <iostream>
#include <string>

using namespace std;

int countWords(const string &str) {
    int wordCount = 0;
    bool inWord = false;

    for (char c : str) {
        if (c == ' ' || c == '\t' || c == '\n') {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            ++wordCount;
        }
    }

    return wordCount;
}

int main() {
    string input;
    getline(cin, input);

    int wordCount = countWords(input);
    cout << wordCount << endl;

    return 0;
}
