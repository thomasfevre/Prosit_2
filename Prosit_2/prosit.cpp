#include "prosit.h"
#include <iostream>
#include <string>
#include <fstream>


using namespace std;

Prosit::Prosit() 
{

}

void Prosit::Pdecrypter(string pathDebut, string pathFin) {
	Fichier::lire(pathDebut);
	xOR::decrypter(Fichier::m_contenu);
	Cesar::decrypter(m_cesar_decrypt�);
	Fichier::ecrire(m_cesar_decrypt�, pathFin);
}

void Prosit::Xdecrypter(string pathDebut, string pathFin) {
	Fichier::lire(pathDebut);
	xOR::decrypter(Fichier::m_contenu);
	Fichier::ecrire(m_cesar_decrypt�, pathFin);
}

void Prosit::Cdecrypter(string pathDebut, string pathFin) {
	Fichier::lire(pathDebut);
	Cesar::decrypter(Fichier::m_contenu);
	Fichier::ecrire(m_cesar_decrypt�, pathFin);
}

void Prosit::Pcrypter(string pathDebut, string pathFin) {
	Fichier::lire(pathDebut);
	xOR::crypter(Fichier::m_contenu);
	Cesar::crypter(m_contenu_crypt�);
	Fichier::ecrire(m_cesar_crypt�, pathFin);
}

void Prosit::Xcrypter(string pathDebut, string pathFin) {
	Fichier::lire(pathDebut);
	xOR::crypter(Fichier::m_contenu);
	Fichier::ecrire(m_contenu_crypt�, pathFin);
}

void Prosit::Ccrypter(string pathDebut, string pathFin) {
	Fichier::lire(pathDebut);
	Cesar::crypter(Fichier::m_contenu);
	Fichier::ecrire(m_cesar_crypt�, pathFin);
}