/*
 * Annuaire.h
 *
 *  Created on: 2017-03-24
 *      Author: etudiant
 */

#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include "Personne.h"

#ifndef ANNUAIRE_H_
#define ANNUAIRE_H_


namespace tp {

	class Annuaire {
	public:
		Annuaire(const std::string& p_nomClub);
		std::string reqNom() const;
		std::string reqAnnuaireFormate() const;
		void ajouterPersonne(const Personne& p_personne);
		~Annuaire();

	private:
		std::string m_nomClub;
		std::vector<Personne*> m_vMembres;
	};

}


#endif /* ANNUAIRE_H_ */
