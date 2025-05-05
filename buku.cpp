#include <iostream>
#include <string>

using namespace std;

const int MAX_BUKU = 10; // Jumlah maksimal buku yang dapat disimpan

// Deklarasi array untuk menyimpan informasi buku
string judul[MAX_BUKU];
string pengarang[MAX_BUKU];
int jumlahBuku = 0; // Jumlah buku yang sudah dimasukkan

// Deklarasi procedure dan function
void inputBuku();
void daftarBuku();
void keluarProgram();

int main() {
    int pilihan;

    do {
        // Menampilkan menu
        cout << "\nMenu:\n";
        cout << "1. Input buku\n";
        cout << "2. Daftar buku\n";
        cout << "3. Keluar\n";
        cout << "Masukkan pilihan(1-3) : ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                inputBuku();
                break;
            case 2:
                daftarBuku();
                break;
            case 3:
                keluarProgram();
                break;
            default:
                cout << "Pilihan tidak valid. Silakan masukkan pilihan yang benar.\n";
        }
    } while (pilihan != 3);

    return 0;
}

void inputBuku() {
    if (jumlahBuku < MAX_BUKU) {
        cout << "Masukkan judul buku     : ";
        cin.ignore(); // Membersihkan buffer
        getline(cin, judul[jumlahBuku]);

        cout << "Masukkan pengarang buku : ";
        getline(cin, pengarang[jumlahBuku]);

        jumlahBuku++;
    }
        
}

void daftarBuku() {
    if (jumlahBuku > 0) {
        for (int i = 0; i < jumlahBuku; i++) {
            cout << judul[i] << " oleh " << pengarang[i] << endl;
        }
    }
}

void keluarProgram() {
	
}
