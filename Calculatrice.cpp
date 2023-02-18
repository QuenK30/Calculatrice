// Calculatrice.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

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
        std::cout << "Que veux tu calculer ? (+ / - / / )" << std::endl;
        std::cin >> operator_;
        std::cout << "Quel est le premier nombre ?" << std::endl;
        std::cin >> numberone_;
        std::cout << "Quel est le second nombre ?" << std::endl;
        std::cin >> numbersecond_;
    }
    std::string getOperator() { return operator_; }
    int getFirstNumber() { return numberone_; }
    int getSecondNumber() { return numbersecond_; }

private:
    std::string operator_;
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
        std::cout << "Le résultat de ton addition est (" << afc.getFirstNumber() << " + " << afc.getSecondNumber() << ") = " << result << std::endl;
    }else
        if (afc.getOperator() == "-") {
            int result = calculatrice.soustraction(afc.getFirstNumber(), afc.getSecondNumber());
            std::cout << "Le résultat de ta soustraction est (" << afc.getFirstNumber() << " + " << afc.getSecondNumber() << ") = " << result << std::endl;
        }else
            if (afc.getOperator() == "/") {
                int result = calculatrice.division(afc.getFirstNumber(), afc.getSecondNumber());
                std::cout << "Le résultat de ta division est (" << afc.getFirstNumber() << " + " << afc.getSecondNumber() << ") = " << result << std::endl;
            }
            else {
                std::cout << "L'opérateur n'est pas enregistré." << std::endl;
            }


    return 0;
}