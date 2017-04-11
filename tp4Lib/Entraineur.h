#include "Personne.h"


#ifndef ENTRAINEUR_H_
#define ENTRAINEUR_H_

namespace tp {
	class Entraineur: public Personne {
	public:
		Entraineur(const std::string& p_nom,
				   const std::string& p_prenom,
				   const util::Date& p_dateNaissance,
				   const std::string& p_telephone,
				   const std::string& p_numRAMQ,
				   const char p_sexe);

		// Accesseur
		std::string reqNumRAMQ() const;
		std::string reqPersonneFormate() const;


		virtual tp::Personne* clone() const {
			return new Entraineur(*this);
		};


	private:
		std::string m_nom;
		std::string m_prenom;
		util::Date m_dateNaissance;
		std::string m_telephone;
		std::string m_numRAMQ;
		char m_sexe;
	};

}

#endif /* ENTRAINEUR_H_ */
