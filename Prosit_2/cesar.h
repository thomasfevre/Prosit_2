#pragma once
#include <string>
#include <iostream>
#include "fichier.h"
#ifndef DEF_CESAR
#define DEF_CESAR

class Cesar: public Fichier {
public:
	Cesar();
	std::string decrypter();
	void crypter(std::string texte);

private:
	std::string tab;
	std::string tab_c;
};


#endif