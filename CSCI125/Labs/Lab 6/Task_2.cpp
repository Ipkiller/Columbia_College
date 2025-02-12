#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};
    numbers.push_back(60);
    numbers.insert(find(numbers.begin(), numbers.end(), 30), 25);
    sort(numbers.begin(), numbers.end(), greater<int>());

    cout << "Sorted Vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
