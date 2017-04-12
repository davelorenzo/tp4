#include <iostream>
#include <string>
#include "Personne.h"
#include "Joueur.h"
#include "Date.h"
#include "Entraineur.h"
#include "Annuaire.h"

using namespace std;

int main() {
	/**
	 * \main
	 * \brief Ce main sert a produire un petit programme permettant de crée un annuaire, par la suite d'y ajouter des personnes
	 *  tels que des joueurs et des entraineurs, d'en faire la validation et d'afficher l'information de la liste de l'annuaire.
	 *  Attributs:  nom   un  string comportant le nom de famille de la Personne
	 * 				prenom un string comportant le prenom de la Personne
	 * 				telephone un string comportant le numéro de téléphone de la Personne
	 * 				position un string comportant la position du Joueur
	 * 				sexe un char comportant le sexe de l'entraineur
	 * 				jour un entier long qui représente le jour de naissance d'une personne
	 * 				mois un entier long qui  représente le mois de naissance d'une personne
	 * 				annee un entier long qui représente l'annee de naissance d'une personne
	 */
	string nom;
	string prenom;
	string telephone;
	string position;
	string numero;
	char sexe;
	long jour;
	long mois;
	long annee;

	//Message d'entrée du programme
	cout << "Bienvenue à l'outil d'ajout d'une personne" << endl;
	cout << "-----------------------------------------" << endl;

	//Création d'un annuaire avec un nom de Club
	string nomClub = "winners de hockeyville";
	Annuaire unAnnuaire(nomClub);

	//Message indiquant a l'utilisateur d'entrée le nom d'un joueur
	cout << "Entrez le nom du joueur" << endl;
	std::getline(std::cin, nom);
	util::convertitEnMajuscules(nom);

	//Vérifie que le nom entrée par l'utilisateur est valide
	while (util::validerFormatNom(nom) == false) {
		cout << "Le nom du joueur ne doit comporter que des lettres"<< endl;
		cout << "Entrez le nom du joueur" << endl;
		std::getline(std::cin, nom);
		util::convertitEnMajuscules(nom);
	}

	//Message indiquant a l'utilisateur d'entrée le prenom d'un joueur
	cout << "Entrez le prénom du joueur" << endl;
	std::getline(std::cin, prenom);
	util::convertitEnMajuscules(prenom);

	//Vérifie que le prenom entrée par l'utilisateur est valide
	while (util::validerFormatNom(prenom) == false) {
		cout << "Le prénom ne doit comporter que des lettres" << endl;
		cout << "Entrez le prénom du joueur" << endl;
		std::getline(std::cin, prenom);
		util::convertitEnMajuscules(prenom);
	}

	//Message indiquant a l'utilisateur d'entrée le numéro de téléphone de joueur
	cout << "Entrez le numéro de téléphone du joueur" << endl;
	std::getline(std::cin, telephone);

	//Vérifie que le nunméro de téléphone entrée par l'utilisateur est valide
	while (util::validerTelephone(telephone) == false) {
		cout << "Le numéro de téléphone doit avoir un format national canadien" << endl;
		cout << "Entrez le numéro de téléphone du joueur" << endl;
		std::getline(std::cin, telephone);
	}
	//Message indiquant a l'utilisateur d'entrée la date de naissance du joueur

	cout << "Veuillez entrez sa date de naissance" << endl;
	cout << "Le jour [1...31]" << endl;
	cin >> jour;
	cout << "Le mois [1...12]" << endl;
	cin >> mois;
	cout << "L'année [1970...]" << endl;
	cin >> annee;


	//Vérifie que la date de naissance entrée par l'utilisateur est valide
	while (util::Date::validerDate(jour, mois, annee) == false || util::validerDateNaissanceJoueur(annee) == false) {
		cout << "Date invalide, le joueur doit être âgé entre 15 et 17 ans" << endl;
		cout << "Veuillez entrer sa date de naissance" << endl;
		cout << "Le jour [1...31]" << endl;
		cin >> jour;
		cout << "Le mois [1...12]" << endl;
		cin >> mois;
		cout << "L'année [1970...]" << endl;
		cin >> annee;
	}

	//Message indiquant a l'utilisateur d'entrée la position du joueur
	cout << "Entrez le position du joueur" << endl;
	std::cin.ignore();
	std::getline(std::cin, position);
	util::convertitEnMajuscules(position);

	//Vérifie que la position entrée par l'utilisateur est valide
	while (util::validerPosition(position) == false) {
		cout << "La position du joueur est invalide" << endl;
		cout << "Entrez la position du joueur" << endl;
		std::cin.ignore();
		std::getline(std::cin, position);
		util::convertitEnMajuscules(position);
	}
	// Création d'un joueur dans l'annuaire
	Joueur unJoueur(nom, prenom, util::Date(jour, mois, annee), telephone, position);
	unAnnuaire.ajouterPersonne(unJoueur);

	//Message indiquant a l'utilisateur d'entrée le nom d'un Entraineur
		cout << "Entrez le nom de l'entraîneur" << endl;
		std::getline(std::cin, nom);
		util::convertitEnMajuscules(nom);

		//Vérifie que le nom entrée par l'utilisateur est valide
		while (util::validerFormatNom(nom) == false) {
			cout << "Le nom de l'entraîneur ne doit comporter que des lettres"<< endl;
			cout << "Entrez le nom de l'entraîneur" << endl;
			std::getline(std::cin, nom);
			util::convertitEnMajuscules(nom);
		}

		//Message indiquant a l'utilisateur d'entrée le prenom d'un Entraineur
		cout << "Entrez le prénom de l'entraîneur" << endl;
		std::getline(std::cin, prenom);
		util::convertitEnMajuscules(prenom);

		//Vérifie que le prenom entrée par l'utilisateur est valide
		while (util::validerFormatNom(prenom) == false) {
			cout << "Le prénom ne doit comporter que des lettres" << endl;
			cout << "Entrez le prénom de l'entraîneur" << endl;
			std::getline(std::cin, prenom);
			util::convertitEnMajuscules(prenom);
		}

		//Message indiquant a l'utilisateur d'entrée le numérod de téléphone d'un Entraineur
		cout << "Entrez le numéro de téléphone de l'entraîneur" << endl;
		std::getline(std::cin, telephone);

		//Vérifie que le nunméro de téléphone entrée par l'utilisateur est valide
		while (util::validerTelephone(telephone) == false) {
			cout << "Le numéro de téléphone doit avoir un format national canadien" << endl;
			cout << "Entrez le numéro de téléphone de l'entraîneur" << endl;
			std::getline(std::cin, telephone);
		}
		//Message indiquant a l'utilisateur d'entrée la date de naissance d'une Entraineur

		cout << "Veuillez entrez sa date de naissance" << endl;
		cout << "Le jour [1...31]" << endl;
		cin >> jour;
		cout << "Le mois [1...12]" << endl;
		cin >> mois;
		cout << "L'année [1970...]" << endl;
		cin >> annee;


		//Vérifie que la date de naissance entrée par l'utilisateur est valide
		while (util::Date::validerDate(jour, mois, annee) == false || util::validerDateNaissanceEntraineur(annee) == false) {
			cout << "La date n'est pas valide ou ne correspond pas a la date de naissance d'une personne majeure" << endl;
			cout << "Veuillez entrer sa date de naissance" << endl;
			cout << "Le jour [1...31]" << endl;
			cin >> jour;
			cout << "Le mois [1...12]" << endl;
			cin >> mois;
			cout << "L'année [1970...]" << endl;
			cin >> annee;
		}


		//Message indiquant a l'utilisateur d'entrée le sexe de l'entraineur
		cout << "Veuillez entrer le sexe de l'entraîneur : M ou F"  << endl;
		cin >> sexe;

		//Vérifie que le sexe entrée par l'utilisateur est valide
		while (util::validerSexeEntraineur(sexe) == false) {
			cout << "Le sexe de l'entraineur n'est pas valide" << endl;
			cout << "Veuillez entrer le sexe de l'entraîneur : M ou F" << endl;
			cin >> sexe;
		}

		//Message indiquant a l'utilisateur d'entrée le numérp de RAMQ de l'entraineur
				cout << "Entrez le numéro de RAMQ de l'entraîneur"  << endl;
				std::cin.ignore();
				std::getline(std::cin, numero);
				util::convertitEnMajuscules(numero);

				//Vérifie que le numéro de RAMQ entrée par l'utilisateur est valide
				while (util::validerNumRAMQ(numero, nom, prenom , jour, mois, annee, sexe) == false) {
					cout << "Le numéro de RAMQ de l'entraineur n'est pas valide" << endl;
					cout << "Veuillez entrer le numéro RAMQ de l'entraîneur" << endl;
					std::cin.ignore();
					std::getline(std::cin, numero);
					util::convertitEnMajuscules(numero);
				}
		// Création d'un entraineur dans l'annuaire
		Entraineur unEntraineur(nom,prenom, util::Date(jour, mois, annee), telephone,numero, sexe);
		unAnnuaire.ajouterPersonne(unEntraineur);


	//Message indiquant les informations des personnes dans l'annuaire
	cout << unAnnuaire.reqAnnuaireFormate()<< endl;

	return 0;
}
