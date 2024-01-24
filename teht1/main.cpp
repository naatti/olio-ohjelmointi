// Olio-ohjelmointi, kevät 2024
// Antti Rytilahti
//
// Kotitehtävä 1
// Laadi ohjelma, joka pyytää pelaajaa arvaamaan arvotun satunnaisen luvun
    // annetulta väliltä 1-n.
// Pelaajaa autetaan kertomalla onko hänen arvauksensa pienempi tai
    // suurempi tai yhtäsuuri kuin etsittävä luku.
// Kun arvaus on yhtäsuuri kuin luku, peli päättyy.

#include <iostream>
//#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum);

int main()
{
    int korkein_arvattava   = 0;
    int arvausmaara         = 0;

    // Arvotaan satunnainen luku. Korkein arvattava luku on 40.
    korkein_arvattava = 40;
    // std::srand(1705525730);
    std::srand(time(NULL));

    //    // Satunnaislukugeneraattorin testausta
    //    for(int i=0;i<40;i++) {
    //        cout << std::rand() % korkein_arvattava << endl;
    //    }

    while(true) {
        arvausmaara = game(korkein_arvattava);
        cout << "Arvasit "
             << arvausmaara
             << " kertaa."
             << endl << endl;
    }

    return 0;
}

int game(int maxnum) {
    int etsittava_luku      = 0;
    int pelaajan_arvaus     = 0;
    int arvausmaara         = 0;

    etsittava_luku = std::rand() % maxnum; // antaa välin 0..(max - 1)
    etsittava_luku++; // "siirretään" luku välille 1..max

    cout << "Tervetuloa arvauspeliin!" << endl;
    cout << "Lukualue on 1-" << maxnum << "." << endl;

    while(true) {
        // Kysytään pelaajalta arvaus
        cout << "Anna arvauksesi: ";
        cin  >> pelaajan_arvaus;
        arvausmaara++;

        // Tarkistetaan onko arvaus ja kerrotaan tarkistuksen tulos
        if (pelaajan_arvaus < etsittava_luku) {
            cout << "Haettu luku on suurempi kuin " << pelaajan_arvaus << endl;
        }
        else if (pelaajan_arvaus > etsittava_luku) {
            cout << "Haettu luku on pienempi kuin " << pelaajan_arvaus << endl;
        }
        else if (pelaajan_arvaus == etsittava_luku) {
            cout << "DING! DING! DING! Oikea vastaus!" << endl;
            break;
        }
        else {
            cout << "Mitä ihmettä just tapahtui? Näin ei pitäisi ikinä tapahtua!" << endl;
            cout << "pelaajan_arvaus = " << pelaajan_arvaus << endl;
            cout << "etsittava_luku  = " << etsittava_luku  << endl;
        }

        // Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan arvaamiseen.
    }

    return arvausmaara;
}
