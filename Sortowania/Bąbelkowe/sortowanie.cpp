#include "sortowanie.hpp"
#include <algorithm>
 
void sortowanieBabelkowe(int tablica[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tablica[j] > tablica[j + 1]) {
                std::swap(tablica[j], tablica[j + 1]); 
            }
        }
    }
}