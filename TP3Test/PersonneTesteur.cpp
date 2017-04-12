/*
 * PersonneTest.cpp
 *
 *  Created on: 2017-04-06
 *      Author: etudiant
 */

/**
 * \file PersonneTesteur.cpp
 * \brief Implantation des tests unitaires de la classe Polygone
 *        Polygone étant une classe abstraite, on crée une classe concrète
 *        dérivée de cette classe afin de pouvoir effectuer les tests
 * \author administrateur
 * \version 3.0 mise aux normes
 * \date 2 juin 2011
 * \date 2014-03-20 dernière modification : normes 2014 commentaires
 * \date 2014-03-25 dernière modification : renommage des objets de test pour une meilleure lisibilité
 */

#include <gtest/gtest.h>
#include "Personne.h"
using namespace std;

/**
 * \class PolygoneDeTest
 * \brief classe de test permettant de tester la classe abstraite Polygone
 */
class PersonneTesteur : public tp::Personne
{
public:
	PersonneTesteur(const string& p_nom, const string& p_prenom,
			const util::Date& p_dateNaissance, const string& p_telephone) :
			tp::Personne(p_nom, p_prenom, p_dateNaissance,p_telephone) {
	}
	; //instancie un objet Polygone
	void asgTelephone(const std::string& p_telephone);
	bool operator==(const Personne& unePersonne);
	//doit être implantée car la classe est concrète
	virtual std::string reqPersonneFormate() const
	{
		return tp::Personne::reqPersonneFormate();
	}
	;
};

/**
 * \class UnePersonne
 * \brief Fixture  UnePersonne pour la création d'un objet Personne pour les tests
 */
class unePersonne: public ::testing::Test
{
public:
};

/**
 * \brief Test du Constructeur Personne
 *        cas valide:
 */
TEST(Personne, ConstructeurValide)
{
	//tp::Personne unePersonne("lorenzo","dave",util::Date(3,11,1993),"438 887-3719");
}

