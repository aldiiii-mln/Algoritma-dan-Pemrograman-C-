#include<iostream> 
using namespace std;

int main(){
	
    int ukuran, i, j;
    while(1){
		system("cls");
		cout<<"Masukkan ukuran :";
		cin>>ukuran;
    
		for(i = 1; i <= ukuran; i++){
			for(j = 1; j <=i; j++){	
    			cout<<"*";
			}
		cout<<"\n";
		}
		cin.get(); cin.ignore();
	}

}
