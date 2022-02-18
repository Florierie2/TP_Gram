#pragma once

#include <string>
using namespace std;

enum Identificateurs { OPENPAR, CLOSEPAR, PLUS, MULT, INT, FIN, ERREUR, EXPR };

const string Etiquettes[] = { "OPENPAR", "CLOSEPAR", "PLUS", "MULT", "INT", "FIN", "ERREUR", "EXPR" };

class Symbole {
   public:
      Symbole(int i) : ident(i) {  }
      virtual ~Symbole() { }
      operator int() const { return ident; }
      virtual void Affiche();

   protected:
      int ident;
};

class Entier : public Symbole {
   public:
      Entier(int v) : Symbole(INT), valeur(v) { }
      ~Entier() { }
      virtual void Affiche();
      int getValue();
   protected:
      int valeur;
};

class Expression : public Symbole {
   public:
      Expression(int v) : Symbole(EXPR), valeur(v) { }
      ~Expression() { }
      virtual void Affiche();
      int getValue();
   protected:
      int valeur;
};

class OpenPar : public Symbole {
   public:
      OpenPar(int v) : Symbole(OPENPAR){ }
      ~OpenPar() { }
      virtual void Affiche();
};

class ClosePar : public Symbole {
   public:
      ClosePar(int v) : Symbole(CLOSEPAR){ }
      ~ClosePar() { }
      virtual void Affiche();
};

class Plus : public Symbole {
   public:
      Plus(int v) : Symbole(PLUS){ }
      ~Plus() { }
      virtual void Affiche();
};

class Mult : public Symbole {
   public:
      Mult(int v) : Symbole(MULT){ }
      ~Mult() { }
      virtual void Affiche();
};

class Fin : public Symbole {
   public:
      Fin(int v) : Symbole(FIN) { }
      ~Fin() { }
      virtual void Affiche();

};

class Erreur : public Symbole {
   public:
      Erreur(int v) : Symbole(ERREUR){ }
      ~Erreur() { }
      virtual void Affiche();
};

