#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l; // Mulai dari indeks l
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2; // Hitung titik tengah dengan benar

        mergeSort(arr, l, m); // Panggil mergeSort untuk bagian kiri
        mergeSort(arr, m + 1, r); // Panggil mergeSort untuk bagian kanan

        merge(arr, l, m, r); // Gabungkan kedua bagian
    }
}

void show(int A[], int size) {
    for (int i = 0; i < size; i++) {
        cout << A[i] << " "; // Tambahkan spasi antar elemen
    }
    cout << endl;
}

int main() {
    cout << "Nama = Achmad Irfan Nandika" << endl;
    cout << "NIM = 2412049" << endl;

    int size;
    cout << "\nMasukan Banyak Data: ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; ++i) {
        cout << "\nMasukan Data array ke " << (i + 1) << " : ";
        cin >> arr[i];
    }

    mergeSort(arr, 0, (size - 1));

    cout << "Hasil: ";
    show(arr, size);
    
    return 0;
}
