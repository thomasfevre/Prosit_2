#include "cesar.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


Cesar::Cesar() {
	m_tab = "abcdefghijklmnopqrstuvwxyz ";
	m_tab_c = "bcdefghijklmnopqrstuvwxyza *";
	m_cesar_crypté = "";
	m_cesar_decrypté = "";
}

void Cesar::decrypter(string message) {
	const int g = message.size();
	const int e = m_tab.size();
	string traduction;
	
	for (int i = 0; i <= g; i++) {
		for (int j = 0; j < e; j++) {
			if (message[i] == m_tab_c[j] ) {
				traduction += m_tab[j];
			}
			else if (message[i] == m_tab[j] && j==26) {
				traduction += ' ';
			}
		}
	}
	cout <<endl << "trad :"<< traduction << endl;
	m_cesar_decrypté = traduction;
}

void Cesar::crypter(string message) {
	const int g = message.size();
	const int e = m_tab.size();
	string traduction;

	for (int i = 0; i <= g; i++) {
		for (int j = 0; j < e; j++) {
			if (message[i] == m_tab[j]) {
				traduction += m_tab_c[j];
			}
			else if (message[i] == m_tab_c[j] && j == 26) {
				traduction += ' ';
			}
		}
	}
	m_cesar_crypté = traduction;
	cout << endl << "crypt :" << traduction << endl;
}