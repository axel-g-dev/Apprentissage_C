#include <iostream>
using namespace std;

// Déclaration (Prototype de ma fonction)
int addition(int a, int b); 
int soustraction(int a, int b);   

int main() { 
    cout << "Programme" << endl;
    int x_soustraction = soustraction(10, 5); 
    int x_addition = addition(10, 5);

    cout << "Le résultat est : " << x_addition << endl;
    cout << "Le résultat de la soustraction est : " << x_soustraction << endl;
    return 0;
}

// Définition de ma fonction addition
int addition(int a, int b) {
    return a + b;
}

// Définition de ma fonction soustraction
int soustraction(int a, int b) {
    return a - b;
}
