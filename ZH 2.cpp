#include <iostream>
#include <ctime>
#define NUM 2
#define NUMM 30
using namespace std;

struct baru {
	// Termék export struktúrája

	char nev[20];
	char cegnev[30];
	char szarmazas[30];
	int kod;
	int raktarsz;
	bool allergen;
	
};

struct karu {
	//Termék import struktúrája

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

struct recept {
	//Recept struktúrája
	
	char nev[20];
	int kod;
	bool allergen;
	bool najist1;
	bool najist2;
	bool koser;

};

struct alapa {

	int kod;
	char alapany[20];
};

struct masterdata {

	char nev1[30];
	char cegnev1[30];
	char anyagmeg1[30];
	int kod;
	int raktarsz;
	int gyartassz;
	bool allergen;
	bool najist1;
	bool najist2;
	bool koser;
	char alapany[20];

};

void main()
{
	int c;

	//Opciók
	cout << "Kerem valasszon a kovetkezo lehetosegek kozul!" << endl;
	cout << "Termek importalasa! (irjon be 1-est)" << endl;
	cout << "Termek exportalasa! (irjon be 2-est)" << endl;
	cout << "Receptura keszitese! (irjon be 3-ast)" << endl;

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

			cout << "Adja meg a(z) " << i + 1 << ". termék allergen vagy nem. (i/n)" << endl;
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

				if (adat1[j].raktarsz == adat1[k].raktarsz)
					adat1[k].raktarsz = rand() % 9000000 + 1000000;
			}
		}




		for (int i = 0; i < NUM; i++)//Bevitt adatok importálása
		{
			cout << "Termek neve: " << "\t" << "\t" << adat1[i].nev << endl;
			cout << "Ceg neve: " << "\t" << "\t" << adat1[i].cegnev << endl;
			cout << "Szamazasi helye: " << "\t" << adat1[i].szarmazas << endl;
			cout << "SAP kodja: " << "\t" << "\t" << adat1[i].kod << endl;
			cout << "Raktarszama: " << "\t" << "\t" << adat1[i].raktarsz << endl;
			if (adat1[i].allergen == true)
				cout << "Allergen: " << "\t" << "\t" << "igen" << endl;
			else if (adat1[i].allergen == false)
				cout << "Allergen: " << "\t" << "\t" << "nem" << endl;
			cout << endl;

		}

		system("pause");
		return;
	}

			// ////////////////////////////////////////////////////////////////////////////////////////////////// termék exportálás struktúra


	case 3: {case 2: {
		char f, n, m, o;
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

			cout << "Adja meg a(z) " << i + 1 << ". termek najist1 vagy nem. (i/n)" << endl;
			cin >> n;

			if (n == 'i')
				adat11[i].najist1 = true;
			else if (n == 'n')
				adat11[i].najist1 = false;

			cout << "Adja meg a(z) " << i + 1 << ". termek najist2 vagy nem. (i/n)" << endl;
			cin >> m;

			if (m == 'i')
				adat11[i].najist2 = true;
			else if (m == 'n')
				adat11[i].najist2 = false;

			cout << "Adja meg a(z) " << i + 1 << ". termek koser vagy nem. (i/n)" << endl;
			cin >> o;

			if (o == 'i')
				adat11[i].koser = true;
			else if (o == 'n')
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

				if (adat11[j].raktarsz == adat11[k].raktarsz)
					adat11[k].raktarsz = rand() % 9000000 + 1000000;

				if (adat11[j].gyartassz == adat11[k].gyartassz)
					adat11[k].gyartassz = rand() % 9000 + 1000;

			}


		}



		for (int i = 0; i < NUM; i++)//Bevitt adatok kiíratása
		{
			cout << "Termek neve:  " << "\t" << "\t" << adat11[i].nev << endl;
			cout << "Ceg neve:  " << "\t" << "\t" << adat11[i].cegnev << endl;
			cout << "Anyag megnevezese:  " << "\t" << "\t" << adat11[i].anyagmeg << endl;
			cout << "SAP kodja:  " << "\t" << "\t" << adat11[i].kod << endl;
			cout << "Raktar szama:  " << "\t" << "\t" << adat11[i].raktarsz << endl;
			cout << "Gyartas szama:  " << "\t" << "\t" << adat11[i].gyartassz << endl;
			if (adat11[i].allergen == true)
				cout << "Allergen: " << "\t" << "\t" << "Igen" << endl;
			else if (adat11[i].allergen == false)
				cout << "Allergen: " << "\t" << "\t" << "Nem" << endl;

			if (adat11[i].najist1 == true)
				cout << "Najist1: " << "\t" << "\t" << "Igen" << endl;
			else if (adat11[i].najist1 == false)
				cout << "Najist1: " << "\t" << "\t" << "Nem" << endl;

			if (adat11[i].najist2 == true)
				cout << "Najist2: " << "\t" << "\t" << "Igen" << endl;
			else if (adat11[i].najist2 == false)
				cout << "Najist2: " << "\t" << "\t" << "Nem" << endl;

			if (adat11[i].koser == true)
				cout << "Koser: " << "\t" << "\t" << "Igen" << endl;
			else if (adat11[i].koser == false)
				cout << "Koser: " << "\t" << "\t" << "Nem" << endl;
			cout << endl;

		}

		if (c == 2)
		{
			system("pause");
			return;
		}
		else {
			system("pause");
		}

	}




			//Receptúra keszítõ
			struct alapa alap[500];
			struct recept recp[500];
			struct karu adat11[NUM];
			int r, i = 0, j = 0, ss, k = 0;
			char ff, nn, mm, oo;

			cout << "\n\nKerem adja meg a termék SAP kodjat: "; cin >> ss;

			for (int ii = 0; ii < NUM; ii++)
			{

				if (ss == adat11[ii].kod)
				{
					adat11[ii].allergen = recp[k].allergen;
					adat11[ii].najist1 = recp[k].najist1;
					adat11[ii].najist2 = recp[k].najist2;
					adat11[ii].koser = recp[k].koser;
					adat11[ii].kod = recp[k].kod;

				}

				k++;
			}



			cout << "\nKerem adja meg mennyi receptet visz be: "; cin >> r;
			do
			{
				cout << "\nKerem adja meg mennyi alapanyag van a(z) " << j + 1 << ". recepthez: "; cin >> i;

				for (int z = 0; z < i; z++)
				{
					cout << "\nAlapanyag " << z + 1 << " :"; cin >> alap[j].alapany;
					alap[z].kod = recp[z].kod;

				}

				j++;
			} while (j < r);

			

			system("pause");
			
	}
	default: system("pause");
	}

	struct masterdata adat111[50];
	struct karu adat11[NUM];
	struct alapa alap[500];

	for (int ii = 0; ii < NUM; ii++)
	{

	
		adat111[ii].najist1 = adat11[ii].najist1;
		adat111[ii].najist2 = adat11[ii].najist2;
		adat111[ii].koser = adat11[ii].koser;
		adat111[ii].kod = adat11[ii].kod;
		adat111[ii].gyartassz = adat11[ii].gyartassz;
		adat111[ii].raktarsz = adat11[ii].raktarsz;
	}

	cout << "///////////////////////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\/" << endl;

	for (int ii = 0; ii < NUM; ii++)
	{
		for (int j = 0; j < 50; j++)
		{
			if (adat111[j].kod == adat11[j].kod)
			{
				cout << "Termek neve: " << "\t" << adat11[j].nev << endl;
				cout << "Ceg neve: " << "\t" << adat11[j].cegnev << endl;
			}
		}
		cout <<"SAP Kod: "<<"\t"<< adat111[ii].kod << endl;
		cout << "Gyartas szama: " << "\t" << adat111[ii].gyartassz << endl;
		cout << "Raktarszama: " << "\t" << adat111[ii].raktarsz << endl;
		if (adat111[ii].najist1 == true)
			cout << "Najist1: " << "\t" << "Igen" << endl;
		else 
			cout << "Najist1: " << "\t" << "Nem" << endl;

		if(adat111[ii].najist2==true)
		cout << "Najist2: " << "\t" << "Igen" << endl;
		else
			cout << "Najist2: " << "\t" << "Nem" << endl;

		if (adat111[ii].koser == true)
			cout << "Koser: " << "\t" << "Igen" << endl;
		else
			cout << "Koser: " << "\t" << "Nem" << endl;

		if (adat111[ii].allergen == true)
			cout << "Allergen: " << "\t" << "Igen" << endl;
		else
			cout << "Allergen: " << "\t" << "Nem" << endl;

		for (int j = 0; j < 50; j++)
		{
			if (alap[j].kod == adat11[j].kod)
			{
				cout << "Alapanyag " << j + 1 << ". : " << alap[j].alapany << endl;

			}


		}


	}
	system("pause");
}

