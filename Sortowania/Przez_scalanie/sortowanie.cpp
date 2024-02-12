#include "sortowanie.hpp"
#include <algorithm>

using namespace std; 

void sortowanie_przez_scalanie(int tablica[], int poczatek, int koniec) {
    if (poczatek < koniec) {
        int srodek = poczatek + (koniec - poczatek) / 2;
        sortowanie_przez_scalanie(tablica, poczatek, srodek);
        sortowanie_przez_scalanie(tablica, srodek + 1, koniec);
        inplace_merge(tablica + poczatek, tablica + srodek + 1, tablica + koniec + 1);
    }
}