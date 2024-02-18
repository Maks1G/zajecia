#include <iostream>
#include <ctime>
#include "kod.hpp"

using namespace std;

const int SIZE = 10;

int main() {
    int t[SIZE];
    srand(time(0)); 

    // Generowanie losowych liczb do tablicy
    for (int i = 0; i < SIZE; ++i) {
        t[i] = rand() % 100 + 1; 
    }

    // Sortowanie bąbelkowe
    sortowanieBabelkowe(t, SIZE);

    // Generowanie nowej tablicy
    int t2[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        t2[i] = rand() % 100 + 1;
    }

    // Sortowanie przez scalanie
    sortowaniePrzezScalanie(t2, 0, SIZE - 1);
    cout << "Sortowanie przez scalanie: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << t2[i] << " ";
    }
    cout << endl;

    int t3[SIZE];
    for (int i = 0; i < SIZE; ++i) {
        t3[i] = rand() % 100 + 1;
    }
    sortowanieSzybkie(t3, 0, SIZE - 1);
    cout << "Sortowanie szybkie: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << t3[i] << " ";
    }
    cout << endl;

    int t4[SIZE];
    for (int i = 0; i < SIZE; ++i) {
        t4[i] = rand() % 100 + 1;
    }
    sortowaniePrzezWstawianie(t4, SIZE);

    int t5[SIZE];
    for (int i = 0; i < SIZE; ++i) {
        t5[i] = rand() % 100 + 1;
    }
    sortowanieKoktajlowe(t5, SIZE);
    
    int klucz = 42; 

    cout << "Wyszukiwanie liniowe: " << wyszukiwanieLiniowe(t, SIZE, klucz) << endl;
    cout << "Wyszukiwanie liniowe z wartownikiem: " << wyszukiwanieLinioweZwartownikiem(t, SIZE, klucz) << endl;
    cout << "Wyszukiwanie skokowe: " << wyszukiwanieSkokowe(t3, SIZE, klucz) << endl;
    cout << "Wyszukiwanie binarne: " << wyszukiwanieBinarne(t3, 0, SIZE - 1, klucz) << endl;
    cout << "Wyszukiwanie interpolacyjne: " << wyszukiwanieInterpolacyjne(t3, SIZE, klucz) << endl;
    
    return 0;
}
