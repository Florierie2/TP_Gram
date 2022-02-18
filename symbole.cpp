#include "symbole.h"
#include <iostream>

void Symbole::Affiche() {
   cout<<Etiquettes[ident];
}

void Entier::Affiche() {
   Symbole::Affiche();
   cout<<"("<<valeur<<")";
}
void Plus::Affiche() {
   Symbole::Affiche();
}

void Mult::Affiche() {
   Symbole::Affiche();
}

void OpenPar::Affiche() {
   Symbole::Affiche();
}

void ClosePar::Affiche() {
   Symbole::Affiche();
}

void Fin::Affiche() {
   Symbole::Affiche();
}

void Erreur::Affiche() {
   Symbole::Affiche();
}

void Expression::Affiche() {
   Symbole::Affiche();
   cout<<"("<<valeur<<")";
}

int Expression::getValue()
{
   return valeur;
}

int Entier::getValue()
{
   return valeur;
}


