#include <iostream>

using namespace std;

int main() {
    int arr[10];
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter 10 elements: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter element number " << i + 1 << ": ";
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    cout << "Sum = " << sum << endl;

    float avg = static_cast<float>(sum) / size;
    cout << "Average = " << avg << endl;

    return 0;
}
