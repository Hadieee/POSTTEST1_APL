#include <iostream>
using namespace std;

// Deklarasi variabel yang diperlukan
int n, r, u, x, jumlah, hasil, tanya;


// Fungsi rekursif untuk bilangan faktorial
int faktorial(int value)
{
    int jumlah = 1;
    for(int i = 1; i<=value; i++)
    {
        jumlah *= i;
    }
    return jumlah;
}

// Prosedur untuk menginput nilai dari n dan r
void input()
{
    cout << "masukkan nilai n : ";
    cin >> n;
    cout << "masukkan nilai r : ";
    cin >> r;
}

// Prosedur untuk perhitungan dari kombinasi
void kombinasi()
{
    if (n>r){
        x = n - r;
        hasil=faktorial(n)/(faktorial(x)*faktorial(r));
        cout<<"Hasil dari kombinasi diatas adalah " << hasil;"\n";
    }else{
        cout << "n tidak boleh lebih kecil dari r\n";
    }
}

// Prosedur untuk perhitungan dari permutasi
void permutasi()
{
    if (n>r)
    {
        x=n-r;
        hasil=faktorial(n)/(faktorial(x));
        cout<<"Hasil dari permutasi diatas adalah " << hasil;"\n";
    } else
    {
        cout << "n tidak boleh lebih kecil dari r ";
    }
}


// Fungsi utama
int main()
{
    int a = 0; // a untuk indikator perulangan while

    // Perulangan agar bisa menghitung kembali
    while (a == 0)
    {
    cout << "==========================================" << endl;
    cout<<"PROGRAM MENGHITUNG NILAI DARI KOMBINATORIK" << endl;
    cout << "==========================================" << endl;
    cout <<"\n" << "1. kombinasi " << endl;
    cout << "2. permutasi " << endl;
    cout << "masukkan pilihan anda : ";
    cin >>u; // u untuk pilihan

        if(u == 1) // untuk pilihan kombinasi
        {
            input(); // User akan menginput nilai n dan r
            kombinasi(); // Untuk perhitungan kombinasi
            cout<<"\nApakah anda ingin menghitung kembali ? (1 untuk ya / 2 untuk tidak) : ";
            cin>>tanya; // user akan ditanya apakah ingin menghitung kembali


            if (tanya==1) // untuk menghitung kembali
            {
            int a = 0;
            } else if (tanya==2) // untuk exit dari program
            {
            cout<<"=======================================================================" << endl;
            cout << "Terimakasih telah menggunakan program ini :) Semoga harimu menyenangkan" << endl;
            cout<<"=======================================================================" << endl;
            break;
            } else // untuk kesalahan dalam memilih
            {
            cout<<"Maaf, pilihan yang anda masukkan salah\n" << endl;
                int a = 1;
            }

        } else if (u == 2) // untuk pilihan permutasi
        {
            input(); // User akan menginput nilai n dan r
            permutasi(); // Untuk perhitungan permutasi
            cout<<"\nApakah anda ingin menghitung kembali ? (1 untuk ya / 2 untuk tidak) : ";
            cin>>tanya; // user akan ditanya apakah ingin menghitung kembali


            if (tanya==1) // untuk menghitung kembali
            {
            int a = 0;
            } else if (tanya==2) // untuk exit dari program
            {
            int a = 1;
            cout<<"=======================================================================" << endl;
            cout << "Terimakasih telah menggunakan program ini :) Semoga harimu menyenangkan" << endl;
            cout<<"=======================================================================" << endl;
            break;
            } else // untuk kesalahan dalam memilih
            {
            cout<<"Maaf, pilihan yang anda masukkan salah\n" << endl;
            int a = 1;
            }
        } else // untuk selain dari kombinasi dan permutasi
        {
            cout<<"Maaf, pilihan yang anda masukkan salah\n" << endl;
            int a = 1;
        }
    } 
}
