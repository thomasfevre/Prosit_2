#pragma once
#include <string>
#include <iostream>
#ifndef DEF_FICHIER
#define DEF_FICHIER


class Fichier
{
public :
	Fichier();
	void lire(std::string chemin);
	void ecrire(std::string texte, std::string path);

protected :
	std::string m_contenu;
};






#endif