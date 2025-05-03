#include <iostream>
#include <string>
#include <vector>
#include "Personel.h"
#include <locale>
using namespace std;


int main() {
	setlocale(LC_ALL, "Turkish");
	vector<Personel>vpersonel;
	auto personelekle = [&]() {
		cout << "Personel Bilgilerini Giriniz" << endl;
		string isim, personelno, kadro;
		cout << "Isim: ";
		cin >> isim;
		cout << "Personel No: ";
		cin >> personelno;
		cout << "Kadro: ";
		cin >> kadro;
		Personel p(isim, personelno, kadro);
		vpersonel.push_back(p);
		};
	auto personellistesi = [&]() {
		cout << "Personel Listesi" << endl;
		for (int i = 0; i < vpersonel.size(); i++) {
			cout << "Personel " << i + 1 << ":" << endl;
			vpersonel[i].personelbilgileri();
			cout << endl;
		}
		};
	auto personelarama = [&]() {
		cout << "Aramak istediðiniz personelin numarasýý giriniz: ";
		string arananno;
		cin >> arananno;
		bool durum = false;
		for (int i = 0; i < vpersonel.size(); i++) {
			if (vpersonel[i].getpersonelno() == arananno) {
				cout << "Aradýðýnýz personel bulundu!" << endl;
				cout << "Isim: " << vpersonel[i].getisim() << endl;
				cout << "Personel No: " << vpersonel[i].getpersonelno() << endl;
				cout << "Kadro: " << vpersonel[i].getkadro() << endl;
				durum = true;
				break;
			}
			
		}
		if (durum == false) {
			cout << "Aradýðýnýz personel bulunamadý!" << endl;
		}
		};
	auto personelsil = [&]() {
		cout << "Silmek istediðiniz personelin numarasýný giriniz: ";
		string silinecekno;
		cin >> silinecekno;
		bool durum = false;
		for (int i = 0; i < vpersonel.size(); i++) {
			if (vpersonel[i].getpersonelno() == silinecekno) {
				vpersonel.erase(vpersonel.begin() + i);
				cout << "Personel silindi!" << endl;
				durum = true;
				break;
			}
		}
		if (durum == false) {
			cout << "Silmek istediðiniz personel bulunamadý!" << endl;
		}
		};
	while (true) {
		cout << "1. Personel Ekle" << endl;
		cout << "2. Personel Listesi" << endl;
		cout << "3. Personel Ara" << endl;
		cout << "4. Personel Sil" << endl;
		cout << "5. Çýkýþ" << endl;
		int secim;
		cout << "Seçiminizi yapýnýz: ";
		cin >> secim;
		switch (secim) {
		case 1:
			personelekle();
			break;
		case 2:
			personellistesi();
			break;
		case 3:
			personelarama();
			break;
		case 4:
			personelsil();
			break;
		case 5:
			cout << "Çýkýþ yapýlýyor..." << endl;
			return 0;
		default:
			cout << "Geçersiz seçim! Lütfen tekrar deneyin." << endl;
			break;
		}

	}


		return 0;
	
}