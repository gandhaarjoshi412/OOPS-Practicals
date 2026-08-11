#include <iostream>
using namespace std;

int main() {
    int arr1[2][2];
    int arr2[2][2];
    int arr3[2][2];
    
    cout << "Elements for first matrix:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> arr1[i][j];
        }
    }

    cout << "Elements for second matrix:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> arr2[i][j];
        }
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout << "Result matrix:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}