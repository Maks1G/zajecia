#include <iostream>
#include <algorithm>
const int MAX_ROZMIAR = 6;
void wypelnijTablice(int tablica[], int rozmiar) {
   std::cout << "Wprowadź " << rozmiar << " liczb do tablicy:" << std::endl;
   for (int i = 0; i < rozmiar; ++i) {
       std::cout << "Liczba " << i + 1 << ": ";
       std::cin >> tablica[i];
   }
}
void drukujTablice(int tablica[], int rozmiar) {
   std::for_each(tablica, tablica + rozmiar, [](int x){ std::cout << x << " "; });
   std::cout << std::endl;
}
void sortowaniePrzezScalanie(int tablica[], int poczatek, int koniec) {
   if (poczatek < koniec) {
       int srodek = poczatek + (koniec - poczatek) / 2;
       sortowaniePrzezScalanie(tablica, poczatek, srodek);
       sortowaniePrzezScalanie(tablica, srodek + 1, koniec);
       std::inplace_merge(tablica + poczatek, tablica + srodek + 1, tablica + koniec + 1);
   }
}
int main() {
   int tablica[MAX_ROZMIAR];
   int n = MAX_ROZMIAR;
   wypelnijTablice(tablica, n);
   std::cout << "Tablica przed sortowaniem przez scalanie:" << std::endl;
   drukujTablice(tablica, n);
   sortowaniePrzezScalanie(tablica, 0, n - 1);
   std::cout << "Tablica po sortowaniu przez scalanie:" << std::endl;
   drukujTablice(tablica, n);
   return 0;
}