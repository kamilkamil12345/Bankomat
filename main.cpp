#include <iostream>

using namespace std;

string PIN, prawidlowy_PIN = "1234";

int main()
{

    cout << "Witaj w naszym banku!" << endl;
    cout << "Podaj PIN:";       cin >> PIN;


    if (PIN==prawidlowy_PIN)    {cout << "Prawid�owy PIN. Mo�esz podj�� �rodki z konta." << endl;}
    else                        {cout << "Nieprawid�owy PIN. Spr�buj ponownie." << endl;}



    return 0;
}
