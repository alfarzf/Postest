#include <iostream>
using namespace std;

	/*Alfa Rizki Fadlillah
	*/
	
int main(){
	float a, b, c, d;
	
	//input data
	cout<<"Harga Sebuah Pena\t: ";
	cin>>a;
	cout<<"Harga Sebuah Buku\t: ";
	cin>>b;
	cout<<"Harga Sebuah Penghapus\t: ";
	cin>>c;
	cout<<"Harga Sebuah Penggaris\t: ";
	cin>>d;
	
	//output data
	cout
	<<endl
	<<"Harga 3 Buah Pena\t: Rp."<<a*3<<endl
	<<"Harga 3 Buah Buku\t: Rp."<<b*3<<endl
	<<"Harga 3 Buah Penghapus\t: Rp."<<c*3<<endl
	<<"Harga 3 Buah Penggaris\t: Rp."<<d*3<<endl;
	return 0;
}

