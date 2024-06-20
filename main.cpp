#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    // losuje liczbe od 1 do 100
    int liczbaDoZgadniecia = rand() % 100 + 1;

    int zgadniecia = 0; //inicjalizuje licznik prób na 0
    int liczba; // inicjalizacja liczb którą podajemy
    bool zgadniete = false; //przydatne do pętli (jesli false to zgadujesz dalej)

    cout << "Witaj w grze w zgadywanie liczby!\n";
    cout << "Komputer wylosowal liczbe z zakresu od 1 do 100.\n";

    //pętla z negacją (jeśli nie zgadnięte)
    while (!zgadniete) {
        cout << "Podaj swoja liczbe: ";
        cin >> liczba;
        zgadniecia++;//inkrementacja zwiększa licznik prób

        //sprawdza czy liczba jest mniejsza większa lub prawidłowa
        if (liczba == liczbaDoZgadniecia) {
            zgadniete = true;
        } else if (liczba < liczbaDoZgadniecia) {
            cout << "liczba jest za mala. Sprobuj ponownie.\n";
        } else {
            cout << "liczba jest za duza. Sprobuj ponownie.\n";
        }

    }

    cout << "Gratulacje! Zgadles liczbe " << liczbaDoZgadniecia << " po " << zgadniecia << " probach.\n";

    return 0;
}