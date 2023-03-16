#include <iostream>
using namespace std;

int main()

{
	
		int mesafe, hiz;
		
		cout<<"mesafeyi giriniz"<<endl;
		cin>>mesafe;
		
		cout<<"hizinizi giriniz"<<endl;
		cin>>hiz;
		
		
		float saat = mesafe/hiz; // eger sonuc 3.33333 gibi görüzüküyrse 3 olarak dönüþecektir.
		float dakikaismi = (float)mesafe/hiz - (int)mesafe/hiz;  // virgülden sonrasýný cýkarýr ve bize tam sayý olark verir çünkü bize dakika olarak loazým
		int dakika = dakikaismi * 60;
		
		cout<<"tahmini varis sureniz   "<< (float)saat<<"  saat ve  "<<dakika<<"  dakikadir  "<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
