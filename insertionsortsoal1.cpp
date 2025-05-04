#include <iostream>
using namespace std;



void insertion(int arr[], int n, int &perbandingan, int &pertukaran){
	for(int i = 1; i < n; i++){
		
		for(int j = i; j > 0; j--){
			perbandingan++;
			if(arr[j] < arr[j-1]){
				int temp;
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
				pertukaran++;
				}
			else{
				break;
				}
			cout << "\nIterasi ";
			for(int i = 0; i < n; i++){
				cout << i;
				}
			cout << " : ";
			for(int k = 0; k < n; k++){
			cout << arr[k] << " ";
			}
			
			}
		
		}
		
	
	
	}

int main(){
	int n;
	
	cout << "Masukkan Jumlah Data : ";
	cin >> n;
	
	int arr[n];
	int perbandingan = 0;
	int pertukaran = 0;
	
	for(int i = 0; i < n; i++){
		cout << "Masukkan data ke- " << i+1 << " : ";
		cin >> arr[i];
		
		}
	cout << "\nData sebelum diurutkan : ";
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
		}
	insertion(arr, n,perbandingan, pertukaran);
	
	cout << "\nData sesudah diurutkan : ";
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
		}
	cout << "\n\nPerbandingan : " << perbandingan;
	cout << "\nPertukaran : " << pertukaran;
	
	
	}
