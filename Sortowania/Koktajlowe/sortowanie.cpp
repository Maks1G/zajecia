#include "sortowanie.hpp"
#include <algorithm>
 
using namespace std;
 
void sortowanieKoktajlowe(int tablica[], int n) {
    bool zamieniono = true;
    int poczatek = 0;
    int koniec = n - 1;
 
    while (zamieniono) {
        zamieniono = false;
        for (int i = poczatek; i < koniec; ++i) {
            if (tablica[i] > tablica[i + 1]) {
                swap(tablica[i], tablica[i + 1]);
                zamieniono = true;
            }
        }
        if (!zamieniono) break;
        zamieniono = false;
        --koniec;
        for (int i = koniec - 1; i >= poczatek; --i) {
            if (tablica[i] > tablica[i + 1]) {
                swap(tablica[i], tablica[i + 1]);
                zamieniono = true;
            }
        }
        ++poczatek;
    }
}