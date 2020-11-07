#pragma once
#include <string>
#include <iostream>
#include "fichier.h"
#ifndef DEF_XOR
#define DEF_XOR

class xOR : public Fichier {
public:
	xOR();
	void decrypter();
	void crypter();
	int convertir_ASCII(char c);
	std::string convertir_bin(int n);

private:
	std::string m_message;
	std::string m_cle;
	std::string m_contenu_decrypté;
	std::string m_contenu_crypté;
};







#endif