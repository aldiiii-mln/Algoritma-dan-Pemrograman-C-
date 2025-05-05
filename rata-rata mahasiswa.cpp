#include <iostream>
#include <stdlib.h>
using namespace std;
float rata_rata () {
	int jumlah_mahasiswa, max_num;
	float total, rata2;
	cout << "Masukkan Jumlah Mahasiswa :";
	cin >> jumlah_mahasiswa;
	int *arr = new int[jumlah_mahasiswa];
	cout << "Masukkan nilai mahasiswa : " << endl;
	total = 0;
	for (int i=1; i<=jumlah_mahasiswa; ++i){
		cout << "Mahasiswa " << i << " :";
		cin >> arr[i];
		total += arr[i];
	}
	max_num = arr[0];
	cout << "Tampilkan Nilai Mahasiswa:";
	for (int i=1; i<=jumlah_mahasiswa; ++i){
		cout << arr[i] << " ";
		if (arr[i] > max_num) {
			max_num = arr[i];
		}
	}
	rata2 = (total/jumlah_mahasiswa);
	cout << endl;
	cout << "Rata-rata Nilai Mahasiswa : " << rata2 << endl;
	cout << "Mahasiswa dengan Nilai Tertinggi : " << endl; 
	cout << "Mahasiswa " << jumlah_mahasiswa << " : " << max_num << endl;
	return 0;
	}
int main (){
cout << "======================================" << endl;
cout << "PROGRAM MENGHITUNG RATA-RATA MAHASISWA" << endl;
cout << "======================================" << endl;
	rata_rata();
	return 0;
}
