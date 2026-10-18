#include <iostream>
#include <cstring>

using namespace std;

class Laptop {
public:
	static int numarLaptopuri;
	const int idLaptop;
	string model;
	float pret;
	char* procesor;

	Laptop() : idLaptop(++numarLaptopuri) {
		model = "Necunoscut";
		pret = 0.0f;
		procesor = new char[strlen("Standard") + 1];
		strcpy_s(procesor, strlen("Standard") + 1, "Standard");
	}

	Laptop(string m, float p) : idLaptop(++numarLaptopuri) {
		model = m;
		pret = p;
		procesor = new char[strlen("Intel i5") + 1];
		strcpy_s(procesor, strlen("Intel i5") + 1, "Intel i5");
	}

	Laptop(string m, float p, const char* proc) : idLaptop(++numarLaptopuri) {
		model = m;
		pret = p;
		procesor = new char[strlen(proc) + 1];
		strcpy_s(procesor, strlen(proc) + 1, proc);
	}

static float calculeazaPretMediu(float pret1, float pret2) {
	return (pret1 + pret2) / 2.0f;
}

void afisare() {
	cout << "[Laptop ID: " << idLaptop << "] Model: " << model
		<< ", Pret: " << pret << "RON, Procesor:" << procesor
		<< ", Total create: " << numarLaptopuri << endl;
}
};

int Laptop::numarLaptopuri = 0;