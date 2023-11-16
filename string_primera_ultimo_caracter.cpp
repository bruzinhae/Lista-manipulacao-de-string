/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string.h>

using namespace std;

int main()
{   
    int comp,n;
    char nome[50];
    
        cout << "Digite um nome: ";
        cin.getline(nome,50);
        

        cout << "Primeira letra:"<< nome[0]<< endl;
        cout << "Segunda letra:"<< nome[1]<< endl;
        cout << "penúltima letra:"<< nome[strlen(nome) - 2]<< endl;
        cout << "Últma letra:" << nome[strlen(nome)-1];  
         

}