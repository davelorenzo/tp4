/*
 * Entraineur.h
 *
 *  Created on: 2017-04-02
 *      Author: etudiant
 */

#ifndef ENTRAINEUR_H_
#define ENTRAINEUR_H_

#include <string>
#include "Personne.h"
/**
 * \class Entraineur
 * \brief Cette classe sert a la création et la manipulation de l'objet Entraineur.
 * *Cette classe est dérivé de la classe de base de Personne
 *             La classe maintient dans un état cohérent ces renseignements.
 *             Elle valide ce qu'on veut lui assigner.
 *              <p>
 *              La classe n'accepte que des q'une personne valide , c'est la
 *              responsabilité de l'utilisateur de la classe de s'en assurer.
 *              <p>
 *  Attributs:  m_numRAMQ   String comportant le RAMQ de l'Entraineur
 * 				m_sexe char comportant le sexe de l'entraineur
 */
class Entraineur : public tp::Personne
{
	public:
	Entraineur(const std::string& p_nom, const std::string& p_prenom,
			const util::Date& p_dateNaissance, const std::string& p_telephone,
			const std::string& p_numRAMQ, char p_sexe);
	std::string reqNumRAMQ() const;
	virtual std::string reqPersonneFormate() const;
	virtual tp::Personne* clone() const;

	private:
    	std::string m_numRAMQ;
    	char m_sexe;

};


#endif /* ENTRAINEUR_H_ */
