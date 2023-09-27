#include <iostream>
#include <limits> // Digunakan untuk membersihkan buffer input

using namespace std;

// Fungsi untuk menampilkan matriks
void displayMatrix(int matrix[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

// Fungsi untuk penjumlahan dua matriks
void matrixAddition(int A[2][2], int B[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Fungsi untuk pengurangan dua matriks
void matrixSubtraction(int A[2][2], int B[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

// Fungsi untuk perkalian skalar pada matriks
void scalarMultiplication(int scalar, int matrix[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = scalar * matrix[i][j];
        }
    }
}

// Fungsi untuk perkalian dua matriks
void matrixMultiplication(int A[2][2], int B[2][2], int result[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int matrix1[2][2], matrix2[2][2], result[2][2], scalarResult[2][2];
    int scalar;
    int choice;
    char continueFlag;

    do {
        cout << "Pilih operasi yang ingin Anda lakukan:\n";
        cout << "1. Penjumlahan Matriks\n";
        cout << "2. Pengurangan Matriks\n";
        cout << "3. Perkalian Skalar\n";
        cout << "4. Perkalian Matriks\n";
        cout << "Masukkan nomor operasi (1/2/3/4): ";

        // Menangani input yang tidak valid
        while (!(cin >> choice) || choice < 1 || choice > 4) {
            cin.clear(); // Mengembalikan status input stream ke normal
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Menghapus karakter sampai akhir baris
            cout << "Inputan salah. Masukkan nomor operasi yang valid (1/2/3/4): ";
        }

        cout << "Masukkan elemen matriks pertama: \n";
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> matrix1[i][j];
            }
        }

        cout << "Masukkan elemen matriks kedua: \n";
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> matrix2[i][j];
            }
        }

        if (choice == 1) {
            cout << "Hasil penjumlahan matriks:\n";
            matrixAddition(matrix1, matrix2, result);
            displayMatrix(result);
        } else if (choice == 2) {
            cout << "Hasil pengurangan matriks:\n";
            matrixSubtraction(matrix1, matrix2, result);
            displayMatrix(result);
        } else if (choice == 3) {
            cout << "Masukkan skalar: ";

            // Menangani input skalar yang tidak valid
            while (!(cin >> scalar)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Inputan salah. Masukkan skalar yang valid: ";
            }

            cout << "Hasil perkalian skalar matriks pertama:\n";
            scalarMultiplication(scalar, matrix1, scalarResult);
            displayMatrix(scalarResult);
            cout << "Hasil perkalian skalar matriks kedua:\n";
            scalarMultiplication(scalar, matrix2, result);
            displayMatrix(result);
        } else if (choice == 4) {
            cout << "Hasil perkalian dua matriks:\n";
            matrixMultiplication(matrix1, matrix2, result);
            displayMatrix(result);
        }

        cout << "Apakah Anda ingin melakukan operasi matriks lagi? (Y/N): ";
        cin >> continueFlag;
    } while (continueFlag == 'Y' || continueFlag == 'y');

    cout << "Baiklaaahh." << endl;

    return 0;
}
