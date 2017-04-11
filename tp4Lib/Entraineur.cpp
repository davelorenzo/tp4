/*
 * Entraineur.cpp
 *
 *  Created on: 2017-03-24
 *      Author: etudiant
 */
#include <string>
#include <sstream>
#include <iostream>
#include "Personne.h"
#include "Entraineur.h"
#include "Date.h"
#include "ContratException.h"
#include "validationFormat.h"


namespace tp {
	Entraineur::Entraineur(const std::string& p_nom,
						   const std::string& p_prenom,
						   const util::Date& p_dateNaissance,
						   const std::string& p_telephone,
						   const std::string& p_numRAMQ,
						   const char p_sexe) :
							   Personne(p_nom,
									    p_prenom,
										p_dateNaissance,
										p_telephone),
										m_numRAMQ(p_numRAMQ),
										m_sexe(p_sexe){
		util::Date yolo;
		PRECONDITION(6570<(yolo-p_dateNaissance));
	    PRECONDITION(util::validerNumRAMQ(p_numRAMQ,
										  p_nom,
										  p_prenom,
										  p_dateNaissance.reqJour(),
										  p_dateNaissance.reqMois(),
										  p_dateNaissance.reqAnnee(),
										  p_sexe));

	}

	std::string Entraineur::reqNumRAMQ() const {
		return m_numRAMQ;
	}

	std::string Entraineur::reqPersonneFormate() const {

		std::ostringstream personneFormate;
		personneFormate << "------------------- " << std::endl;
		personneFormate << "Nom               : " << m_nom << std::endl;
		personneFormate << "Prenom            : " << m_prenom << std::endl;
		personneFormate << "Date de naissance : " << m_dateNaissance << std::endl;
		personneFormate << "Telephone         : " << m_telephone << std::endl;
		personneFormate << "Numero de la RAMQ : " << m_numRAMQ << std::endl;
		personneFormate << "------------------- " << std::endl;

		return personneFormate.str();
	}

}
