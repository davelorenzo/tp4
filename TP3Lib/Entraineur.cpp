/*
 * Entraineur.cpp
 *
 *  Created on: 2017-04-02
 *      Author: etudiant
 */
/**
 * \file Personne.cpp
 * \brief Implantation de la classe Personne
 * \author Yves Roy Version initiale, THE
 * \date 23 février 2017
 * \version 1.0
 */
#include "Entraineur.h"
#include <sstream>

using namespace std;

/**
 * \brief constructeur par défaut \n
 * Un Entraineur est crée selon ses attributs recu
 */
Entraineur::Entraineur(const std::string& p_nom, const std::string& p_prenom,
		const util::Date& p_dateNaissance, const std::string& p_telephone,
		const std::string& p_numRAMQ, char p_sexe) :
		Personne(p_nom, p_prenom, p_dateNaissance,p_telephone), m_numRAMQ(p_numRAMQ), m_sexe(p_sexe){
	PRECONDITION(!p_prenom.empty());
	PRECONDITION(!p_nom.empty());
	PRECONDITION(!p_numRAMQ.empty());
	PRECONDITION(p_sexe != '/0');
}

/**
 * \brief retourne le numéro de RAMQ de l'entraineur
 * \return un string qui représente le numéro de RAMQ de l'Entraineur
 */
string Entraineur::reqNumRAMQ() const {
	return m_numRAMQ;
}

/**
 * \brief retourne un Entraineur formatée dans une chaîne de caracères (string)
 * \return l'entraineur formatée dans une chaîne de caractères
 */
string Entraineur::reqPersonneFormate() const {
	ostringstream os;

	os << Personne::reqPersonneFormate()<<endl;
	os << "Numéro de RAMQ    :" << reqNumRAMQ() << endl;
	os << "---------------------" << endl;

	return os.str();
}
/**
 * \brief Permet de faire une copie allouée sur le monceau de l'objet courant.
 */
tp::Personne* Entraineur::clone() const
{
	return new Entraineur(*this);
}



