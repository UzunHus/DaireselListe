#include "Dugum.h"
#include <iostream>
using namespace std;
//Tek ba�l� dairesel listeler

int main() {

	Dugum* basPtr;//liste ba�� d���m
	Dugum* sonPtr;//liste sonu d���m
	Dugum* mevcutPtr;//listeye yeni eklenen d���m
	Dugum* geciciPtr;//listede gezinmek i�in
	basPtr = sonPtr = new Dugum;
	basPtr->SetVeri(1);
	Dugum* basPtr2;//liste ba�� d���m
	Dugum* sonPtr2;//liste sonu d���m
	Dugum* mevcutPtr2;//listeye yeni eklenen d���m
	Dugum* geciciPtr2;//listede gezinmek i�in
	basPtr2 = sonPtr2 = new Dugum;
	basPtr2->SetVeri(1);
	for (int i = 2;i <= 10;i++) {
		mevcutPtr = new Dugum(i, sonPtr, NULL);
		sonPtr->SetSonrakiPtr(mevcutPtr);
		sonPtr = mevcutPtr;
	}
	basPtr->SetOncekiPtr(sonPtr);
	sonPtr->SetSonrakiPtr(basPtr);
	

	for (int i = 2;i <= 10;i++) {
		mevcutPtr2 = new Dugum(i, sonPtr2, NULL);
		sonPtr2->SetSonrakiPtr(mevcutPtr2);
		sonPtr2 = mevcutPtr2;
	}
	basPtr2->SetOncekiPtr(sonPtr2);
	sonPtr2->SetSonrakiPtr(basPtr2);
	//1.listede 7 say�s�n� arayal�m ,bulal�m ve silelim
	/*Dugum* geciciPtr3;
	geciciPtr = basPtr;
	while (geciciPtr != NULL) {
		if (geciciPtr->GetVeri() == 7) {
			geciciPtr3 = geciciPtr->GetOncekiPtr();
			geciciPtr3->SetSonrakiPtr(geciciPtr->GetSonrakiPtr());
			break;
		}
		geciciPtr = geciciPtr->GetSonrakiPtr();
	}*/
	////iki dairesel tek ba�l� listeyi birle�tirelim
	//bunun i�in 1.listenin sonuna 2.listenin ba��n�;2.listenin sonuna 1.listenin ba��n� ekliyoruz
	sonPtr->SetSonrakiPtr(basPtr2);
	basPtr->SetOncekiPtr(sonPtr2);
	basPtr2->SetOncekiPtr(sonPtr);
	sonPtr2->SetSonrakiPtr(basPtr);
	return 0;
}