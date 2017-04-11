#include <string>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>

namespace util {
	bool validerFormatNom(const std::string& p_nom) {

		if (p_nom.empty()) {
			return false;
		}

		// Compare chaque charactère à une valeur ASCII
		for (unsigned int i = 0; i < p_nom.length(); i++) {
			if (p_nom[i] > 122 || p_nom[i] < 65 || (p_nom[i] < 97 && p_nom[i] > 90)) {
				std::cout << "**Le nom de la personne ne doit contenir que des lettres**" << std::endl;
				return false;
			}
		}

		return true;
	}

	bool validerTelephone(const std::string& p_telephone) {

		std::string indicatifs[67] = {"403", "587", "780", "825", "236", "250", "604", "778",
									  "204", "431", "506", "709", "867", "782", "902", "226",
									  "249", "289", "343", "365", "416", "437", "519", "548",
									  "613", "647", "705", "807", "905", "782", "902", "418",
									  "438", "450", "514", "579", "581", "819", "873", "306",
									  "639", "867", "600", "622", "800", "844", "855", "866",
									  "877", "888", "800", "822", "833", "844", "855", "866",
									  "877", "880", "881", "882", "883", "884", "885", "886",
									  "887", "888", "889"};

		if (p_telephone.size() > 12 || p_telephone.size() < 12) {
			return false;
		}

		for (unsigned int x = 0; x < p_telephone.size(); x++) {
			if (x == 3 && isspace(p_telephone[x])) {
			}

			else if (x == 7 && p_telephone[x] == '-') {

			}
			else if (isdigit(p_telephone[x])) {

			}
			else {
				return false;
			}
		}

		for (int y = 0; y < 67; y++) {
			if (indicatifs[y] == p_telephone.substr(0, 3)) {
				return true;
			}
		}

		return false;

	}


	bool validerNumRAMQ(const std::string& p_numero,
						const std::string& p_nom,
						const std::string& p_prenom,
						long p_jourNaissance,
						long p_moisNaissance,
						long p_anneeNaissance,
						char p_sex) {

		if (p_numero.size() != 12) {
			return false;
		}

		std::string month = "0";
		std::string last = p_numero.substr(10, 2);

		for (unsigned int i = 0; i < last.length(); i++) {
			if (last[i] >= '0' && last[i] <= '9') {

			}
			else {
				return false;
			}
		}


		if (p_sex == 'F') {
			p_moisNaissance += 50;
		}

		if (p_moisNaissance < 10) {
			month += std::to_string(p_moisNaissance);
		}
		else
		{
			month = std::to_string(p_moisNaissance);
		}

		if (p_numero.substr(0, 3) == p_nom.substr(0, 3) &&
			p_numero.substr(3, 1) == p_prenom.substr(0, 1) &&
			p_numero.substr(4, 2) == std::to_string(p_anneeNaissance).substr(2, 2) &&
			p_numero.substr(6, 2) == month &&
			p_numero.substr(9, 2) == std::to_string(p_jourNaissance))
		{
			return true;
		}
		else
		{
			return false;
		}

	}


} /* namespace util */

