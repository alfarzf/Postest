#include <iostream>
using namespace std;

int main(){
	int a;
	cout<<"Banyak Rumah :";
	cin>>a;
	string nama[a];
	string alamat[a];
	string namacek;
	string alamatcek;
	bool status=false;
	
	for(int i=0;i<a;i++){
		cout<<"Masukkan nama pemilik rumah :";
		cin>>nama[i];
		cout<<"Masukkan alamat rumah :";
		cin>>alamat[i];
	}
	cout<<"Masukkan nama pemilik rumah yang ingin di cek :";
	cin>>namacek;
	cout<<"Masukkan alamat yang ingin di cek :";
	cin>>alamatcek;
	
	for(int i=0;i<a;i++){
		if(namacek==nama[i]&&alamatcek==alamat[i]){
			status=true;
			cout<<"rumah ditemukan";
			break;
		}
	}if(status==false){
		cout<<"rumah tidak ditemukan";
	}
	return 0;
}
