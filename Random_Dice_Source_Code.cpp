#include <iostream>
#include <string>
#include <cstdlib> 
#include <cmath>
// 4 libraries ini akan gw masukin kedalam program ini

using namespace std;

void Pangkat(long a) {
    long b = sqrt(a);
    cout << b << endl; // ini adalah bilangan pangkatnya
}

int main() 
{
    char mau; // declaration variable
    cout << "Mau acak dadu? (y/n) : ";
    cin >> mau;
    // inputanya

   if( mau == 'y' ) {
       while(true) {
           char mau2; // declaration of variable wanna
           cout << "Tekan (y/n) : ";
           cin >> mau2;
           // inputan wanna
           if( mau2 == 'y' ) {
               int acak = 1 + (rand() % 8);
               cout << "Hasil randomnya adalah " << acak << endl; // ini hasil randomnya
               cout << "Hasil kuadratnya adalah ";
               Pangkat(acak); // juga tersedia bilangan acak/random
           } else if( mau2 == 'n' ) {
               cout << "Oke.. thanks" << endl;
               break;
           } else {
               cout << "Lol\n" << endl;
               int ulang = 1;
               while( ulang <= 500 ) {
                   if( ulang == 10 ) {
                       ulang++;
                       continue; // lanjutkan
                   }
                   cout << "Error system at " << ulang << endl;
                   ulang++;
               }
               break;
           }
       }
   } else if( mau == 'n' ) {
       cout << "Oke" << endl;
   } else {
       cout << "Wtf.. lolz\n" << endl;
       int ulang2 = 1;
       do{
           cout << "Error program on " << ulang2 << endl;
           ulang2++;
       } while( ulang2 <= 600 ); 
   }
   cout << endl; // line baru
   cout << "License: Tool ini merupakan tool yang gratis dan bersumber terbuka \n";
   cout << "User dapat menggunakan tool ini dimanapun dan kapanpun, bahkan bisa diubah\n";
   cout << "Kode didalamnya." << endl; // license wise

    cin.get();
    return 0;
}