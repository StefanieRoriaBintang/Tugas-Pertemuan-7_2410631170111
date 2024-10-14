#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Masukkan nilai-nilai dalam array:\n";
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i << ": ";
        cin >> arr[i];
    }

    // Menemukan nilai tertinggi
    int max_value = *max_element(arr.begin(), arr.end());
    cout << "Nilai tertinggi dalam array adalah: " << max_value << endl;

    // Mencari elemen tertentu
    int search_value;
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> search_value;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == search_value) {
            cout << "Angka " << search_value << " ditemukan di indeks " << i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Angka " << search_value << " tidak ditemukan dalam array." << endl;
    }

    return 0;
}
