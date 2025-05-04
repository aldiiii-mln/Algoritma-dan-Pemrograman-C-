#include <iostream>
using namespace std;


void merge(int arr[], int low, int high, int mid){
	int i, j, k, temp[50];
	 i = low;
	 k = low;
	 j = mid+1;
	
	while(i <= mid && j <= high){
		if(arr[i] < arr[j]){
			temp[k] = arr[i];
			k++;
			i++;
			}
		else{
			temp[k] = arr[j];
			k++;
			j++;
			}
		}
	while(i <= mid){
		temp[k] = arr[i];
		k++;
		i++;
		}
	while(j <= high){
		temp[k] = arr[j];
		k++;
		j++;
		}
	for(i = low; i < k; i++){
		
		arr[i] = temp[i];
		}
}
	
	

void mergeSort(int arr[], int low, int high, int& perbandingan){
	if(low < high){
		int mid;
		//array kita bagi 2
		mid = (low + high) / 2;
		
		//array sebelah kiri bagi 2 sampai terkecil
		mergeSort(arr, low, mid, perbandingan);
		perbandingan++;
		//array sebelah kanan bagi 2 sampai terkecil
		mergeSort(arr, mid+1, high, perbandingan);
		perbandingan++;
		//untuk menggabunkan pecahan array tadi menjadi satu kembali dengan berurut
		merge(arr, low, high, mid);
		
		
		
		}
	
	
	}

int main(){
	int n;
	
	cout << "Masukkan Jumlah Elemen Array  : ";
	cin >> n;
	
	
	
	int arr[n];
	int low = 0;
	int high = n-1;
	int perbandingan = 0;
	int pertukaran = 0;
	
	
	cout << "Masukkan Elemen Array : ";
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		cout << " ";
		}
	cout << "\nArray Awal : ";
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
		}
	
	
	mergeSort(arr, low, high, perbandingan);
	
	cout << "\nHasil Merge : ";
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
		}
	cout << "\n\nJumlah Perbandingan : " << perbandingan;
	cout << "\nJumlah Pertukaran : " << pertukaran;
	
	
	
	}
