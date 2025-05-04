#include <iostream>
using namespace std;

void clr(){
	system("cls");
	}
int LuasPersegi(int s){
    return s*s;
}

int KelilingPersegi(int s){
    return 4*s;
}

float LuasLingkaran(int r){
    return 3.14 * r * r;
}

float KelilingLingkaran(int r){
    return 3.14 * r * 2;
}

void menuinputluasPersegi(){
	int sisi;
	clr();
	cout << "Bangun Datar Persegi\n\n";
	cout << "Masukkan Ukuran Sisi : ";
	cin >> sisi;
	cout << "Luas Persegi : " << LuasPersegi(sisi);
	cin.get(); cin.ignore();
}
void menuinputkelilingPersegi(){
	int sisi;
	clr();
	cout << "Bangun Datar Persegi\n\n";
	cout << "Masukkan Ukuran Sisi : ";
	cin >> sisi;
	cout << "Keliling Persegi : " << KelilingPersegi(sisi);
	cin.get(); cin.ignore();
}
void menuinputluasLingkaran(){
	int jari;
	clr();
	cout << "Bangun Datar Lingkaran\n\n";
	cout << "Masukkan Ukuran Jari-Jari : ";
	cin >> jari;
	cout << "Luas Lingkaran : " << LuasLingkaran(jari);
	cin.get(); cin.ignore();
}
void menuinputkelilingLingkaran(){
	int jari;
	clr();
	cout << "Bangun Datar Lingkaran\n\n";
	cout << "Masukkan Ukuran Jari-Jari : ";
	cin >> jari;
	cout << "Keliling Lingkaran : " << KelilingLingkaran(jari);
	cin.get(); cin.ignore();
}
void menuinputAwal(){
	clr();
	cout << "Hitung Luas Dan Keliling Bangun Datar\n";
    cout << "=====================================\n\n";
    cout << "1. Luas Persegi\n";
    cout << "2. Keliling Persegi\n";
    cout << "3. Luas Lingkaran\n";
    cout << "4. Keliling Lingkaran\n";
    cout << "5. Keluar\n";
    cout << "Masukkan Pilihan [1..5] : ";
	}


int main(){
    int pil1;
    
    while(1){
	clr();
	menuinputAwal();
    cin >> pil1;
    
    switch(pil1){
		case 1 : 
		menuinputluasPersegi();
		break;
		
		case 2 :
		menuinputkelilingPersegi();
		break;
		
	    case 3 :
	    menuinputluasLingkaran();
	    break;
	    
	    case 4 :
	    menuinputkelilingLingkaran();
	    
	    break;
	    
	    case 5 :
	    return 0;
	    break;
		}
}    
    
    
}













