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
	std::string m_tab;
	std::string m_tab_c;
	std::string m_contenu_decrypt�;
	std::string m_contenu_crypt�;
};


#endif