/**
 * \file Personne.cpp
 * \brief Implantation de la classe Personne
 * \author Yves Roy Version initiale, THE
 * \date 23 février 2017
 * \version 1.0
 */
#include "Personne.h"
#include <sstream>

using namespace std;

namespace tp {

/**
 * \brief constructeur par défaut \n
 * Une personne est crée selon ses attributs recu
 */
Personne::Personne(const string& p_nom, const string& p_prenom,
		const util::Date& p_dateNaissance, const string& p_telephone) :
		m_nom(p_nom), m_prenom(p_prenom), m_dateNaissance(p_dateNaissance), m_telephone(
				p_telephone) {
	PRECONDITION(!p_prenom.empty());
	PRECONDITION(!p_nom.empty());
	PRECONDITION(!p_telephone.empty());
}
/**
 * \brief Assigne un numéro de téléphone à l'objet courant
 * \param[in] p_telephone est un string qui représente le numéro de téléphone
 */
void Personne::asgTelephone(const string& p_telephone) {
	m_telephone = p_telephone;
}
/**
 * \brief surcharge de l'opérateur ==
 * \param[in] unePersonne à comparer à la Personne courante
 * \return un booléen indiquant si les deux Personnes sont égales ou non
 */
bool Personne::operator==(const Personne& unePersonne) {
	if (Personne::m_nom == unePersonne.m_nom
			&& Personne::m_prenom == unePersonne.m_prenom
			&& Personne::m_dateNaissance == unePersonne.m_dateNaissance
			&& Personne::m_telephone == unePersonne.m_telephone) {
		return true;
	}
	return false;
}
/**
 * \brief retourne le nom de la personne
 * \return un string qui représente le nom de la personne
 */
string Personne::reqNom() const {
	return m_nom;
}
/**
 * \brief retourne le prenom de la personne
 * \return un string qui représente le orenom de la personne
 */
string Personne::reqPrenom() const {
	return m_prenom;
}
/**
 * \brief retourne la date de naissance de la personne
 * \return un string qui représente la date de naissance de la personne
 */
util::Date Personne::reqDateNaissance() const {
	return m_dateNaissance;
}
/**
 * \brief retourne le numéro de téléphone de la personne
 * \return un string qui représente le numéro de téléphone de la personne
 */
string Personne::reqTelephone() const {
	return m_telephone;
}

/**
 * \brief retourne une personne formatée dans une chaîne de caracères (string)
 * \return la personne formatée dans une chaîne de caractères
 */
string Personne::reqPersonneFormate() const {
	ostringstream os;

	os << "Nom               :" << reqNom() << endl;
	os << "Prenom            :" << reqPrenom() << endl;
	os << "Date de naissance :" << reqDateNaissance().reqDateFormatee()<< endl;
	os << "Telephone         :" << reqTelephone() << endl;

	return os.str();
}

void Personne::verifieInvariant() const
{
INVARIANT(!m_prenom.empty());
INVARIANT(!m_nom.empty());
}

}

