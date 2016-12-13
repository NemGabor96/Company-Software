#include <iostream>
#include <ctime>
#define NUM 2
using namespace std;

struct baru {

	char nev[20];
	char cegnev[30];
	char szarmazas[30];
	int kod;
	int raktarsz;
	bool allergen;
	


};
struct karu {

	char nev[20];
	char cegnev[30];
	char anyagmeg[30];
	int kod;
	int raktarsz;
	int gyartassz;
	bool allergen;
	bool najist1;
	bool najist2;
	bool koser;

};


void main()
{
	int c;


	cout << "Kerem valasszon a kovetkezo lehetosegek kozul!" << endl;
	cout << "Termek importalasa! (irjon be 1-est)" << endl;
	cout << "Termek exportalasa! (irjon be 2-est)" << endl;

	cin >> c;


	switch (c)
	{

		// ////////////////////////////////////////////////////////////////////////////////// termék importálás struktúra
	case 1: {
		char n;
		struct baru adat1[NUM];

		srand(time(NULL));

		for (int i = 0; i < NUM; i++)
		{
			cout << "\nAdja meg a(z) " << i + 1 << ". termek nevet: " << endl;
			cin >> adat1[i].nev;

			cout << "Adja meg a(z) " << i + 1 << ". ceg nevet: " << endl;
			cin >> adat1[i].cegnev;

			cout << "Adja meg a(z) " << i + 1 << ". szarmazasi helyet: " << endl;
			cin >> adat1[i].szarmazas;

			cout << "Adja meg a(z) " << i + 1 << ". termek allergen vagy nem. (i/n)" << endl;
			cin >> n;

			if (n == 'i')
				adat1[i].allergen = true;
			else if (n == 'n')
				adat1[i].allergen = false;

			adat1[i].kod = rand() % 900000 + 100000;

			adat1[i].raktarsz = rand() % 9000000 + 1000000;



		}

		for (int j = 0; j < NUM; j++)
		{
			for (int k = 0; k < NUM; k++)
			{
				if (adat1[j].kod == adat1[k].kod)
					adat1[k].kod = rand() % 900000 + 100000;

			}


		}

		for (int j = 0; j < NUM; j++)
		{
			for (int k = 0; k < NUM; k++)
			{
				if (adat1[j].raktarsz == adat1[k].raktarsz)
					adat1[k].raktarsz = rand() % 9000000 + 1000000;

			}


		}

		for (int i = 0; i < NUM; i++)
		{
			cout << "Termek neve: " << adat1[i].nev << endl;
			cout << "Ceg neve: " << adat1[i].cegnev << endl;
			cout << "Szamazasi helye: " << adat1[i].szarmazas << endl;
			cout << "SAP kodja: " << adat1[i].kod << endl;
			cout << "Raktarszama: " << adat1[i].raktarsz << endl;
			if (adat1[i].allergen == true)
				cout << "Allergen: " << "igen" << endl;
			else if (adat1[i].allergen == false)
				cout << "Allergen: " << "nem" << endl;
			cout << endl;

		}

		system("pause");
		return;
	}

		// ////////////////////////////////////////////////////////////////////////////////////////////////// termék exportálás struktúra


	case 2:{
		char f,g,h,l;
		struct karu adat11[NUM];
		srand(time(NULL));

		for (int i = 0; i < NUM; i++)
		{
			cout << "\nAdja meg a(z) " << i + 1 << ". termek nevet: " << endl;
			cin >> adat11[i].nev;

			cout << "Adja meg a(z) " << i + 1 << ". ceg nevet: " << endl;
			cin >> adat11[i].cegnev;

			cout << "Adja meg a(z) " << i + 1 << ". anyag megnevezese: " << endl;
			cin >> adat11[i].anyagmeg;

			cout << "Adja meg a(z) " << i + 1 << ". termek allergen vagy nem. (i/n)" << endl;
			cin >> f;

			if (f == 'i')
				adat11[i].allergen = true;
			else if (f == 'n')
				adat11[i].allergen = false;

			cout << "Adja meg a(z) " << i + 1 << ". termek Najist1 vagy nem. (i/n)" << endl;
			cin >> g;

			if (g == 'i')
				adat11[i].najist1 = true;
			else if (g == 'n')
				adat11[i].najist1 = false;

			cout << "Adja meg a(z) " << i + 1 << ". termek Najist2 vagy nem. (i/n)" << endl;
			cin >> h;

			if (h == 'i')
				adat11[i].najist2 = true;
			else if (h == 'n')
				adat11[i].najist2 = false;

			cout << "Adja meg a(z) " << i + 1 << ". termek Koser vagy nem. (i/n)" << endl;
			cin >> l;

			if (l == 'i')
				adat11[i].koser = true;
			else if (l == 'n')
				adat11[i].koser = false;

			adat11[i].kod = rand() % 900000 + 100000;

			adat11[i].raktarsz = rand() % 9000000 + 1000000;

			adat11[i].gyartassz = rand() % 9000 + 1000;


		}

		for (int j = 0; j < NUM; j++)
		{
			for (int k = 0; k < NUM; k++)
			{
				if (adat11[j].kod == adat11[k].kod)
					adat11[k].kod = rand() % 900000 + 100000;

			}


		}

		for (int j = 0; j < NUM; j++)
		{
			for (int k = 0; k < NUM; k++)
			{
				if (adat11[j].raktarsz == adat11[k].raktarsz)
					adat11[k].raktarsz = rand() % 9000000 + 1000000;

			}


		}

		for (int j = 0; j < NUM; j++)
		{
			for (int k = 0; k < NUM; k++)
			{
				if (adat11[j].gyartassz == adat11[k].gyartassz)
					adat11[k].gyartassz = rand() % 9000 + 1000;

			}


		}

		for (int i = 0; i < NUM; i++)
		{
			cout << "Termek neve:  " << adat11[i].nev << endl;
			cout << "Ceg neve:  " << adat11[i].cegnev << endl;
			cout << "Szamazasi helye:  " << adat11[i].anyagmeg << endl;
			cout << "SAP kodja:  " << adat11[i].kod << endl;
			cout << "Raktarszama:  " << adat11[i].raktarsz << endl;
			cout << "Gyartas szama:  " << adat11[i].gyartassz << endl;
			if (adat11[i].allergen == true)
				cout << "Allergen: " << "igen" << endl;
			else if (adat11[i].allergen == false)
				cout << "Allergen: " << "nem" << endl;
			cout << endl;

		}

		system("pause");
		return;
	}
	default: system("pause");
	}

}

