#include <iostream>

using namespace std;

string Urodziny, Imieniny;

int main()
{
    cout << "Witam w programie sprawdzajacym wiedze z zakresu podstawowych informacji o rodzinie.." << endl;

    cout << "Daty nalezy wpisywac w formacie DD.MM.YYYY wpisujac kropki miedzy znakami." << endl;

    cout << endl;

    cout << "Podaj date urodzin Sylwii:";

    cin >> Urodziny;

    if (Urodziny=="23.11.1992") cout<< "BRAWO!!!";

    else cout << "Niestety nie, poprawna data to: 23.11.1992";

    cout << endl; cout << endl;

cout << "Podaj date urodzin Kamila:";

    cin >> Urodziny;

    if (Urodziny=="20.07.1992") cout<< "BRAWO!!!";

    else cout << "Niestety nie, poprawna data to: 20.07.1992";

    cout << endl; cout << endl;

    cout << "Podaj date urodzin Kacpra:";

    cin >> Urodziny;

    if (Urodziny=="09.07.2018") cout<< "BRAWO!!!";

    else cout << "Niestety nie, poprawna data to: 09.07.2018";

    cout << endl; cout << endl;



    cout << "Podaj date urodzin Adriana:";

    cin >> Urodziny;

    if (Urodziny=="08.01.1998") cout<< "BRAWO!!!";

    else cout << "Niestety nie, poprawna data to: 08.01.1998";

    cout << endl; cout << endl;

}
