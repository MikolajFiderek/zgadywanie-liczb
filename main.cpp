#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    int liczbaDoZgadniecia = rand() % 100 + 1;

    int zgadniecia = 0;
    int proba;
    bool zgadniete = false;

    cout << "Witaj w grze w zgadywanie liczby!\n";
    cout << "Komputer wylosowal liczbe z zakresu od 1 do 100.\n";

    while (!zgadniete) {
        cout << "Podaj swoja liczbe: ";
        cin >> proba;
        zgadniecia++;

        if (proba == liczbaDoZgadniecia) {
            zgadniete = true;
        } else if (proba < liczbaDoZgadniecia) {
            cout << "To za malo. Sprobuj ponownie.\n";
        } else {
            cout << "To za duzo. Sprobuj ponownie.\n";
        }
    }

    cout << "Gratulacje! Zgadles liczbe " << liczbaDoZgadniecia << " po " << zgadniecia << " probach.\n";

    return 0;
}