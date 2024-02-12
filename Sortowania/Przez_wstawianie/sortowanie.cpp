#include "sortowanie.hpp"
#include <algorithm>

void sortowaniePrzezWstawianie(int tablica[], int n) {
    int i, klucz, j;
    for (i = 1; i < n; i++) {
        klucz = tablica[i];
        j = i - 1;

        while (j >= 0 && tablica[j] > klucz) {
            tablica[j + 1] = tablica[j];
            j = j - 1;
        }
        tablica[j + 1] = klucz;
    }
}