#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

// void centerstring(char*s)
// {
// 	HANDLE hOut;
// 	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
// 	COORD NewSBSize;
// 	NewSBSize = GetLargestConsoleWindowSize(hOut);
// 	int l=strlen(s);
// 	int pos=(int)((NewSBSize.X-l)/2);
// 	for(int i=0;i<pos;i++)
// 	cout<<" ";
// 	cout<<s;
// }

int main() {

  HANDLE warna = GetStdHandle(STD_OUTPUT_HANDLE); // Deklarasi variabel 'warna' untuk menginisialisasi text Color

  char nama[50];
  char namaMakanan;
  char namaMinuman[100];
  int noMeja, makanan, minuman, hargaMakanan, hargaMinuman, jumlahMakanan, jumlahMinuman, total_bayar, totalMakanan, totalMinuman, ppn;

  awal:   //untuk mengembalikan program ke awal

  // centerstring (" ======================== \n");
  // centerstring (" SISFO \n");
  // centerstring (" Pemesanan Makanan \n");
  // centerstring (" RUMAH MAKAN KAMI BERSAMA \n");
  // centerstring (" ======================================================= \n");

  printf(" Selamat Datang... \n");
  printf(" Silahkan isi form berikut : \n");
  printf(" ---------------------------- \n");

  printf(" Nama : ");
  cin.getline(nama, 50);

  printf("\n No Meja : ");
  cin>>noMeja;
  printf("\n");

  cout<<"  ----------------------------------- ";cout<<endl;
  cout<<" |            Menu Makanan           |";cout<<endl;
  cout<<" |-----------------------------------|";cout<<endl;
  cout<<" | 1. Nasi Pecel + Ikan : Rp.  8.000 |";cout<<endl;
  cout<<" | 2. Nasi Pecel + Ayam : Rp. 10.000 |";cout<<endl;
  cout<<" | 3. Nasi + Rendang    : Rp. 13.000 |";cout<<endl;
  cout<<" | 4. Nasi Rames        : Rp.  9.000 |";cout<<endl;
  cout<<" | 5. Gudeg Jawa        : Rp.  7.000 |";cout<<endl;
  cout<<" | 6. Ketoprak          : Rp. 10.000 |";cout<<endl;
  cout<<" |-----------------------------------|";cout<<endl;
  printf (" Pilih Menu [1-6] : ");
  scanf("%d", &makanan);
  printf("\n");

  switch (makanan) {
    case 1 : // Kondisi pertama

    hargaMakanan = 8000;
    namaMakanan[50] = "NasiPecel+Ikan";
    printf(" Nasi Pecel + Ikan\n");
    printf("----------------------- \n");
    cout<<" Jumlah Pembelian : ";
    scanf("%d", &jumlahMakanan);
    totalMakanan = hargaMakanan * jumlahMakanan;
    printf(" Total Makanan = %d \n", totalMakanan);
    break;

    case 2 : // Kondisi kedua

    hargaMakanan = 10000;
    //namaMakanan = "Nasi Pecel + Ayam";
    printf(" Nasi Pecel + Ayam\n");
    printf("----------------------- \n");
    cout<<" Jumlah Pembelian : ";
    scanf("%d", &jumlahMakanan);
    totalMakanan = hargaMakanan * jumlahMakanan;
    printf(" Total Makanan = %d \n", totalMakanan);
    break;

    case 3 : // Kondisi kedua

    hargaMakanan = 13000;
    //namaMakanan = "Nasi + Rendang";
    printf(" Nasi + Rendang\n");
    printf("----------------------- \n");
    cout<<" Jumlah Pembelian : ";
    scanf("%d", &jumlahMakanan);
    totalMakanan = hargaMakanan * jumlahMakanan;
    printf(" Total Makanan = %d \n", totalMakanan);
    break;

    case 4 : // Kondisi kedua

    hargaMakanan = 9000;
    //namaMakanan = "Nasi Rames";
    printf(" Nasi Rames\n");
    printf("----------------------- \n");
    cout<<" Jumlah Pembelian : ";
    scanf("%d", &jumlahMakanan);
    totalMakanan = hargaMakanan * jumlahMakanan;
    printf(" Total Makanan = %d \n", totalMakanan);
    break;

    case 5 : // Kondisi kedua

    hargaMakanan = 7000;
    //namaMakanan = "Gudeg Jawa";
    printf(" Gudeg Jawa \n");
    printf("----------------------- \n");
    cout<<" Jumlah Pembelian : ";
    scanf("%d", &jumlahMakanan);
    totalMakanan = hargaMakanan * jumlahMakanan;
    printf(" Total Makanan = %d \n", totalMakanan);
    break;

    case 6 : // Kondisi kedua

    hargaMakanan = 10000;
    //namaMakanan = "Ketoprak";
    printf(" Ketoprak \n");
    printf("----------------------- \n");
    cout<<" Jumlah Pembelian : ";
    scanf("%d", &jumlahMakanan);
    totalMakanan = hargaMakanan * jumlahMakanan;
    printf(" Total Makanan = %d \n", totalMakanan);
    break;
  }

  printf("\n");

  cout<<"  ----------------------------------- ";cout<<endl;
  cout<<" |            Menu Minuman           |";cout<<endl;
  cout<<" |-----------------------------------|";cout<<endl;
  cout<<" | 1. Es Teh Manis      : Rp.  3.500 |";cout<<endl;
  cout<<" | 2. Teh Manis Hangat  : Rp.  3.000 |";cout<<endl;
  cout<<" | 3. Es Tawar          : Rp.  1.000 |";cout<<endl;
  cout<<" | 4. Susu Soda Gembira : Rp.  5.000 |";cout<<endl;
  cout<<" | 5. Teajus  Gula Batu : Rp.  2.000 |";cout<<endl;
  cout<<" | 6. Nutrisari         : Rp.  3.000 |";cout<<endl;
  cout<<" |-----------------------------------|";cout<<endl;
  printf (" Pilih Menu [1-6] : ");
  scanf("%d", &minuman);
  printf("\n");

  switch (minuman) {
    case 1 : // Kondisi pertama

    hargaMinuman = 3500;
    printf(" Es Teh Manis \n");
    printf("----------------------- \n");
    cout<<" Jumlah Pembelian : ";
    scanf("%d", &jumlahMinuman);
    totalMinuman = hargaMinuman * jumlahMakanan;
    printf(" Total Minuman = %d \n", totalMinuman);
    break;

    case 2 : // Kondisi kedua
    hargaMinuman = 3000;
    printf(" Teh Manis Hangat\n");
    printf("----------------------- \n");
    cout<<" Jumlah Pembelian : ";
    scanf("%d", &jumlahMinuman);
    totalMinuman = hargaMinuman * jumlahMakanan;
    printf(" Total Minuman = %d \n", totalMinuman);
    break;

    case 3 : // Kondisi kedua
    hargaMinuman = 1000;
    printf(" Es Tawar\n");
    printf("----------------------- \n");
    cout<<" Jumlah Pembelian : ";
    scanf("%d", &jumlahMinuman);
    totalMinuman = hargaMinuman * jumlahMakanan;
    printf(" Total Minuman = %d \n", totalMinuman);
    break;

    case 4 : // Kondisi kedua
    hargaMinuman = 5000;
    printf(" Susu Soda Gembira\n");
    printf("----------------------- \n");
    cout<<" Jumlah Pembelian : ";
    scanf("%d", &jumlahMinuman);
    totalMinuman = hargaMinuman * jumlahMinuman;
    printf(" Total Minuman = %d \n", totalMinuman);
    break;

    case 5 : // Kondisi kedua
    hargaMinuman = 2000;
    printf(" Teajus  Gula Batu \n");
    printf("----------------------- \n");
    cout<<" Jumlah Pembelian : ";
    scanf("%d", &jumlahMinuman);
    totalMinuman = hargaMinuman * jumlahMinuman;
    printf(" Total Minuman = %d \n", totalMinuman);
    break;

    case 6 : // Kondisi kedua
    hargaMinuman = 3000;
    printf(" Nutrisari \n");
    printf("----------------------- \n");
    cout<<" Jumlah Pembelian : ";
    scanf("%d", &jumlahMinuman);
    totalMinuman = hargaMinuman * jumlahMinuman;
    printf(" Total Minuman = %d \n", totalMinuman);
    break;
  }

  SetConsoleTextAttribute(warna, FOREGROUND_GREEN | FOREGROUND_INTENSITY); // Untuk membuat text menjadi berwarna Hijau
  cout<<"  ----------------------------------- ";cout<<endl;
  cout<<" |           Detail Pesanan          |";cout<<endl;
  cout<<" |-----------------------------------|";cout<<endl;
  cout<<" | ";printf("%s",namaMakanan);
  cout<<" | 2. Teh Manis Hangat  : Rp.  3.000 |";cout<<endl;
  cout<<" | 3. Es Tawar          : Rp.  1.000 |";cout<<endl;
  cout<<" | 4. Susu Soda Gembira : Rp.  5.000 |";cout<<endl;
  cout<<" | 5. Teajus  Gula Batu : Rp.  2.000 |";cout<<endl;
  cout<<" | 6. Nutrisari         : Rp.  3.000 |";cout<<endl;
  cout<<" |-----------------------------------|";cout<<endl;

  cin.get();
  system ("Pause");
  return 0;
}
