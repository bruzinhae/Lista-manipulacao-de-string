/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main()
{   
    int n;
    char cid[31];
    
    cout << "N:"<< endl;
    cin >> n;
    cin.ignore();
    
    char cidades[n][31];
    
    for (int i=0; i<n; i++){
    
        cout << "Cidade: "<< endl;
        cin.getline(cidades[i],31);
        
    }

        cout << "Digite a cidade buscada: "<< endl;
        cin.getline(cid,31);
        
        cout << cid;
    
    
    for (int i=0; i<n;i++){
        
        //cout << cidades[i] << cid;
        
            if (strcmp(cidades[i],cid)==0){
                    cout << "Cidade encontrada! " << cidades[i];
            }
            
        
    }
    
    
    
    
    
    
    
    
    
    
    return 0;
}