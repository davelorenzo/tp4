/**
 * \file Personne.h.
 * \brief Fichier qui contient l'interface de la classe Personne qui sert au maintien et à la manipulation d'une personne.
 * \author Dave Lorenzo Version initiale, THE
 * \date 23 février 2017
 * \version 1.0
 */
#ifndef PERSONNE_H_
#define PERSONNE_H_

#include <string>
#include "validationFormat.h"
#include "Date.h"

namespace tp {
/**
 * \class Personne
 * \brief Cette classe sert a la création et la manipulation de l'objet Personne.
 *
 *             La classe maintient dans un état cohérent ces renseignements.
 *             Elle valide ce qu'on veut lui assigner.
 *              <p>
 *              Cette classe peut aussi comparer une personne courante a une autre
 *              <p>
 *              La classe n'accepte que des q'une personne valide , c'est la
 *              responsabilité de l'utilisateur de la classe de s'en assurer.
 *              <p>
 *  Attributs:  m_nom   String comportant le nom de famille de la Personne
 * 				m_prenom String comportant le prenom de la Personne
 * 				m_telephone String comportant le numéro de téléphone de la Personne
 * 				m_dateNaissance Date comportant la date de naissance d'une Personne
 */
class Personne {
public:

	Personne(const std::string& p_nom, const std::string& p_prenom,
			const util::Date& p_dateNaissance, const std::string& p_telephone);
	void asgTelephone(const std::string& p_telephone);
	bool operator==(const Personne& unePersonne);
	std::string reqNom() const;
	std::string reqPrenom() const;
	util::Date reqDateNaissance() const;
	std::string reqTelephone() const;
	virtual std::string reqPersonneFormate() const;
	virtual Personne* clone() const = 0;
	virtual ~Personne() {} ;
	void verifieInvariant() const;

protected:

	std::string m_nom;
	std::string m_prenom;
	std::string m_telephone;
	util::Date m_dateNaissance;
};
} // namespace tp
#endif /* PERSONNE_H_ */
