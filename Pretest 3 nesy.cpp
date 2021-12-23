#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a = 41000;
	int b = 11000;
	int c = 0;
	int jumlah_keseluruhan;
	int jumlah_belanjaan;
	
	cout<<"Masukkan jumlah harga : ";
	cin>>jumlah_belanjaan;
	
	cout<<endl;
	
	if (jumlah_belanjaan < 50000){
		jumlah_keseluruhan=jumlah_belanjaan+a;
		cout<<"jumlah_keseluruhan : "<< jumlah_keseluruhan;
	}else if (jumlah_belanjaan < 120000){
		jumlah_keseluruhan=jumlah_belanjaan+b;
		cout<<"jumlah_keseluruhan : "<< jumlah_keseluruhan;
	}else (jumlah_belanjaan >= 120000);{
		jumlah_keseluruhan=jumlah_belanjaan+c;
		cout<<"jumlah_keseluruhan : "<< jumlah_keseluruhan;
	}
	
}
