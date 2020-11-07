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

void Cesar::decrypter() {
	const int g = m_contenu.size();
	const int e = tab.size();
	string traduction;
	
	for (int i = 0; i <= g; i++) {
		for (int j = 0; j < e; j++) {
			if (m_contenu[i] == tab_c[j] ) {
				traduction += tab[j];
			}
			else if (m_contenu[i] == tab[j] && j==26) {
				traduction += ' ';
			}
		}
	}
	cout <<endl << "trad :"<<endl << traduction << endl;
	contenu_decrypt� = traduction;
}

void Cesar::crypter() {
	const int g = contenu_decrypt�.size();
	const int e = tab.size();
	string traduction;

	for (int i = 0; i <= g; i++) {
		for (int j = 0; j < e; j++) {
			if (contenu_decrypt�[i] == tab[j]) {
				traduction += tab_c[j];
			}
			else if (contenu_decrypt�[i] == tab_c[j] && j == 26) {
				traduction += ' ';
			}
		}
	}
	contenu_crypt� = traduction;
	cout << endl << "crypt :" << endl << traduction << endl;
}