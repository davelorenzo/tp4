/*
 * Annuaire.h
 *
 *  Created on: 2017-04-03
 *      Author: etudiant
 */

#ifndef ANNUAIRE_H_
#define ANNUAIRE_H_

#include <string>
#include <vector>
#include "Personne.h"
/**
 * \class Annuaire
 * \brief Cette classe sert a la création et la manipulation de l'objet Annuaire.
 *
 *             La classe maintient dans un état cohérent ces renseignements.
 *             Elle valide ce qu'on veut lui assigner.
 *              <p>
 *              Cette classe peut aussi ajouter une personne courante dans l'annuaire
 *              <p>
 *              La classe n'accepte que des q'une personne valide , c'est la
 *              responsabilité de l'utilisateur de la classe de s'en assurer.
 *              <p>
 *  Attributs:  m_vMembres Vecteur comportant les personnes
 * 				m_nomClub String comportant le nom l'annuaire
 */
class Annuaire
{
	public:
	Annuaire(const std::string& p_nomClub);
	void ajouterPersonne(const tp::Personne& p_personne);
	std::string reqAnnuaireFormate() const;
	std::string reqNom();
	~Annuaire();


	private:
	std::vector<tp::Personne*> m_vMembres;
    std::string m_nomClub;

};



#endif /* ANNUAIRE_H_ */
