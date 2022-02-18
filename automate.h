
#include "lexer.h"
#include "symbole.h"
#include <stack>
#include <string>
using namespace std;

class Etat;

class Automate {
    public :
        Automate (string flux);
        void decalage(Etat *e, Symbole *s);
        void reduction(int nbADepiler, Symbole *s);
        void run();

    protected :
        stack<Etat *> pileEtat;
        stack<Symbole *> pileSymbole;
        Lexer * lexer;

};