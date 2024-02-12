#include "sortowanie.hpp"
#include <algorithm>

using namespace std; 

int podzial(int tablica[], int lewy, int prawy) {
    int pivot = tablica[prawy];
    int i = lewy - 1;
    for (int j = lewy; j <= prawy - 1; j++) {
        if (tablica[j] < pivot) {
            i++;
            swap(tablica[i], tablica[j]);
        }
    }
    swap(tablica[i + 1], tablica[prawy]);
    return i + 1;
}

void sortowanieSzybkie(int tablica[], int lewy, int prawy) {
    if (lewy < prawy) {
        int pi = podzial(tablica, lewy, prawy);
        sortowanieSzybkie(tablica, lewy, pi - 1);
        sortowanieSzybkie(tablica, pi + 1, prawy);
    }
}