#pragma once
#include <string>
#include <iostream>
#include "fichier.h"
#ifndef DEF_CESAR
#define DEF_CESAR

class Cesar: public Fichier {
public:
	Cesar();
	void decrypter();
	void crypter();

private:
	std::string tab;
	std::string tab_c;
	std::string contenu_decrypté;
	std::string contenu_crypté;
};


#endif