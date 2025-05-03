#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Personel {
private:
	string isim;
	string personelno;
	string kadro;
public:
	Personel(string _isim, string _personelno, string _kadro);
	string getisim();
	string getpersonelno();
	string getkadro();
	void setisim(string _isim);
	void setpersonelno(string _personelno);
	void setkadro(string _kadro);
	void personelbilgileri() const;
};