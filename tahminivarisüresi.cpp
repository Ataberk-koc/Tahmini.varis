#include <iostream>
using namespace std;

int main()

{
	
		int mesafe, hiz;
		
		cout<<"mesafeyi giriniz"<<endl;
		cin>>mesafe;
		
		cout<<"hizinizi giriniz"<<endl;
		cin>>hiz;
		
		
		float saat = mesafe/hiz; // eger sonuc 3.33333 gibi g�r�z�k�yrse 3 olarak d�n��ecektir.
		float dakikaismi = (float)mesafe/hiz - (int)mesafe/hiz;  // virg�lden sonras�n� c�kar�r ve bize tam say� olark verir ��nk� bize dakika olarak loaz�m
		int dakika = dakikaismi * 60;
		
		cout<<"tahmini varis sureniz   "<< (float)saat<<"  saat ve  "<<dakika<<"  dakikadir  "<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
