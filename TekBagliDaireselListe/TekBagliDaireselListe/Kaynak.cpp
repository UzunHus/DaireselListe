#include "Dugum.h"
#include <iostream>
using namespace std;
//Tek baðlý dairesel listeler

int main() {

	Dugum* basPtr;//liste baþý düðüm
	Dugum* sonPtr;//liste sonu düðüm
	Dugum* mevcutPtr;//listeye yeni eklenen düðüm
	Dugum* geciciPtr;//listede gezinmek için
	basPtr = sonPtr = new Dugum;
	basPtr->SetVeri(1);
	Dugum* basPtr2;//liste baþý düðüm
	Dugum* sonPtr2;//liste sonu düðüm
	Dugum* mevcutPtr2;//listeye yeni eklenen düðüm
	Dugum* geciciPtr2;//listede gezinmek için
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
	//1.listede 7 sayýsýný arayalým ,bulalým ve silelim
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
	////iki dairesel tek baðlý listeyi birleþtirelim
	//bunun için 1.listenin sonuna 2.listenin baþýný;2.listenin sonuna 1.listenin baþýný ekliyoruz
	sonPtr->SetSonrakiPtr(basPtr2);
	basPtr->SetOncekiPtr(sonPtr2);
	basPtr2->SetOncekiPtr(sonPtr);
	sonPtr2->SetSonrakiPtr(basPtr);
	return 0;
}