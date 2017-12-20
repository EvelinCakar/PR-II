/*

Pitanja na -> -> emir.veledar@edu.fit.ba

*/
#include<iostream>
using namespace std;
char * crt = "\n---------------------------\n";
int ODG;

enum VrstaRacuna { TEKUCI, DEVIZNI, STEDNI };
enum VrstaTransakcije { UPLATA, ISPLATA };

struct Datum {
	int _dan, _mjesec, _godina;
	/*	Unos / Ispis */
};

struct Transakcija {
	char _TO[20];
	float _iznos;
	VrstaTransakcije _vrstaTransakcije; // ako je isplata vrijednost _TO postaviti na brojRacuna sa koga se transakcija vrsi
	bool _aktivna; //u slucaju da se transakcija izbrise ona postaje neaktivna, ali je bitno da o njoj ostane zapis
	/*	Unos / Ispis */
};

struct Racun {
	VrstaRacuna _vrstaRacuna;
	char _brojRacuna[20];
	Transakcija * _transakcije; //za svaki racun ce se evidentirati transakcije
	int _brojTransakcija;
	bool _aktivan;
	/*
	Unos / Ispis / Dealociraj / DodajTransakciju / UkloniTransakciju
	*/
};

struct Korisnik {
	char _JMBG[14];
	char * _imePrezime;
	Racun * _racuni;
	int _trenutnoRacuna; //brojac
	bool _aktivan;

	/*
	Unos / Ispis / Dealociraj / DodajRacun / UkloniRacun /
	DodajTransakciju - pored iznosa, korisnik vrsi odabir vrste transakcije, te racuna koji zeli koristiti za tu transakciju; onemoguciti isplate vece kolicine novca nego sto korisnik posjeduje na racunu
	GetTransakcijeByIznos - vraca niz transakcija koje su imale iznos veci od trazenog
	GetTransakcije - vraca listu transakcija koje su izvrsena prema odredjenom racunu(_TO), ukljucujuci i neaktivne
	GetTransakcijeByDatum - vraca listu svih transakcija koje su obavljene
	*/
};

int PrikaziMenu() {
	int izbor;
	cout << crt << "\t::MENU::" << crt;
	cout << "1. Dodaj korisnika" << endl;
	cout << "2. Dodaj racun" << endl;
	cout << "3. Pretraga" << endl;
	cout << "4. Deaktiviranje korisnika" << crt; // racuna ili korisnika
	cout << "5. Kraj" << crt;
	do {
		cout << "Vas izbor -> ";
		cin >> izbor;
	} while (izbor < 1 || izbor>5);
	system("cls");
	return izbor;
}

void main() {
	int trenutnoKorisnika = 0, izborMenu = 0;
	Korisnik * korisnici = nullptr;


	do {
		izborMenu = PrikaziMenu();
		cin.ignore();
	



	} while (izborMenu != 5);
}