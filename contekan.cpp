#include <stdio.h>    //mengakses file library stdio.h
#include <stdlib.h>   //mengakses file library stdlib.h
 
int main(void)   { //fungsi
 int makanan,minuman,total_bayar,b,total,h,i,j,k,w,x,y,z,total1,total2;  // deklarasi variabel bertipe integer
awal:   //untuk mengembalikan program ke awal
 
printf ("=====================\n");  //output
printf ("======CAFE GAUL======\n");          //output
printf ("Pilih menu makanan\n");  //output
printf ("1.Mie goreng\n");  //output
printf ("2.Mie rebus\n");//output
printf ("3.Ayam goreng\n");  //output
printf ("4.Telor goreng\n"); //output
printf ("Pesan makanan(1-4): ");  //output
scanf("%d", &makanan);  //mencetak output variabel makanan
switch(makanan)   //kondisi untuk memilih
{
case 1 :        //kondisi pertama
 
printf ("Mie goreng\n");    //output
printf ("Harga: Rp.3500\n");//output
h=3500;    //nilai dari variabel h
printf ("\nJumlah pembelian : "); //output
scanf("%d", &b); //mencetak variabel b
total1=b*h; // b= jmlah pembelian h=harga satuan dari makanan
printf("Total makanan= %d \n", total1); //output total makanan
printf ("========================\n");
 
break;
case 2 :   // kondisi kedua
printf ("Mie rebus\n");  //output
printf ("Harga: Rp.3000\n"); //output
i=3000;      //nilai dari i
printf ("\nJumlah pembelian : ");   //output
scanf("%d", &b); //mencetak variabel b
total1=b*i;  //b=jumlah beli, i=harga satuan makanan (mie rebus)
printf("Total makanan = %d\n", total1); //output total makanan
printf ("========================\n");    
 
break;
case 3 :   //kondisi ketiga
printf ("Ayam goreng\n");   //output
printf ("Harga: Rp.5000\n"); //output
j=5000;  // nilai dari j
printf ("\nJumlah pembelian : ");    //output
scanf("%d", &b);  //mencetak variabel b
total1=b*j; // b=jumlah beli, j=harga satuan makanan
printf("Total makanan = %d\n", total1); //output total makanan
printf ("========================\n");
 
break;
case 4 : //kondisi keempat
printf ("Telor goreng\n");  //output
printf ("Harga: Rp.4000\n");
k=4000;      //nilai dari k
printf ("Jumlah pembelian : ");
scanf("%d", &b);   //mencetak variabel b
total1=b*k;
printf("Total makanan = %d\n", total1);
printf ("========================\n");
 
break; //selesai kondisi keempat lanjut pada kondisi berikutnya
}
printf("Memilih menu minuman : \n"); //output
printf ("5. Es teh\n");
printf ("6. Es jeruk\n");
printf ("7. Kopi\n");
printf ("8. Susu Cokelat\n");
printf("Pesan minuman(5-8): ");
scanf("%d", &minuman);//mencetak variabel minuman
 
switch(minuman)  //kondisi pilihan minuman
{
case 5 : //kondisi ke 5
printf ("Es teh\n"); //output
printf ("Harga: Rp.1000\n");
w=1000;
printf ("\nJumlah pembelian : ");
scanf("%d", &b); //mencetak variabel b
total2=b*w; //b= jumlah pembelian w=harga satuan es teh
printf("Total minuman = %d\n", total2);  //output total minuman yang akan mencetak variabel total
printf ("========================\n");
break;
case 6 ://kondisi ke 6
printf ("Es jeruk\n");//output
printf ("\nHarga: Rp.1500\n"); //output
x=1500;   //nilai x
printf ("\n");
printf ("\nJumlah pembelian : ");
scanf("%d", &b);
total2=b*x; //b=jumlah pemebelian , x=harga satuan es jeruk
printf("Total minuman = %d\n", total2);
printf ("========================\n");
break;
case 7 :
printf ("Kopi\n");
printf ("Harga: Rp.2000\n");
y=2000;
printf ("Jumlah pembelian : ");
scanf("%d", &b);
total2=b*y;
printf("Total minuman = %d\n", total2);
printf ("========================\n");
break;
case 8 :
printf ("Susu Cokelat\n");
printf ("Harga: Rp.2500\n");
z=2500;
printf ("\nJumlah pembelian : ");
scanf("%d", &b);
total2=b*z;
printf("Total minuman = %d\n", total2);
printf ("========================\n");
break;
total_bayar= total1+total2; //perhitungan jumlah pembayaran
printf("\nTotal pembayaran = %d", total_bayar);  //output
}
goto awal; //fungsi untuk kembali ke program awal
system ("Pause"); //  library stdio.h
return(0);  //membalikan nilai (0);
}