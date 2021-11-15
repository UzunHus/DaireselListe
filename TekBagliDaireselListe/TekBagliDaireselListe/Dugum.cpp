#include "Dugum.h"
#include <cstdlib>//NULL pointer için
using namespace std;

Dugum::Dugum() {
	veri = 0;
	oncekiPtr = NULL;
	sonrakiPtr = NULL;
}

Dugum::Dugum(int v, Dugum* oPtr, Dugum* sPtr) {
	veri = v;
	oncekiPtr = oPtr;
	sonrakiPtr = sPtr;
}
void Dugum::SetVeri(int v) {
	veri = v;
}
void Dugum::SetOncekiPtr(Dugum* ptr) {
	oncekiPtr = ptr;
}
void Dugum::SetSonrakiPtr(Dugum* ptr) {

	sonrakiPtr = ptr;
}
int Dugum::GetVeri() {
	return veri;
}
Dugum* Dugum::GetOncekiPtr() {
	return oncekiPtr;
}
Dugum* Dugum::GetSonrakiPtr() {
	return sonrakiPtr;
}