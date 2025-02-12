#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> words = {"apple", "banana", "cherry", "date"};
    words.push_back("elderberry");
    sort(words.begin(), words.end());

    auto it = find(words.begin(), words.end(), "cherry");
    if (it != words.end()) {
        cout << "Position of 'cherry': " << distance(words.begin(), it) << endl;
    }

    words.erase(remove(words.begin(), words.end(), "banana"), words.end());
    cout << "Final list of words: ";
    for (const string& word : words) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
