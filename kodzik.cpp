#include <iostream>
 
using namespace std;
 
 
void funkcja() {
    const int n = 12;
    int wylicz_liczby[n];
    int x;
    cout << "Podaj X: ";
    cin >> x;
    int y;
    cout << "Podaj Y: ";
    cin >> y;
    for(int i = 0; i < n; i++){
        int random = rand() % x + y;
        wylicz_liczby[i] = random;
        cout << wylicz_liczby[i] << " ";
    }
}
 
 
int main()
{
    funkcja();
    return 0;
}