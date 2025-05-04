#include <iostream>
using namespace std;

int jumlahElemen(int nilai[], int jumlahelemen){
	int total;
	
	for(int i = 0; i < jumlahelemen; i++){
		total += nilai[i];
	}
	return total;
}

int nilaiMax(int nilai[], int jumlahelemen){
	int nilaimax = 0;
	for(int i = 0; i < jumlahelemen; i++){
		if(nilai[i] > nilaimax){
			nilaimax = nilai[i];
			}
	}
	return nilaimax;
}

int nilaiMin(int nilai[], int jumlahelemen){
	int nilaimin = jumlahelemen;
	for(int i = 0; i < jumlahelemen; i++){
		if(nilaimin > nilai[i]){
			nilaimin = nilai[i];
			}
		}
		return nilaimin;
	}



int main(){
	int jumlahelemen;
	cout << "Masukkan ukuran array : ";
	if(!(cin >> jumlahelemen)){
		cout << "Pesan tidak vallid jika input tidak sesuai";
		return 0;
		}
	if(jumlahelemen <= 0){
		cout << "Pesan tidak vallid jika input tidak sesuai";
		return 0;
		}
	
	int nilai[jumlahelemen];
	
	cout << "Masukkan elemen-elemen array : \n";
	for(int i = 0; i < jumlahelemen; i++){
		cout << "elemen ke-" << i+1 << ": ";
		cin >> nilai[i];
		}
	system("cls");
	cout << "Array : ";
	for(int i = 0; i < jumlahelemen; i++){
		cout << nilai[i] << " ";
		}
	cout << "\nUkuran array lebih dari 0.";
	while(1){
	int pil;
	cout << "\n\nPilih Operasi : \n";
	cout << " 1. Jumalah Elemen\n";
	cout << " 2. Nilai Maksimum\n";
	cout << " 3. NIlai Minimum\n";
	cout << " 4. Keluar\n";
	cout << " Masukkan pilihan(1..4) : ";
	cin >> pil;
	switch(pil){
		case 1 :
		system("cls");
		cout << "Jumlah elemen array : " << jumlahElemen(nilai, jumlahelemen);
		cout << "\nArray : ";
			for(int i = 0; i < jumlahelemen; i++){
			cout << nilai[i] << " ";
		}
		
		break;
		case 2 :
		system("cls");
		cout << "Nilai Maksimum Array : " << nilaiMax(nilai, jumlahelemen);
		cout << "\nArray : ";
			for(int i = 0; i < jumlahelemen; i++){
			cout << nilai[i] << " ";
		}
		
		break;
		case 3 :
		system("cls");
		cout << "Nilai Minimum Array : " << nilaiMin(nilai, jumlahelemen);
		cout << "\nArray : ";
			for(int i = 0; i < jumlahelemen; i++){
			cout << nilai[i] << " ";
		}
		break;
		case 4 :
		return 0;
		break;
		default :
		cout << "Pesan tidak vallid jika input tidak sesuai";
		return 0;
		break;
		}
	
}
	
}
