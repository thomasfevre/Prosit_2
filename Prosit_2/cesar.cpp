#include "cesar.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


Cesar::Cesar() {
	m_tab = "abcdefghijklmnopqrstuvwxyz ";
	m_tab_c = "bcdefghijklmnopqrstuvwxyza *";
	m_contenu_crypté = "";
	m_contenu_decrypté = "";
	cout << "tableaux construits !" << endl;
}

void Cesar::decrypter() {
	const int g = m_contenu.size();
	const int e = m_tab.size();
	string traduction;
	
	for (int i = 0; i <= g; i++) {
		for (int j = 0; j < e; j++) {
			if (m_contenu[i] == m_tab_c[j] ) {
				traduction += m_tab[j];
			}
			else if (m_contenu[i] == m_tab[j] && j==26) {
				traduction += ' ';
			}
		}
	}
	cout <<endl << "trad :"<<endl << traduction << endl;
	m_contenu_decrypté = traduction;
}

void Cesar::crypter() {
	const int g = m_contenu_decrypté.size();
	const int e = m_tab.size();
	string traduction;

	for (int i = 0; i <= g; i++) {
		for (int j = 0; j < e; j++) {
			if (m_contenu_decrypté[i] == m_tab[j]) {
				traduction += m_tab_c[j];
			}
			else if (m_contenu_decrypté[i] == m_tab_c[j] && j == 26) {
				traduction += ' ';
			}
		}
	}
	m_contenu_crypté = traduction;
	cout << endl << "crypt :" << endl << traduction << endl;
}