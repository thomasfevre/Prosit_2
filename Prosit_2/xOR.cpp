#include "xOR.h"
#include <iostream>
#include <string>
#include <fstream>
#include <math.h>

using namespace std;

// ajouter la cle dans les meyhodes avec le fonctio bin si elle marche
xOR::xOR() : m_message(""), m_cle("a definir ds fn"), m_contenu_crypté(""), m_contenu_decrypté("")
{
}

void xOR::decrypter(string message) {
	m_message = message ;
	int g = m_message.size();
	int i = 0;
	int h = 0;
	int j = 0;
	string tmp;
	string resultat;
	while ( i <g ) {
		tmp = "";
		while (m_message[j] != ' ' && m_message[j] != '-') {
			tmp += m_message[j];
			j++;
			i++;
		}
		i++;
		j++;
		
		h = bin2entier(tmp);
		char r = h^199;
		int s = h ^ 199;
		resultat += r;
	}
	cout << endl << "message decrypte :"<< resultat << endl;
	m_contenu_decrypté = resultat;
}

void xOR::crypter(string message) {
	m_message = message;
	int g = m_message.size();
	int h = 0;
	int A;
	string tmp;
	string resultat;
	for (int i = 0; i < g; i++) {
		tmp = "";
		A = convertir_ASCII(m_message[i]);
		tmp = convertir_bin(A);
		resultat += tmp ;
		resultat += "-";
	}
	cout << endl <<"contenu crypte :" << endl << resultat << endl;
	m_contenu_crypté = resultat;

}

int xOR::convertir_ASCII(char c) {
		char lettre = c;
		int lettreEnAscii = (int)lettre;
		return lettreEnAscii^199;
}

string xOR::convertir_bin(int n) {
	string r;
	while (n != 0) {
		r = (n % 2 == 0 ? "0" : "1") + r; n /= 2;
	}
	return r;
}

int xOR::bin2entier(string bin)
{
	int i, result, n;
	char tmp;
	n = bin.size();
	result = 0;
	for (i = 0; i < n / 2; i++) {
		tmp = bin[i];
		bin[i] = bin[n - 1 - i];
		bin[n - 1 - i] = tmp;
	}
	for (i = 0; i < n; i++) {
		if (bin[i] == '1') {
			result += pow(2, i);
		}
	}
	return result;
}
