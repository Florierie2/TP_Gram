#include "automate.h"
#include "etat.h"

Etat :: Etat(const string &stringName){
    name = stringName;
}

Etat::~Etat(){}

Etat0 :: Etat0() : Etat("Etat0"){ }
Etat1 :: Etat1() : Etat("Etat1"){ }
Etat2 :: Etat2() : Etat("Etat2"){ }
Etat3 :: Etat3() : Etat("Etat3"){ }
Etat4 :: Etat4() : Etat("Etat4"){ }
Etat5 :: Etat5() : Etat("Etat5"){ }
Etat6 :: Etat6() : Etat("Etat6"){ }
Etat7 :: Etat7() : Etat("Etat7"){ }
Etat8 :: Etat8() : Etat("Etat8"){ }
Etat9 :: Etat9() : Etat("Etat9"){ }

bool Etat0::transition(Automate &automate, Symbole *s)
{
    switch(*s){
        case(INT) :
            automate.decalage(new Etat3(), s);
            break;
        case(OPENPAR) :
            automate.decalage(new Etat2(), s);
            break;
        case(EXPR) : 
            automate.decalage(new Etat1(), s);
            break;
        default :
            return false;
    }
    return true;
}   

bool Etat1::transition(Automate &automate, Symbole *s)
{
    switch(*s){
        case(PLUS) :
            automate.decalage(new Etat3(), s);
            break;
        case(MULT) :
            automate.decalage(new Etat5(), s);
            break;
        case(FIN) : 
            return false;
            break;
        default : 
            return false;
    }
    return true;
} 
  
bool Etat2::transition(Automate &automate, Symbole *s)
{
    switch(*s){
        case(INT) :
            automate.decalage(new Etat3(), s);
            break;
        case(OPENPAR) :
            automate.decalage(new Etat2(), s);
            break;
        default : 
            return false;
    }
    return true;
}   
bool Etat3::transition(Automate &automate, Symbole *s)
{
    switch(*s){
        default : 
            return false;
    }
    return true;
}   
bool Etat4::transition(Automate &automate, Symbole *s)
{
    switch(*s){
        case(INT) :
            automate.decalage(new Etat3(), s);
            break;
        case(OPENPAR) :
            automate.decalage(new Etat2(), s);
            break;
        default : 
            return false;
    }
    return true;
}   
bool Etat5::transition(Automate &automate, Symbole *s)
{
    switch(*s){
        case(INT) :
            automate.decalage(new Etat3(), s);
            break;
        case(OPENPAR) :
            automate.decalage(new Etat2(), s);
            break;
        default : 
            return false;
    }
    return true;
}   
bool Etat6::transition(Automate &automate, Symbole *s)
{
    switch(*s){
        case(PLUS) :
            automate.decalage(new Etat4(), s);
            break;
        case(MULT) :
            automate.decalage(new Etat5(), s);
            break;
        case(CLOSEPAR) :
            automate.decalage(new Etat9(), s);
            break;
        default : 
            return false;
    }
    return true;
}   

bool Etat7::transition(Automate &automate, Symbole *s)
{
    switch(*s){
        case(MULT) :
            automate.decalage(new Etat5(), s);
            break;
        default :
            return false;
    }
    return true;
}   
bool Etat8::transition(Automate &automate, Symbole *s)
{
    switch(*s){
        default :
            return false;
    }
    return true;
}   
bool Etat9::transition(Automate &automate, Symbole *s)
{
    switch(*s){
        default :
        return false;
    }
return true;
} 

