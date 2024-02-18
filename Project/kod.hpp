#ifndef KOD_HPP
#define KOD_HPP

// Deklaracje funkcji sortujących i wyszukiwania

void sortowanieBabelkowe(int arr[], int size);
void sortowaniePrzezScalanie(int arr[], int left, int right);
void sortowanieSzybkie(int arr[], int left, int right);
void sortowaniePrzezWstawianie(int arr[], int size);
void sortowanieKoktajlowe(int arr[], int size);

int wyszukiwanieLiniowe(int arr[], int size, int klucz);
int wyszukiwanieLinioweZwartownikiem(int arr[], int size, int klucz);
int wyszukiwanieSkokowe(int arr[], int size, int klucz);
int wyszukiwanieBinarne(int arr[], int left, int right, int klucz);
int wyszukiwanieInterpolacyjne(int arr[], int size, int klucz);

#endif
