#pragma once
#include <string>
#include <iostream>
#ifndef DEF_FICHIER
#define DEF_FICHIER


class Fichier
{
public :
	Fichier();
	std::string lire(std::string chemin);
	void ecrire(std::string texte);

private :
	std::string m_path;
};











#endif