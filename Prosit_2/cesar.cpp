#include "cesar.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


Cesar::Cesar() {
	tab = "abcdefghijklmnopqrstuvwxyz ";
	tab_c = "bcdefghijklmnopqrstuvwxyza *";
	cout << "tableaux construits !" << endl;
}

string Cesar::decrypter(string texte) {
	const int g = texte.size();
	const int e = tab.size();
	string traduction;
	
	for (int i = 0; i <= g; i++) {
		for (int j = 0; j < e; j++) {
			if (texte[i] == tab_c[j] ) {
				traduction += tab[j];
			}
			else if (texte[i] == tab[j] && j==26) {
				traduction += ' ';
			}
		}
	}
	cout <<endl << "trad :"<<endl << traduction << endl;
	return traduction;
}

void Cesar::crypter(std::string texte) {
	const int g = texte.size();
	const int e = tab.size();
	string traduction;

	for (int i = 0; i <= g; i++) {
		for (int j = 0; j < e; j++) {
			if (texte[i] == tab[j]) {
				traduction += tab_c[j];
			}
			else if (texte[i] == tab_c[j] && j == 26) {
				traduction += ' ';
			}
		}
	}
	cout << endl << "crypt :" << endl << traduction << endl;
}