#include <iostream>
using namespace std;

int main(){
		
		/* Alfa Rizki Fadlillah
			2117051003
				Post Test 3
		*/
	int a;
		
	//Input
	cout<<"Masukkan Tahun"<<"\n";
	cin>>a;
	
	//Output
	if(a%400==0){
		cout<<"Tahun "<<a<<" adalah tahun kabisat";
	}
	else if(a%100==0){
		cout<<"Bukan tahun kabisat";
	}
	else if(a%4==0){
		cout<<"Tahun "<<a<<" adalah tahun kabisat";
	}
	else{
		cout<<"Bukan Tahun Kabisat";
	}
	return 0;
}

