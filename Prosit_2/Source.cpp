#include <iostream>
#include <string>
#include <fstream>
#include "fichier.h"
#include "cesar.h"
#include "xOR.h"
#include "prosit.h"

using namespace std;

void binaire(int chiffre) {

}

int main(){
	Prosit test;
	int c_d=0;
	int secu=0;
	debut:
	cout << "voulez-vous crypter[1] le fichier ou le decrypter[2]?" << endl;
	cin >> c_d;
	if (c_d == 1) {
		cout << "quelle securité ? Cesar=1 xOR=2 les deux=3" << endl;
		cin >> secu;
		if (secu == 1) {
			test.Ccrypter("decrypté.txt", "crypté.txt");
		}
		else if (secu == 2) {
			test.Xcrypter("decrypté.txt", "crypté.txt");
		}
		else if (secu == 3) {
			test.Pcrypter("decrypté.txt", "crypté.txt");
		}
		cout << "mauvaise valeur entree !" << endl;
		goto debut;
	}
	else if (c_d == 2) {
		cout << "quelle securité ? Cesar=1 xOR=2 les deux=3" << endl;
		cin >> secu;
		if (secu == 1) {
			test.Cdecrypter("crypté.txt", "decrypté.txt");
		}
		else if (secu == 2) {
			test.Xdecrypter("crypté.txt", "decrypté.txt");
		}
		else if (secu == 3) {
			test.Pdecrypter("crypté.txt", "decrypté.txt");
		}
		else {
			cout << "mauvaise valeur entree !" << endl;
			goto debut;
		}
	}
	else {
		cout << "mauvaise valeur entree !" << endl;
		goto debut;
	}
	
	
	cout << "OPERATION EFFECTUEE AVEC SUCCES !" << endl;

	return 0;
}