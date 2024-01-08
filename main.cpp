#include <iostream>

using namespace std;

string PIN, prawidlowy_PIN = "1234";

int main()
{

    cout << "Witaj w naszym banku!" << endl;
    cout << "Podaj PIN:";       cin >> PIN;


    if (PIN==prawidlowy_PIN)    {cout << "Prawid³owy PIN. Mo¿esz podj¹æ œrodki z konta." << endl;}
    else                        {cout << "Nieprawid³owy PIN. Spróbuj ponownie." << endl;}



    return 0;
}
