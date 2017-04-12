/*
 * Annuaire.cpp
 *
 *  Created on: 2017-04-03
 *      Author: etudiant
 */
#include "Annuaire.h"
#include <sstream>
#include <vector>

using namespace std;

/**
 * \brief constructeur par défaut \n
 * Un annuaire est crée selon son attribut recu
 */
Annuaire::Annuaire(const std::string& p_nomClub) : m_nomClub (p_nomClub){
	PRECONDITION(!p_nomClub.empty());
}

/**
 * \brief ajoute une personne dans le vecteur de l'annuaire
 */
void Annuaire::ajouterPersonne(const tp::Personne& p_personne){
	m_vMembres.push_back(p_personne.clone());
}
/**
 * \brief destructeur de l'annuaire
 */
Annuaire::~Annuaire()
{}

/**
 * \brief retourne l'annuaire formatée dans une chaîne de caracères (string)
 * \return l'annuaire formatée dans une chaîne de caractères
 */
string Annuaire::reqAnnuaireFormate() const {
	ostringstream os;

	os << "Club      :" << m_nomClub << endl;
	os << "---------------------" << endl;
	for(int i = 0; i< m_vMembres.size(); i++)
	//On utilise notes.size() pour la limite de notre boucle
	{
	  os << m_vMembres[i]->reqPersonneFormate() << endl;  //On additionne toutes les notes
	}

	return os.str();
}



