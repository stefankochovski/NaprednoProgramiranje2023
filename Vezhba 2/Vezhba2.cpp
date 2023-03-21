#include <iostream>
#include <string>
#include <algorithm>
#include <random>

using namespace std;

int main() {

    const int deckSize = 54;
    string deck[deckSize];
    
    string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    int index = 0;
    for (string suit : suits) {
        for (string rank : ranks) {
            deck[index++] = rank + " " + suit;
        }
    }
    
    deck[index++] = "Jocker 1";
    deck[index++] = "Jocker 2";

    cout << "Podreden shpil na karti:\n";
    for (int i = 0; i < deckSize; i++) {
        cout << deck[i] << endl;
    }
    
    random_device rd;
    mt19937 g(rd());
    shuffle(deck, deck + deckSize, g);
    
    
    cout << "\nIzmesham shpil na karti:\n";
    for (int i = 0; i < deckSize; i++) {
        cout << deck[i] << endl;
    }
    
    return 0;
}

/*

Na pochetokot gi koristime bibliotekite <iostream>, <string>, <algorithm> i <random>. Vo glavnata funkcija na kodot imame dve promenlivi. Toa se konstantata deckSize, 
koja iznesuva 54, shto go oznachuva brojot na osnovnite 52 karti i dopolnitelnite dva jockeri. Potoa deklarirame string so golemina na deckSize, shto znachi deka 
stringot kje gi sodrzhi site karti vo shpilot. Ponatamu mozheme da gi zabelezhime dvete nizi na stringovi - suits i ranks. Suits gi sodrzhi simbolite na kartite, 
a ranks gi sodrzhi oznakite na samite karti. Vo prodolzhenie mozheme da zabelezhime for ciklus, kade se podreduvaat kartite od sekoj simbol spored nivnite oznaki 
i gi dodava vo nizata na shpilot. Potoa istaknuvame deka na krajot od nizata dodavame jockeri. Na ekranot se ispechatuva "Podreden shpil na karti", kade so 
pomosh na dvata stringa na ekranot se pechatat site karti od shpilot. Vo prodolzhenie se kreiraat random_device i mt19937 koi generiraat sluchajni broevi. 
Kodot go koristi metodot za sluchajno sortiranje shuffle od bibliotekata <algorithm>. So pomosh na ovaa funkcija se promeshuvaat elementite od nizata
po sluchajnost, so shto na ekranot se pechatat po sluchaen redosled. Na kraj se vrakja 0 kako rezultat na glavnata funkvija i programata zavrshuva.

*/