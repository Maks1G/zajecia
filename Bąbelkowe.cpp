#include <iostream>
#include <algorithm>
const int MAX_ROZMIAR = 6;
void wypelnijTablice(int tablica[], int rozmiar) {
   std::cout << "Podaj " << rozmiar << " liczb do tablicy:" << std::endl;
   for (int i = 0; i < rozmiar; ++i) {
       std::cout << "Liczba " << i + 1 << ": ";
       std::cin >> tablica[i];
   }
}
void drukujTablice(int tablica[], int rozmiar) {
   std::for_each(tablica, tablica + rozmiar, [](int x){ std::cout << x << " "; });
   std::cout << std::endl;
}
void sortowanieBabelkowe(int tablica[], int rozmiar) {
   for (int i = 0; i < rozmiar - 1; ++i) {
       for (int j = 0; j < rozmiar - i - 1; ++j) {
           if (tablica[j] > tablica[j + 1]) {
               std::swap(tablica[j], tablica[j + 1]);
               std::cout << "Krok " << i + 1 << ": ";
               drukujTablice(tablica, rozmiar);
           }
       }
   }
}
int main() {
   int tablica[MAX_ROZMIAR];
   int n = MAX_ROZMIAR;
   wypelnijTablice(tablica, n);
   std::cout << "Tablica przed sortowaniem bąbelkowym:" << std::endl;
   drukujTablice(tablica, n);
   sortowanieBabelkowe(tablica, n);
   std::cout << "Tablica po sortowaniu bąbelkowym:" << std::endl;
   drukujTablice(tablica, n);
   return 0;
}