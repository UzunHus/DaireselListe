#ifndef DUGUM_H
#define DUGUM_H
class Dugum {
public:
	Dugum();
	Dugum(int, Dugum*, Dugum*);

	void SetVeri(int);
	void SetOncekiPtr(Dugum*);
	void SetSonrakiPtr(Dugum*);

	Dugum* GetOncekiPtr();
	Dugum* GetSonrakiPtr();
	int GetVeri();
private:
	int veri;
	Dugum* oncekiPtr;
	Dugum* sonrakiPtr;









};
#endif