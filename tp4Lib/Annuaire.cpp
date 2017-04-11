/*
 * Annuaire.cpp
 *
 *  Created on: 2017-03-24
 *      Author: etudiant
 */

#include "Annuaire.h"
#include <string>
#include <sstream>
#include <iostream>
#include "Personne.h"
#include "Date.h"
#include "ContratException.h"
#include "validationFormat.h"


namespace tp {
	Annuaire::Annuaire(const std::string& p_nomClub) :
			m_nomClub(p_nomClub) {
		PRECONDITION(util::validerFormatNom(m_nomClub));
		POSTCONDITION(m_nomClub == p_nomClub);
	};

	std::string Annuaire::reqNom() const {
		return m_nomClub;
	};

	void Annuaire::ajouterPersonne(const Personne& p_personne) {
		m_vMembres.push_back(p_personne.clone());
	};


	std::string Annuaire::reqAnnuaireFormate() const {
		std::ostringstream clubFormate;
		clubFormate << "Club : " << m_nomClub << std::endl;


		for (unsigned i = 0; m_vMembres.size(); i++) {
			clubFormate << m_vMembres[i]->reqPersonneFormate();
		}

		return clubFormate.str();
	}

}


