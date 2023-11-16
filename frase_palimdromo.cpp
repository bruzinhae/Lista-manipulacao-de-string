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
    
    char frase[30];
    int comp, flag = 0;

    cout << "Digite a frase: " << endl;
    cin.getline(frase, 30);

    comp = strlen(frase);

    for (int i = 0, j = comp - 1; i < comp / 2; i++, j--) {
        if (frase[i] != frase[j]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        cout << "A frase: " << frase << " é um palíndromo!";
    } else {
        cout << "A frase: " << frase << " não é um palíndromo!";
    }

    return 0;
}