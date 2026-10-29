#include <iostream>
#include <string>
using namespace std;

void insertionSort(string arr[], int n) {
    for (int i = 1; i < n; i++) {
        string key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main() {
    int n;
    cout << "masukkan jumlah kata: ";
    cin >> n;
    cin.ignore(); // Membersihkan buffer

    string arr[n];
    cout << "masukkan " << n << " kata: ";
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i]);
    }

    cout << "proses pengurutan:" << endl;
    insertionSort(arr, n);

    cout << "kata setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}