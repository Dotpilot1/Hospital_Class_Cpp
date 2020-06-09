#include <iostream>
#include <string>
#include <vector>
#include "Doctor.h"
#include "EyeDoctor.h"
#include "TeethDoctor.h"

using namespace std;

int main() {

	EyeDoctor eyeDoc1{"Mustafa","Basturk",80,150,200 };
	TeethDoctor teethDoc1{ "Metin","Toker",60,125,200 };

	vector<Doctor*>personel;
	personel.push_back(&eyeDoc1);
	personel.push_back(&teethDoc1);

	for (int i = 0;i < personel.size();++i) {
		personel[i]->infoPrint();
		cout << endl;
	}


	return 0;
}