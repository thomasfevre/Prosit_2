#pragma once
#include <string>
#include <iostream>
#ifndef DEF_CESAR
#define DEF_CESAR

class Cesar {
public:
	Cesar();
	std::string decrypter(std::string texte);
	void crypter(std::string texte);

private:
	std::string tab;
	std::string tab_c;
};


#endif