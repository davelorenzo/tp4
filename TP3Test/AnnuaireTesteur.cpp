/*
 * AnnuaireTest.cpp
 *
 *  Created on: 2017-04-06
 *      Author: etudiant
 */
#include "Annuaire.h"
#include "Joueur.h"
#include <gtest/gtest.h>

TEST(Annuaire, ConstructeurValide){
	Annuaire unAnnuaire("hockey");
}

TEST(Annuaire, MethodeAjouterPersonneValide){
	Joueur unJoueur("lorenzo","dave",util::Date(3,11,1993),"438 887-3719","centre");
	Annuaire unAnnuaire("canadien de montreal");
	unAnnuaire.ajouterPersonne(unJoueur);
}





