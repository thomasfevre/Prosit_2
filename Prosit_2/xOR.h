#pragma once
#include <string>
#include <iostream>
#include "fichier.h"
#ifndef DEF_XOR
#define DEF_XOR

class xOR : public Fichier {
public:
	xOR();
	void decrypter(std::string message);
	void crypter(std::string message);
	int convertir_ASCII(char c);
	std::string convertir_bin(int n);
	int bin2entier(std::string bin);

protected:
	std::string m_message;
	std::string m_cle;
	std::string m_contenu_decrypté;
	std::string m_contenu_crypté;
};







#endif