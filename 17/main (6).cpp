#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    const int size = 5;

        array <string, size> arr;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        string temp;

        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j].length() > arr[j + 1].length()) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
}
