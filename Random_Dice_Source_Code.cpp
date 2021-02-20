#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
// 4 headers yang akan gw masukin kedalam program ini
// update an terbaru, fix bug

using namespace std;

int main()
{
    cout << "\n ===== SELAMAT DATANG DI PROGRAM RANDOM DICE ===== \n" << endl; // opening
    char mau1; // declaration variable
    cout << "Mau acak dadu? (y/n) : ";
    cin >> mau1;
    // inputan user wanna
    if( mau1 == 'y' ) {
        cout << "Hasilnya " << 1 + (rand() % 8) << endl << endl; // hasil yang pertamanya
        while(true) {
            char mau2; // declaration variable 2nd
            cout << "Mau lagi? (y/n) : ";
            cin >> mau2;
            // inputan user wanna 2nd
            if( mau2 == 'y' ) {
                int tampung = 1 + (rand() % 8); // gw bikin variable aja
                cout << "- Hasil randomnya adalah " << tampung << endl; // ini hasil perulangan randomnya (forever)
                cout << "- Hasil akar kuadratnya adalah " << sqrt(tampung) << endl;
            } else if( mau2 == 'n' ) {
                cout << "Oke sampai jumpa" << endl;
                break;
            } else {
                cout << "Lol" << endl;
                int ulang = 1;
                while( ulang <= 600 ) {
                    if( ulang == 5 ) {
                        ulang++; // increment didalam break & continue
                        continue;
                    }
                    cout << "Error 405 on " << ulang << endl;
                    ulang++;
                }
                break;
            }
        }
    } else if( mau1 == 'n' ) {
        cout << "Oke, terima kasih atas menggunakan tool ini" << endl;
    } else {
        cout << "Lolz" << endl;
        int ulang2 = 1;
        do{
            cout << "Error system on " << ulang2 << endl;
            ulang2++;
        } while( ulang2 <= 800 );
    }
    cout << endl; // endline baru
    cout << "Terima kasih atas menggunakan software ini dengan baik, aku harap\n";
    cout << "Kamu menyukainya" << endl;

    cin.get();
    return 0;
}
