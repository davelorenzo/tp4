/*
 * Joueur.cpp
 *
 *  Created on: 2017-04-03
 *      Author: etudiant
 */
#include "Joueur.h"
#include <sstream>

using namespace std;

/**
 * \brief constructeur par défaut \n
 * Un Joueur est crée selon ses attributs recu
 */
Joueur::Joueur(const std::string& p_nom, const std::string& p_prenom,
		const util::Date& p_dateNaissance, const std::string& p_telephone,
		const std::string& p_position) :
		Personne(p_nom, p_prenom, p_dateNaissance,p_telephone), m_position(p_position){
	PRECONDITION(!p_prenom.empty());
	PRECONDITION(!p_nom.empty());
	PRECONDITION(!p_telephone.empty());
	PRECONDITION(!p_position.empty());
}
/**
 * \brief retourne la position du Joueur
 * \return un string qui représente la position du Joueur
 */

string Joueur::reqPosition() const {
	return m_position;
}

/**
 * \brief retourne un joueur formatée dans une chaîne de caracères (string)
 * \return le joueur formatée dans une chaîne de caractères
 */
string Joueur::reqPersonneFormate() const {
	ostringstream os;

	os << Personne::reqPersonneFormate()<<endl;
	os << "Position          :" << reqPosition() << endl;
	os << "---------------------" << endl;

	return os.str();
}
/**
 * \brief Permet de faire une copie allouée sur le monceau de l'objet courant.
 */
tp::Personne* Joueur::clone() const
{
	return new Joueur(*this);
}



