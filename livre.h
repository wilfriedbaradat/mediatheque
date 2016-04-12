#include "ressources.h"

#ifndef LIVRE_H
#define LIVRE_H

class Livre : Ressources{
protected :
    int annee;
    string resume;
    int nPage;

public :
    Livre();
    Livre(string _nom);
    Livre(string _nom, string _auteur);
    Livre(string _nom, string _auteur, int _annee);
    Livre(string _nom, string _auteur, int _annee, string _resume);
    Livre(string _nom, string _auteur, int _annee, string _resume, int _nPage);
    void afficheInfos();
    ~Livre();

    int getAnnee() const;
    void setAnnee(int value);
    string getResume() const;
    void setResume(const string &value);
    int getNPage() const;
    void setNPage(int value);
};

#endif // LIVRE_H
