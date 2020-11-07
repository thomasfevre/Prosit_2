#include <iostream>
#include <string>
#include <fstream>
#include "fichier.h"
#include "cesar.h"

using namespace std;



int main(){
	
	Fichier fichier;
	Cesar test;
	string dechiffre, chiffre;
	dechiffre = fichier.lire("Texte.txt");
	chiffre = test.decrypter(dechiffre);
	test.crypter(chiffre);
	return 0;
}