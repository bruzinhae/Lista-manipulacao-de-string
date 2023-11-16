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
    char cidadel[3][31];
    strcpy(cidadel[0], "campinas");
    strcpy(cidadel[1], "são paulo");
    strcpy(cidadel[2], "vinhedo");
    int n;
    
    cout << "Digite o valor de N:"<< endl;
    cin >> n;
    
    char cidade[n][31];
    
    for (int i=0; i<n; i++){
        
        cout << "Digite a cidade:"<< endl;
        cin.ignore();
        cin.getline(cidade[i], 31);
        
        for (int j = 0; j < 3; j++) {
            if (strcmp(cidadel[j], cidade[i]) == 0) {
                cout << "Cidade: " << cidade[i] << " está na lista!" << endl;
            }
        }
        
        
    }
    

    
    
    
    

    

    return 0;
}