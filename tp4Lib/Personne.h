#include <string>
#include "Date.h"
#include "validationFormat.h"

#ifndef PERSONNE_H_
#define PERSONNE_H_


namespace tp {
	class Personne {
	public:
		Personne(const std::string& p_nom,
				 const std::string& p_prenom,
				 const util::Date p_dateNaissance,
				 const std::string& p_telephone);

		// Accesseur
		std::string reqNom() const;
		std::string reqPrenom() const;
		std::string reqDateNaissance() const;
		std::string reqTelephone() const;
		virtual std::string reqPersonneFormate() const;

		// Assiganteur
		void asgTelephone(const std::string& p_telephone);

		// Opérateur
		bool operator==(const Personne& unePersonne);

		// Destructeur
		virtual ~Personne() {};

		// Classe abstraite
		virtual Personne* clone() const=0;

	private:
		std::string m_nom;
		std::string m_prenom;
		util::Date m_dateNaissance;
		std::string m_telephone;
		void verifieInvariant() const;
	};
} /* namespace tp */

#endif /* PERSONNE_H_ */
