#pragma once
#include <string>
#include <iostream>
#include "fichier.h"
#ifndef DEF_CESAR
#define DEF_CESAR

class Cesar: public Fichier {
public:
	Cesar();
	void decrypter(std::string message);
	void crypter(std::string message);

protected:
	std::string m_tab;
	std::string m_tab_c;
	std::string m_cesar_decrypté;
	std::string m_cesar_crypté;
};


#endif