#include <iostream>
#include <string>
#include <fstream>
#include "fichier.h"
#include "cesar.h"
#include "xOR.h"

using namespace std;

void binaire(int chiffre) {

}

int main(){
	
	/*Cesar test;
	
	test.lire("Texte.txt");
	test.ecrire("texte rajoute");
	test.decrypter();
	test.crypter();*/

	xOR test1;

	test1.lire("mot.txt");
	test1.crypter();
	return 0;
}