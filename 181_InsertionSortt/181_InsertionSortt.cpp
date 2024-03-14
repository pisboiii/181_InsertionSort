// 181_InsertionSortt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int arr[20];                                                    // Membuat Array dengan panjang data 20
int n;                                                          // Membuat Variable inputan n

void input() {                                                  // Prosedure input
	while (true)
	{

		cout << "Masukan Jumlah Data pada Array : ";            // Membuat inputan jumlah elemen Array
		cin >> n;                                               // Memanggil Variabel inputan n

		if (n <= 20) {                                          // Membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukan maksimal 20 Elemen.\n";     // MEnampilkan pesan jika lebih dari 20
		}
	}
	cout << endl;                                                // Membuat jarak per baris program
	cout << "====================" << endl;                      // Membuat tampilan susunan data element Array
	cout << "Masukan Elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++)                                  // Mengunakan perulangan for untuk menyimpan data pada Array
	{
		cout << "Data ke-" << (1 + i) << " :";                   // Memasukkan atau menginputkan nilai data n
		cin >> arr[i];                                           // Menyimpan nilai data n kedalam Arrayw arr
	}
}


int main()
{

}

