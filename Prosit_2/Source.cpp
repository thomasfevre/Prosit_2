#include <iostream>
#include <string>
#include <fstream>
#include "fichier.h"
#include "cesar.h"

using namespace std;

void binaire(int chiffre) {

}

int main(){
	
	Fichier fichier;
	Cesar test;
	string dechiffre, chiffre;
	
	dechiffre = fichier.lire("Texte.txt");
	fichier.ecrire("yoyoyooyoyooyyoyo");
	chiffre = test.decrypter(dechiffre);
	test.crypter(chiffre);
	return 0;
}