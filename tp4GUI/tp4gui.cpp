#include "tp4gui.h"
#include "Joueur.h"
#include "Entraineur.h"
#include "Date.h"
#include "Annuaire.h"
#include <string>


using namespace tp;
using namespace util;

tp4GUI::tp4GUI(QWidget *parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);
	//Personne* joueur1 = new Entraineur("Jacques", "Jean", Date(1, 9, 1990), "819 386-7688", "JACJ01099000", 'M');
	//m_club.ajouterPersonne(joueur1);
}

tp4GUI::~tp4GUI()
{

}
