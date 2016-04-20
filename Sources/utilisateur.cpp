#include "../Includes/utilisateur.h"
#include "../Includes/library_string.h"


//test git / qt test test test

Utilisateur::Utilisateur()
{
    
}

Utilisateur::~Utilisateur() {

}

void Utilisateur::reconnaissanceAction(string instruction, Mediatheque *currentMed) { //Reconnait l'action tapée par l'utilisateur et execute la fonction correspondante

    string commande = découpageCommande(instruction);
    string complément = découpageComplément(instruction);

    if (commande == "BYE") {
        currentMed->bye();
    }

    else if (commande == "ADD") {
        currentMed->add(complément);
    }

    else if (commande == "LOAD") {
        currentMed->load(complément);
    }

    else if (commande == "SAVE") {
        currentMed->save(complément);
    }

    else if (commande == "SEARCH") {
        currentMed->search(complément);
    }

    else if (commande == "CLEAR") {
        currentMed->clear();
    }

    else if (commande == "LIST") {
        currentMed->list();
    }

    else if (commande == "SHOW") {
        currentMed->show(complément);
    }

    else if (commande == "DELETE") {
        currentMed->deleteId(complément);
    }

    else if (commande == "RESET") {
        currentMed->reset();
    }

    else {
        cout << "Je ne connais pas cette fonction, veuillez en choisir une autre" << endl;
    }
}

string Utilisateur::nomUtilisateur() const
{
    return _nomUtilisateur;
}

void Utilisateur::setNomUtilisateur(const string &nomUtilisateur)
{
    _nomUtilisateur = nomUtilisateur;
}


