#include <iostream>
#include "filmozellikleri.h"
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() {
	setlocale(LC_ALL,"TURKISH");
	cout<<"------------------------------------------";
	cout<<"F�LM VER�TABANI UYGULAMASINA HO�GELD�N�Z!";
		cout<<"------------------------------------------\n";
		int id;
			int secim;
		ozellik film1[10];
		ozellik *ptr=&film1[0];
		int kontrol=0;
	do{
		filmTuru tur;
	cout<<"ANA MEN�"<<endl;

	cout<<"(1) F�LM EKLE\n(2) F�LM �IKAR\n(3) T�M F�LMLER� L�STELE\n(0) �IKI�\n"<<"SE��M�N�Z� G�R�N�Z:";
	cin>>secim;
	
	switch(secim){
		case 1:
			kontrol=1;
			cout<<"F�LM EKLEME\n";
		for(int i=0; i<10 && kontrol==1;i++){
			film1[i].ID=i+1;
			cout<<"F�LM�N ADI:";
			cin>>(*(ptr+i)).ad;
			cout<<"F�LM�N Y�NETMEN�:";
			cin>>(*(ptr+i)).yonetmen;
			cout<<"F�LM�N YAPIM YILI:";
			cin>>(*(ptr+i)).yapimYili;
			cout<<"F�LM�N T�R� (0-AKS�YON, 1-GER�L�M, 2-KOMED�, 3-DRAM):";
			cin>>(*(ptr+i)).turu;
	(*(ptr+i)).turu=tur;
		
			cout<<"F�LM B�LG�S� EKLEND�.\n";
			cout<<"TEKRAR EKLEME YAPACAK MISINIZ? (EVET->1, HAYIR->0)";
			cin>>kontrol;
		}
		break;
		case 3:
			
			cout<<"F�LMLER�N L�STES�\n";
				for(int i=0; i<10;i++){
			cout<<"F�LM ID:"<<(*(ptr+i)).ID<<endl;
			cout<<"F�LM ADI:"<<(*(ptr+i)).ad<<endl;
			cout<<"YONETMEN:"<<(*(ptr+i)).yonetmen<<endl;
			cout<<"YAPIM YILI:"<<(*(ptr+i)).yapimYili<<endl;
			cout<<"F�LM T�R�:"<<(*(ptr+i)).turu<<endl;
		}
		break;
		case 2:
			cout<<"HANG� F�LM� S�LECEKSEN�Z O ID Y� G�R�N�Z:";
			cin>>id;
		if (id<=10){
			int i=id-1;
			for(int a=0 ; a<50;a++){
					film1[i].ad[a]='\0';
			film1[i].yonetmen[a]='\0';
				film1[i].yapimYili=0;
					film1[i].turu=0;
				}
					
			}
			cout<<"F�LM S�L�NM��T�R.";
		break;
	default:
		break;
	}
}while(secim==0);

	system("PAUSE");
	
	return 0;
}
