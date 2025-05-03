#include <iostream>
#include <string>
#include <vector>
#include "Personel.h"
using namespace std;

Personel::Personel(string _isim, string _personelno, string _kadro) {
	isim = _isim;
	personelno = _personelno;
	kadro = _kadro;
}
string Personel::getisim() {
	return isim;
}
string Personel::getpersonelno() {
	return personelno;
}
string Personel::getkadro() {
	return kadro;
}
void Personel::setisim(string _isim) {
	isim = _isim;
}
void Personel::setpersonelno(string _personelno) {
	personelno = _personelno;
}
void Personel::setkadro(string _kadro) {
	kadro = _kadro;
}
void Personel::personelbilgileri() const {
	cout << "Isim: " << isim << endl;
	cout << "Personel No: " << personelno << endl;
	cout << "Kadro: " << kadro << endl;
}
