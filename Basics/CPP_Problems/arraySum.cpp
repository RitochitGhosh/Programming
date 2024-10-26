#include <iostream>
#include <vector>
using namespace std;

int main() {
    int len;
    cin >> len;

    vector<int> arr(len);
    int sum = 0;

    for (int i = 0; i < len; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of elements: " << sum << endl;
    return 0;
}
