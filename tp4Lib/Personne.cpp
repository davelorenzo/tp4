#include <string>
#include <sstream>
#include <iostream>
#include "Personne.h"
#include "Date.h"
#include "ContratException.h"
#include "validationFormat.h"

namespace tp {
	Personne::Personne(const std::string& p_nom,
					   const std::string& p_prenom,
					   const util::Date p_dateNaissance,
					   const std::string& p_telephone) :
						   m_nom(p_nom),
						   m_prenom(p_prenom),
						   m_dateNaissance(p_dateNaissance),
						   m_telephone(p_telephone) {
		PRECONDITION(util::validerFormatNom(m_nom));
		PRECONDITION(util::validerFormatNom(m_prenom));
		PRECONDITION(util::validerTelephone(m_telephone));
		POSTCONDITION(m_nom == p_nom);
		POSTCONDITION(m_prenom == p_prenom);
		POSTCONDITION(m_dateNaissance == p_dateNaissance);
		POSTCONDITION(m_telephone == p_telephone);
	}

	std::string Personne::reqNom() const {
		return m_nom;
	}

	std::string Personne::reqPrenom() const {
		return m_prenom;
	}

	std::string Personne::reqDateNaissance() const {
		return m_dateNaissance.reqDateFormatee();
	}

	std::string Personne::reqTelephone() const {
		return m_telephone;
	}

	std::string Personne::reqPersonneFormate() const {
		std::ostringstream personneFormate;
		personneFormate << "------------------- " << m_nom << std::endl;
		personneFormate << "Nom               : " << m_nom << std::endl;
		personneFormate << "Prenom            : " << m_prenom << std::endl;
		personneFormate << "Date de naissance : " << m_dateNaissance << std::endl;
		personneFormate << "Telephone         : " << m_telephone << std::endl;

		return personneFormate.str();
	}

	void Personne::asgTelephone(const std::string& p_telephone) {
		PRECONDITION(util::validerTelephone(m_telephone))
		POSTCONDITION(m_telephone == p_telephone);
		m_telephone = p_telephone;
	}

	bool Personne::operator==(const Personne& unePersonne){

		if (unePersonne.m_nom == m_nom &&
			unePersonne.m_prenom == m_prenom &&
			unePersonne.m_dateNaissance == m_dateNaissance) {
			return true;
		} else {
			return false;
		}
	}

	void Personne::verifieInvariant() const {
		INVARIANTS();
	}
} /* namespace tp */
