#pragma once
#include <string>
#include <iostream>
#include "cesar.h"
#include "xOR.h"
#ifndef DEF_PROSIT
#define DEF_PROSIT

class Prosit : public Cesar, xOR {
public:
	Prosit();
	void Pdecrypter(std::string pathDebut, std::string pathFin);
	void Xdecrypter(std::string pathDebut, std::string pathFin);
	void Cdecrypter(std::string pathDebut, std::string pathFin);
	void Pcrypter(std::string pathDebut, std::string pathFin);
	void Xcrypter(std::string pathDebut, std::string pathFin);
	void Ccrypter(std::string pathDebut, std::string pathFin);
	;
	
};

#endif
