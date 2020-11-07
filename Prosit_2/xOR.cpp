#include "xOR.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// convertir la cle dans les meyhodes avec le fonctio bin si elle marche
xOR::xOR() : m_message(""), m_cle("11111111"), m_contenu_crypté(""), m_contenu_decrypté("")
{
}

void xOR::decrypter() {
	
	//faire un xor avec la cle pour avoir le lettres en binaire
	//convertir le binaire en ASCII puis en lettre
}

void xOR::crypter() {
	m_message = m_contenu;
	int g = m_message.size();
	int h = 0;
	int A;
	string tmp;
	string resultat;
	for (int i = 0; i < g; i++) {
		tmp = "";
		A = convertir_ASCII(m_message[i]^199);
		tmp = convertir_bin(A);
		resultat += tmp ;
		resultat += "-";
	}
	cout << endl << resultat;
	m_contenu_crypté = resultat;

}

int xOR::convertir_ASCII(char c) {
		char lettre = c;
		int lettreEnAscii = (int)lettre;
		return lettreEnAscii;
}

string xOR::convertir_bin(int n) {
	string r;
	while (n != 0) {
		r = (n % 2 == 0 ? "0" : "1") + r; n /= 2;
	}
	return r;
}