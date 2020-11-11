#include "xOR.h"
#include <iostream>
#include <string>
#include <fstream>
#include <math.h>

using namespace std;

int CcompteurCle = 0;
int CtailleCle = 0;

// ajouter la cle dans les meyhodes avec le fonctio bin si elle marche
xOR::xOR() : m_cle("199"), m_contenu_crypté(""), m_contenu_decrypté("")
{
}

void xOR::decrypter(string message) {

	int g = message.size();
	int i = 0;
	int h = 0;
	int j = 0;
	string tmp;
	string resultat;
	cout << "quelle est la cle ? :" << endl;

	cin >> m_cle;
	int q = m_cle.size();

	for (int i = 0; i < q; i++) {
		int tmp = 0;
		tmp = (int)m_cle[i];
		cout << tmp << endl;
		m_cle[i] = tmp;
		m_cle += ' ';
		i++;
		q++;
	}
	cout << "la cle est : " << m_cle << endl;
	int tailleCle = m_cle.size();
	int compteurCle = 0;
	while (i < g) {
		int C = 0;
		tmp = "";
		while (message[j] != ' ' && message[j] != '-') {
			tmp += message[j];
			j++;
			i++;
		}
		i++;
		j++;
		C++;
		h = bin2entier(tmp);
		cout << h << "compteur ::  " << m_cle[compteurCle] << endl;
		char r = h ^ (int)m_cle[compteurCle];
		resultat += r;
		compteurCle++;
		if (compteurCle == tailleCle - 3) {
			compteurCle = 0;
		}
		if (C == 10) {												// Retour à la ligne
			C = 0;
			resultat += '\n';
		}
	}
	cout << endl << "message decrypte :" << resultat << endl;
	m_contenu_decrypté = resultat;
}

void xOR::crypter(string message) {

	int g = message.size();
	int A = 0;
	int C = 0;
	string tmp;
	string resultat;

	CcompteurCle = 0;
	cout << "quelle est la cle ? :" << endl;

	cin >> m_cle;
	int h = m_cle.size();

	for (int i = 0; i < h; i++) {
		int tmp = 0;
		tmp = (int)m_cle[i];
		cout << tmp;
		m_cle[i] = tmp;
		m_cle += ' ';
		i++;
		h++;
	}
	cout << "la cle est : " << m_cle << endl;
	CtailleCle = m_cle.size();
	for (int i = 0; i < g; i++) {
		C++;
		tmp = "";
		A = convertir_ASCII(message[i]);
		tmp = convertir_bin(&A);
		resultat += tmp;
		resultat += "-";
		if (C == 10) {												// Retour à la ligne
			C = 0;
			resultat += '\n';
		}
	}
	cout << endl << "contenu crypte :" << resultat << endl;
	m_contenu_crypté = resultat;

}

int xOR::convertir_ASCII(char c) {
	char lettre = c;
	int lettreEnAscii = (int)lettre;
	if (CcompteurCle == CtailleCle - 3) {
		CcompteurCle = 0;
	}
	int r = CcompteurCle;
	cout << "r :   " << r << endl;
	CcompteurCle++;
	int re = lettreEnAscii ^ (int)m_cle[r];

	cout << endl <<lettreEnAscii << "test c bon ?::  " << re << endl;
	return lettreEnAscii ^ (int)m_cle[r];
}

string xOR::convertir_bin(int *n) {
	string r;
	while (*n != 0) {
		r = (*n % 2 == 0 ? "0" : "1") + r; *n /= 2;
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
