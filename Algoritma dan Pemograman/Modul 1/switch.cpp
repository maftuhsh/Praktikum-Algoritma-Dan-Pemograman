#include <iostream>
using namespace std;
int main()
{
 char nilai;
 cout<<"NAMA : Maftuh Siroj Hamdani"<<endl;
 cout<<"NIM : 2412050"<<endl;
 cout << "Input Nilai Anda (A - E): ";
 cin >> nilai;
 switch (nilai) {
 case 'A':
 cout << "Pertahankan nilai Anda" << endl;
 break;
 case 'B':
 cout << "Masih bisa ditingkatkan lagi" << endl;
 break;
 case 'C':
 cout << "Setidaknya tidak mengulang" << endl;
 break;
 case 'D':
 cout << "Silakan mengulang tahun depan" << endl;
 break;
 case 'E':
 cout << "Belajar lebih giat lagi" << endl;
 break;
default:
 cout << "Maaf, format nilai tidak sesuai" << endl;
 }
 return 0;
}