/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    char nome[50];
    
    cout << "Digite um nome: ";
    cin.getline(nome,50);
    
    for (int i =0; i <50; i++){
        if (nome[i]=='a'){
            nome[i]='o';
        }
        if (nome[i]=='e'){
            nome[i]='u';
        }
    }
    
    cout << nome;
}