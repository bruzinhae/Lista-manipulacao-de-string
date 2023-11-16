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
    
    char nome [30];
    int ind, comp;
    
    cout << "Digite o nome:" << endl; 
    cin.getline(nome,30);
    
    cout << "Digite o indice:" << endl;
    cin >> ind;
    
    comp = strlen(nome);
    
    for (int i=ind; i<comp; i++){
        cout << nome[i];
    }
    

    return 0;
}