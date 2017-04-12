/**
 * \file validationFormat.cpp
 * \brief Implantation de la classe validationFormat
 * \author Dave Lorenzo
 * \date 23 février 2017
 * \version 1.0
 */
#include "validationFormat.h"

using namespace std;

namespace util {
/**
 * \brief Vérifie la validité d'un numéro de téléphone
 * \param[in] p_telephone un string représentant le numéro de telephone d'une personne
 * \return un booléen indiquant si le numéro de téléphone est valide ou non
 */
bool validerTelephone(const std::string& p_telephone) {
	if (p_telephone.length() == 12 && p_telephone[3] == ' '
			&& p_telephone[7] == '-') {
		if ((p_telephone[0] == '4' && p_telephone[1] == '0'
				&& p_telephone[2] == '3')
				|| (p_telephone[0] == '7' && p_telephone[1] == '8'
						&& p_telephone[2] == '0')
				|| (p_telephone[0] == '6' && p_telephone[1] == '0'
						&& p_telephone[2] == '4')
				|| (p_telephone[0] == '2' && p_telephone[1] == '3'
						&& p_telephone[2] == '6')
				|| (p_telephone[0] == '2' && p_telephone[1] == '5'
						&& p_telephone[2] == '0')
				|| (p_telephone[0] == '7' && p_telephone[1] == '7'
						&& p_telephone[2] == '8')
				|| (p_telephone[0] == '9' && p_telephone[1] == '0'
						&& p_telephone[2] == '2')
				|| (p_telephone[0] == '9' && p_telephone[1] == '0'
						&& p_telephone[2] == '5')
				|| (p_telephone[0] == '5' && p_telephone[1] == '1'
						&& p_telephone[2] == '9')
				|| (p_telephone[0] == '2' && p_telephone[1] == '8'
						&& p_telephone[2] == '9')
				|| (p_telephone[0] == '7' && p_telephone[1] == '0'
						&& p_telephone[2] == '5')
				|| (p_telephone[0] == '6' && p_telephone[1] == '1'
						&& p_telephone[2] == '3')
				|| (p_telephone[0] == '8' && p_telephone[1] == '0'
						&& p_telephone[2] == '7')
				|| (p_telephone[0] == '4' && p_telephone[1] == '1'
						&& p_telephone[2] == '6')
				|| (p_telephone[0] == '6' && p_telephone[1] == '4'
						&& p_telephone[2] == '7')
				|| (p_telephone[0] == '4' && p_telephone[1] == '3'
						&& p_telephone[2] == '8')
				|| (p_telephone[0] == '5' && p_telephone[1] == '1'
						&& p_telephone[2] == '4')
				|| (p_telephone[0] == '4' && p_telephone[1] == '5'
						&& p_telephone[2] == '0')
				|| (p_telephone[0] == '5' && p_telephone[1] == '7'
						&& p_telephone[2] == '9')
				|| (p_telephone[0] == '4' && p_telephone[1] == '1'
						&& p_telephone[2] == '8')
				|| (p_telephone[0] == '5' && p_telephone[1] == '8'
						&& p_telephone[2] == '1')
				|| (p_telephone[0] == '8' && p_telephone[1] == '1'
						&& p_telephone[2] == '9')
				|| (p_telephone[0] == '3' && p_telephone[1] == '0'
						&& p_telephone[2] == '6')
				|| (p_telephone[0] == '7' && p_telephone[1] == '0'
						&& p_telephone[2] == '9')
				|| (p_telephone[0] == '8' && p_telephone[1] == '6'
						&& p_telephone[2] == '7')
				|| (p_telephone[0] == '8' && p_telephone[1] == '0'
						&& p_telephone[2] == '0')
				|| (p_telephone[0] == '8' && p_telephone[1] == '6'
						&& p_telephone[2] == '6')
				|| (p_telephone[0] == '8' && p_telephone[1] == '7'
						&& p_telephone[2] == '7')
				|| (p_telephone[0] == '8' && p_telephone[1] == '8'
						&& p_telephone[2] == '8')
				|| (p_telephone[0] == '8' && p_telephone[1] == '5'
						&& p_telephone[2] == '5')
				|| (p_telephone[0] == '9' && isdigit(p_telephone[1])
						&& isdigit(p_telephone[2]))) {
			for (int i = 0; i < p_telephone.length(); i++) {
				if (isalpha(p_telephone[i])) {
					return false;
				}
			}
			return true;
		}
		return false;
	}
	return false;
}
/**
 * \brief Vérifie la validité d'une numéro d'assurance maladie
 * \param[in] p_numero un string représentant le numéro d'assurance maladie
 * \param[in] p_nom un string représentant  le nom d'une personne
 * \param[in] p_prenom un string représentant  le prenom d'une personne
 * \param[in] p_jourNaissance un entier int représentant le jour de naissance
 * \param[in] p_moisNaissance un entier int représentant le mois de naissance
 * \param[in] p_anneeNaissance un entier int représentant le annee de naissance
 * \return un booléen indiquant si le numéro d'assurance maladie est valide ou non
 */
bool validerNumRAMQ(const std::string& p_numero, const std::string& p_nom,
		const std::string& p_prenom, int p_jourNaissance, int p_moisNaissance,
		int p_anneeNaissance, char p_sex) {

	if (p_numero.length() != 14 || p_numero[4] != ' ' || p_numero[9] != ' ') {

		return false;
	}

	for (int i = 0; i < p_numero.length() - 10; i++) {
		if (isdigit(p_numero[i]))

		{
			return false;
		}

	}

	std::string annee = std::to_string(p_anneeNaissance);
	std::string mois = std::to_string(p_moisNaissance);
	std::string jour = std::to_string(p_jourNaissance);
	std::string sexe = std::to_string(p_sex);

	if (p_moisNaissance < 10 && p_moisNaissance > 0) {
		mois.replace(0, 1, "0");
		mois.append(std::to_string(p_moisNaissance));
	}
	if (p_jourNaissance < 10 && p_jourNaissance > 0) {
		jour.replace(0, 1, "0");
		jour.append(std::to_string(p_jourNaissance));
	}
	if (annee.length() == 4) {
		annee[0] = annee[2];
		annee[1] = annee[3];
	}

	if (toupper(p_sex) == 'F') {
		if (toupper(p_numero[0]) == toupper(p_nom[0])
				&& toupper(p_numero[1]) == toupper(p_nom[1])
				&& toupper(p_numero[2]) == toupper(p_nom[2])
				&& toupper(p_numero[3]) == toupper(p_prenom[0])
				&& p_numero[5] == annee[0] && p_numero[6] == annee[1]
				&& (p_numero[7] - 5) == mois[0] && p_numero[8] == mois[1]
				&& p_numero[10] == jour[0] && p_numero[11] == jour[1]
				&& isdigit(p_numero[12]) && isdigit(p_numero[13])) {
			return true;
		} else {
			return false;
		}
	} else if (toupper(p_sex) == 'M') {
		if (toupper(p_numero[0]) == toupper(p_nom[0])
				&& toupper(p_numero[1]) == toupper(p_nom[1])
				&& toupper(p_numero[2]) == toupper(p_nom[2])
				&& toupper(p_numero[3]) == toupper(p_prenom[0])
				&& p_numero[5] == annee[0] && p_numero[6] == annee[1]
				&& p_numero[7] == mois[0] && p_numero[8] == mois[1]
				&& p_numero[10] == jour[0] && p_numero[11] == jour[1]
				&& isdigit(p_numero[12]) && isdigit(p_numero[13])) {
			return true;
		} else {
			return false;
		}
	}
	return false;
}
/**
 * \brief Vérifie la validité d'un format d'un nom
 * \param[in] p_nom un string représentant le nom d'une personne
 * \return un booléen indiquant si le nom est valide ou non
 */
bool validerFormatNom(const std::string& p_nom) {
	if (p_nom.empty()) {
		return false;
	}
	for (int i = 0; i < p_nom.length(); i++) {
		if (isdigit(p_nom[i])) {
			return false;
		}
	}
	return true;
}
/**
 * \brief Vérifie l'âge du joueur
 * \param[in] p_dateNaissance un int représentant l'annee de naissance du joueur
 * \return un booléen indiquant si le joueur a entre 15 et 17 ans
 */
bool validerDateNaissanceJoueur(int p_anneeNaissance){
	if (2017-p_anneeNaissance >= 15 && 2017-p_anneeNaissance <= 17){
		return true;
	}else{
		return false;
	}
}
/**
 * \brief Vérifie l'âge de l'entraineur
 * \param[in] p_dateNaissance un int représentant l'annee de naissance de l'entraineur
 * \return un booléen indiquant si l'entraineur est majeur
 */
bool validerDateNaissanceEntraineur(int p_anneeNaissance){
	if (2017-p_anneeNaissance >= 18){
		return true;
	}else{
		return false;
	}
}
/**
 * \brief Vérifie le sexe de l'entraineur
 * \param[in] p_sexe un char représentant le sexe de l'entraineur
 * \return un booléen indiquant si l'entraineur a un sexe valide
 */
bool validerSexeEntraineur(char p_sexe){
	if (p_sexe == 'M' || p_sexe == 'F')
	{
		return true;
	}else{
		return false;
	}
}
/**
 * \brief Vérifie la position du joueur
 * \param[in] p_position un string représentant la position du joueur
 * \return un booléen indiquant si le joueur a une position valide
 */
bool validerPosition(const string& p_position){
	if(p_position == "AILIER" || p_position == "CENTRE" ||
			p_position == "DEFENSEUR" || p_position == "GARDIEN")
	{
		return true;
	}else{
		return false;
	}
}
/**
 * \brief convertit la chaine passée en paramètre en majuscules
 * \param[in] p_chaine la chaine à convertir
 * \param[out] la chaine passée en entrée est convertie
 */
void convertitEnMajuscules(string& p_chaine)
{
    for (unsigned i = 0; i < p_chaine.size(); ++i)
    {
        p_chaine[i] = toupper(p_chaine[i]);
    }
}
}
