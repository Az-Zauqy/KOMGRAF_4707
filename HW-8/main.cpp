#include <iostream>
#include <math.h>

using namespace std;

int main() {
  // Deklarasi variabel
  float x1, y1, x2, y2, x_min, x_max, y_min, y_max;
  float m;

  // Input data
  cout << "Masukkan koordinat ujung kiri garis (x1, y1): " << endl;
  cout << "x1 = ";
  cin >> x1;
  cout << "y1 = ";
  cin >> y1 ;
  cout << "Masukkan koordinat ujung kanan garis (x2, y2): " << endl;
  cout << "x2 = ";
  cin >> x2;
  cout << "y2 = ";
  cin >> y2 ;
  cout << "Masukkan koordinat batas gambar (x_min, y_min, x_max, y_max): " << endl;
  cout << "x_min = ";
  cin >> x_min;
  cout << "y_min = ";
  cin >> y_min;
  cout << "x_max = ";
  cin >> x_max;
  cout << "x_max = ";
  cin >> y_max;

  // Hitung gradien garis
  m = (y2 - y1) / (x2 - x1);

  // Hitung titik potong
  float xp1 = x1 + (y_min - y1) / m;
  float yp1 = y1 + m * (x_min - x1);
  float xp2 = x1 + (y_max - y1) / m;
  float yp2 = y1 + m * (x_max - x1);

  cout << "\nPenjumlahan" << endl;
  cout << "m = (" << y2 << "-" << y1 << ") / (" << x2 << "-" << x1 << ") = " << m << endl;
  cout << "xp1 = " << x1 << "+" << "(" << y_min << "-" << y1 << ") /" << m << " = " << xp1 << endl;
  cout << "yp1 = " << y1 << "+" << m << "* (" << x_min << "-" << x1 << ") = " << yp1 << endl;
  cout << "xp2 = " << x1 << "+" << "(" << y_max << "-" << y1 << ") /" << m << " = " << xp2 << endl;
  cout << "yp2 = " << y1 << "+" << m << "* (" << x_max << "-" << x1 << ") = " << yp2 << endl;

  cout << "\nHasil penjumlahan" << endl;
  cout << "(x_min , yp1) = (" << x_min << ", " << yp1 << ")" << endl;
  cout << "(x_max , yp2) = (" << x_max << ", " << yp2 << ")" << endl;
  cout << "(xp1 , y_min) = (" << xp1 << ", " << y_min << ")" << endl;
  cout << "(xp2 , y_max) = (" << xp2 << ", " << y_max << ")" << endl;

  return 0;
}
