#include "tp4gui.h"
#include "Joueur.h"
#include "Entraineur.h"
#include "Date.h"
#include "Annuaire.h"
#include "ajouterjoueurdialog.h"

using namespace tp;
using namespace util;

tp4GUI::tp4GUI(QWidget *parent)
    : QMainWindow(parent) {
	ui.setupUi(this);
	QObject::connect(ui.ajouterBouton, SIGNAL(clicked()), this, SLOT(ajouterJoueurDialog()));
}

tp4GUI::~tp4GUI() {

}

void tp4GUI::ajouterJoueurDialog() {
	AjouterJoueurDialog saisieJoueur(this);
	saisieJoueur.exec();
}
