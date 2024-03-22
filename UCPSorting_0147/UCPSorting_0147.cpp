// UCPSorting_0147.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Tugas A
//1. Algoritma Insertion Sort bekerja dengan cara membandingkan elemen - elemen dalam array dan menukarnya jika diperlukan.
//2. Algoritma ini menggunakan perbandingan untuk mencari elemen terkecil dalam daftar. Dengan cara ini, algoritma membandingkan setiap elemen dengan elemen lain dalam daftar untuk menentukan elemen yang paling kecil.
//3. Dalam algoritma pengurutan, jumlah langkah yang dilakukan biasanya diukur dalam istilah kompleksitas waktu. Kompleksitas waktu menggambarkan jumlah operasi yang dilakukan oleh algoritma sebagai fungsi dari ukuran input.

#include <iostream>

int main()
{
#include <algorithm> // for std::swap

    void selectionSort(int arr[], int n) {
        for (int j = 0; j < n - 1; j++) {
            // Langkah 2a
            int min_index = j;

            // Langkah 2b dan 2c
            for (int i = j + 1; i < n; i++) {
                if (arr[i] < arr[min_index]) {
                    // Langkah 2c
                    min_index = i;
                }
            }

            // Langkah 3
            std::swap(arr[j], arr[min_index]);
        }
    }

}
