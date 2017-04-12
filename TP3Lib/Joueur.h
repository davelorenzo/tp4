/*
 * Joueur.h
 *
 *  Created on: 2017-04-03
 *      Author: etudiant
 */

#ifndef JOUEUR_H_
#define JOUEUR_H_

#include <string>
#include "Personne.h"
/**
 * \class Joueur
 * \brief Cette classe sert a la création et la manipulation de l'objet Joueur.
 * Cette classe est dérivé de la classe de base de Personne
 *
 *             La classe maintient dans un état cohérent ces renseignements.
 *             Elle valide ce qu'on veut lui assigner.
 *              <p>
 *              La classe n'accepte que des q'une personne valide , détient les attributs de la classe de base Personne
 *              c'est la responsabilité de l'utilisateur de la classe de s'en assurer.
 *              <p>
 *  Attributs:  m_position  String comportant la position du Joueur
 */
class Joueur : public tp::Personne
{
	public:
	Joueur(const std::string& p_nom, const std::string& p_prenom,
			const util::Date& p_dateNaissance, const std::string& p_telephone,
			const std::string& p_position);
	std::string reqPosition() const;
	virtual std::string reqPersonneFormate() const;
	virtual tp::Personne* clone() const;

	private:
    	std::string m_position;

};

#endif /* JOUEUR_H_ */
