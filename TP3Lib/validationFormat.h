/**
 * \file validationFormat.h.
 * \brief Fichier qui contient l'interface de la classe validationFormat.
 * \author Dave Lorenzo Version initiale, THE
 * \date 23 février 2017
 * \version 1.0
 */
#ifndef VALIDATIONFORMAT_H_
#define VALIDATIONFORMAT_H_

#include <string>

namespace util {
/**
 * \class validationFormat
 * \brief Cette classe sert a valider un numéro de télphone, d'assurance maldie et d'un format de nom valide.
 */
bool validerTelephone(const std::string& p_telephone);

bool validerNumRAMQ(const std::string& p_numero, const std::string& p_nom,
		const std::string& p_prenom, int p_jourNaissance, int p_moisNaissance,
		int p_anneeNaissance, char p_sex);

bool validerFormatNom(const std::string& p_nom);

bool validerDateNaissanceJoueur(int p_anneeNaissance);

bool validerDateNaissanceEntraineur(int p_anneeNaissance);

bool validerSexeEntraineur(char p_sexe);

bool validerPosition(const std::string& p_position);

void convertitEnMajuscules(std::string& p_chaine);
}
#endif /* VALIDATIONFORMAT_H_ */
