/*
 * Joueur.h
 *
 *  Created on: 2017-03-24
 *      Author: etudiant
 */

#include "Date.h"
#include "Personne.h"

#ifndef JOUEUR_H_
#define JOUEUR_H_

namespace tp {
	class Joueur: public tp::Personne {
	public:
		Joueur(const std::string& p_nom,
			   const std::string& p_prenom,
			   const util::Date& p_dateNaissance,
			   const std::string& p_telephone,
			   const std::string& p_position);

		// Accesseur
		std::string reqPosition() const;
		std::string reqPersonneFormate() const;

		virtual Personne* clone() const {return new Joueur(*this);};


	private:
		std::string m_nom;
		std::string m_prenom;
		util::Date m_dateNaissance;
		std::string m_telephone;
		std::string m_position;
	};

}

#endif /* JOUEUR_H_ */
