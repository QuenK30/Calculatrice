// Calculatrice.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;

//Calculatrice class
class Calculatrice
{
public:
    //Addition
    int addition(int a, int b) {
        return a + b;
    }
    //Soustraction
    int soustraction(int a, int b) {
        return a - b;
    }
    // Division
    int division(int a, int b) {
        return a / b;
    }
};

class AskForCalc 
{
public:
    void AskCalc() {
        cout << "Que veux tu calculer ? (+ / - / / )" << endl;
        cin >> operator_;
        cout << "Quel est le premier nombre ?" << endl;
        cin >> numberone_;
        cout << "Quel est le second nombre ?" << endl;
        cin >> numbersecond_;
    }
    string getOperator() { return operator_; }
    int getFirstNumber() { return numberone_; }
    int getSecondNumber() { return numbersecond_; }

private:
    string operator_;
    int numberone_ = 0;
    int numbersecond_ = 0 ;
};

int main()
{
    AskForCalc afc;
    Calculatrice calculatrice;
    afc.AskCalc();

    if (afc.getOperator() == "+") {
        int result = calculatrice.addition(afc.getFirstNumber(), afc.getSecondNumber());
        cout << "Le résultat de ton addition est (" << afc.getFirstNumber() << " + " << afc.getSecondNumber() << ") = " << result << endl;
    }else
        if (afc.getOperator() == "-") {
            int result = calculatrice.soustraction(afc.getFirstNumber(), afc.getSecondNumber());
            cout << "Le résultat de ton addition est (" << afc.getFirstNumber() << " + " << afc.getSecondNumber() << ") = " << result << endl;
        }else
            if (afc.getOperator() == "/") {
                int result = calculatrice.division(afc.getFirstNumber(), afc.getSecondNumber());
                cout << "Le résultat de ton addition est (" << afc.getFirstNumber() << " + " << afc.getSecondNumber() << ") = " << result << endl;
            }
            else {
                cout << "L'opérateur n'est pas enregistré." << endl;
            }


    return 0;
}