#include <iostream>
#include "filmozellikleri.h"
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() {
	setlocale(LC_ALL,"TURKISH");
	cout<<"------------------------------------------";
	cout<<"FÝLM VERÝTABANI UYGULAMASINA HOÞGELDÝNÝZ!";
		cout<<"------------------------------------------\n";
		int id;
			int secim;
		ozellik film1[10];
		ozellik *ptr=&film1[0];
		int kontrol=0;
	do{
		filmTuru tur;
	cout<<"ANA MENÜ"<<endl;

	cout<<"(1) FÝLM EKLE\n(2) FÝLM ÇIKAR\n(3) TÜM FÝLMLERÝ LÝSTELE\n(0) ÇIKIÞ\n"<<"SEÇÝMÝNÝZÝ GÝRÝNÝZ:";
	cin>>secim;
	
	switch(secim){
		case 1:
			kontrol=1;
			cout<<"FÝLM EKLEME\n";
		for(int i=0; i<10 && kontrol==1;i++){
			film1[i].ID=i+1;
			cout<<"FÝLMÝN ADI:";
			cin>>(*(ptr+i)).ad;
			cout<<"FÝLMÝN YÖNETMENÝ:";
			cin>>(*(ptr+i)).yonetmen;
			cout<<"FÝLMÝN YAPIM YILI:";
			cin>>(*(ptr+i)).yapimYili;
			cout<<"FÝLMÝN TÜRÜ (0-AKSÝYON, 1-GERÝLÝM, 2-KOMEDÝ, 3-DRAM):";
			cin>>(*(ptr+i)).turu;
	(*(ptr+i)).turu=tur;
		
			cout<<"FÝLM BÝLGÝSÝ EKLENDÝ.\n";
			cout<<"TEKRAR EKLEME YAPACAK MISINIZ? (EVET->1, HAYIR->0)";
			cin>>kontrol;
		}
		break;
		case 3:
			
			cout<<"FÝLMLERÝN LÝSTESÝ\n";
				for(int i=0; i<10;i++){
			cout<<"FÝLM ID:"<<(*(ptr+i)).ID<<endl;
			cout<<"FÝLM ADI:"<<(*(ptr+i)).ad<<endl;
			cout<<"YONETMEN:"<<(*(ptr+i)).yonetmen<<endl;
			cout<<"YAPIM YILI:"<<(*(ptr+i)).yapimYili<<endl;
			cout<<"FÝLM TÜRÜ:"<<(*(ptr+i)).turu<<endl;
		}
		break;
		case 2:
			cout<<"HANGÝ FÝLMÝ SÝLECEKSENÝZ O ID YÝ GÝRÝNÝZ:";
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
			cout<<"FÝLM SÝLÝNMÝÞTÝR.";
		break;
	default:
		break;
	}
}while(secim==0);

	system("PAUSE");
	
	return 0;
}
