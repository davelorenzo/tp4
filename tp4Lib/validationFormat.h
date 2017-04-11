#include <string>

#ifndef VALIDATIONFORMAT_H_
#define VALIDATIONFORMAT_H_

namespace util {
	bool validerFormatNom(const std::string& p_nom);
	bool validerTelephone(const std::string& p_telephone);
	bool validerNumRAMQ(const std::string& p_numero,
						const std::string& p_nom,
						const std::string& p_prenom,
						long p_jourNaissance,
						long p_moisNaissance,
						long p_anneeNaissance,
						char p_sex);
}; /* namespace util */


#endif /* VALIDATIONFORMAT_H_ */
