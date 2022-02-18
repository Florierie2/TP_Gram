#include "automate.h"
#include "etat.h"

Automate :: Automate(string flux){
    this->lexer = new Lexer(flux);
    Etat0 * etat0 = new Etat0();
    pileEtat.push(etat0);
}


void Automate :: run()
{
    
    while(pileEtat.size()!=0)
    {
        Symbole *s = lexer->Consulter();
        
    }
}
void Automate :: decalage(Etat *e, Symbole * s)
{
    pileEtat.push(e);
    pileSymbole.push(s);
    this->lexer->Avancer();
}
/*
void Automate :: reduction (int nbADepiler, Symbole *s){
    stack<Symbole *> symboleADepiler;
    
    for(int i =0; i < nbADepiler; i++){
        pileEtat.pop();
        pileSymbole.pop();
    }

    pileSymbole.push(s);
    Etat * etatCourant = pileEtat.top();
    etatCourant -> transition(this, s);
}*/ 