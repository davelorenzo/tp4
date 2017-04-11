/*
 * Joueur.cpp
 *
 *  Created on: 2017-03-24
 *      Author: etudiant
 */
#include <string>
#include <sstream>
#include <iostream>
#include "Personne.h"
#include "Joueur.h"
#include "Date.h"

namespace tp {
	Joueur::Joueur(const std::string& p_nom,
				   const std::string& p_prenom,
				   const util::Date& p_dateNaissance,
				   const std::string& p_telephone,
				   const std::string& p_position) :
						   Personne(p_nom,
									p_prenom,
									p_dateNaissance,
									p_telephone),
									m_position(p_position){
		util::Date yolo;
		PRECONDITION(p_position == "centre" || p_position == "ailier" ||
					 p_position == "gardien" || p_position == "défense");
		PRECONDITION(5475<(yolo-p_dateNaissance) && (yolo-p_dateNaissance)<6205);



	};
	std::string Joueur::reqPosition() const {
		return m_position;
	}

	std::string Joueur::reqPersonneFormate() const {

		std::ostringstream personneFormate;
		personneFormate << "------------------- " << std::endl;
		personneFormate << "Nom               : " << m_nom << std::endl;
		personneFormate << "Prenom            : " << m_prenom << std::endl;
		personneFormate << "Date de naissance : " << m_dateNaissance << std::endl;
		personneFormate << "Telephone         : " << m_telephone << std::endl;
		personneFormate << "Position          : " << m_position << std::endl;
		personneFormate << "------------------- " << std::endl;

		return personneFormate.str();
	}
}
