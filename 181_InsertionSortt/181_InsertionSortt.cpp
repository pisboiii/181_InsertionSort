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
 
void insertionsort() {                                           // Prosedure Insertionsort

	int temp;                                                    // Membuat variable data temporer atau penyimpanan sementara
	int i, j;                                                    // Membuat variable j sebagai penunda

	for (i = 1; i <= n - 1; i++) {                               // 1. looping dengan i dimulai dari 1 hingga n-1

		temp = arr[i];                                           // 2. simpan nilai arr[i] ke variable sementara temp

		j = i - 1;                                               // 3. settiing nilai j sama dengan i-1;

		while (j >= 0 && arr[j] > temp)                          // 4. looping while dimana nilai j lebih besar sama dengan 0 dan
			// arr[j] lebih besar daripada temp                    
		{
			arr[j + 1] = arr[j];                                 // 4a. simpan arr[j] ke dalam variable arr [j+1}
			j--;                                                 // 4b. decrement nilai j by 1
		}

		arr[j + 1] = temp;                                       // 5 simpan nilai temp ke dalam arr[j+1]

		cout << "\nPass " << i << " : ";                         // output ke layar
		for (int k = 0; k < n; k++) {                            // Looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";                               // Output ke layar
		}
	}
}

void display() {                                                 // Prosedure Display
	cout << endl;                                               // Output baris kosong
	cout << "\n==================================" << endl;       // Output ke layar
	cout << " Element Array yang telah tersusun" << endl;       // Output ke layar
	cout << "==================================" << endl;       // Ouput ke layar

	for (int j = 0; j < n; j++) {                               // Looping dengan j dimulai dari 0 hingga n-1
		cout << arr[j] << endl;                                 // Output ke layar
	}
	cout << endl;                                               // Ouput baris kosong
}




int main()
{
	input();                                                    // Memanggil input
	insertionsort();                                            // Memanggil Insertiosort
	display();                                                  // display
}

