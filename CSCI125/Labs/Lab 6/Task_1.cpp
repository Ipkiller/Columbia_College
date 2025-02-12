#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str = "Problem Solving with C++";
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;

    int pos = str.find("WITH");
    if (pos != string::npos) {
        str.replace(pos, 4, "WITH AMAZING");
    }
    cout << "Modified Sentence: " << str << endl;

    return 0;
}
