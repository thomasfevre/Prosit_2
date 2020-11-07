#include <iostream>
#include <string>
#include <fstream>
#include "fichier.h"
#include "cesar.h"

using namespace std;

void binaire(int chiffre) {

}

int main(){
	
	Cesar test;
	string dechiffre, chiffre;
	
	test.lire("Texte.txt");
	test.ecrire("texte rajoute");
	test.decrypter();
	test.crypter();
	return 0;
}