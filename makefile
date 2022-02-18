main : main.o automate.o symbole.o etat.o lexer.o 
	g++ -o main main.o automate.o symbole.o etat.o lexer.o
	
main.o : main.cpp
	g++ -c main.cpp

automate.o : automate.cpp automate.h
	g++ -c automate.cpp
	
etat.o : etat.cpp etat.h
	g++ -c etat.cpp
	
symbole.o : symbole.cpp symbole.h 
	g++ -c symbole.cpp
	
lexer.o : lexer.cpp lexer.h
	g++ -c lexer.cpp	
	
clear :
	rm main *.o
