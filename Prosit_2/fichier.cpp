#include "fichier.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

Fichier::Fichier() : m_path(""),m_contenu("")
{
}

void Fichier::lire(string const chemin) {
	m_path = chemin;
    ifstream fichier(m_path.c_str());

    if (fichier)
    {
        //L'ouverture s'est bien passée, on peut donc lire

        string ligne; //Une variable pour stocker les lignes lues
        string result="";
        cout << "contenu du fichier :" << endl;
        while (getline(fichier, ligne)) //Tant qu'on n'est pas à la fin, on lit
        {
            cout << ligne << endl;
            //Et on l'affiche dans la console
            result += ligne;
        }
        m_contenu = result;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
        m_contenu = "NA";
    }
    fichier.close();
}

void Fichier::ecrire(string texte,string path) {
    
	ofstream monFlux(path.c_str(), ofstream::out | ofstream::app);
	if (monFlux) {
        
		monFlux <<endl<< texte << endl;
	}
	else { 
		cout << "ERREUR: impossible d'ecrire dans le fichier" << endl; 
	}
    monFlux.close();
}
