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
#include <cstdlib>

using namespace std;

int main()
{
    int korkein_arvattava   = 0;
    int etsittava_luku      = 0;
    int pelaajan_arvaus     = 0;

    // Arvotaan satunnainen luku. Korkein arvattava luku on 20.
    korkein_arvattava = 20;
    std::srand(1705525730);
    etsittava_luku = std::rand() % korkein_arvattava; // antaa välin 0-19
    etsittava_luku++; // "siirretään" luvut välille 1-20

//    for(int i=0;i<40;i++) {
//        cout << std::rand() % korkein_arvattava << endl;
//    }

    while(true) {
        // Kysytään pelaajalta arvaus
        cout << "Anna arvauksesi: ";
        cin  >> pelaajan_arvaus;

        // Tarkistetaan onko arvaus ja kerrotaan tarkistuksen tulos
        if (pelaajan_arvaus < etsittava_luku) {
            cout << "Etsittävä luku on suurempi kuin " << pelaajan_arvaus << endl;
        }
        else if (pelaajan_arvaus > etsittava_luku) {
            cout << "Etsittävä luku on pienempi kuin " << pelaajan_arvaus << endl;
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

        // Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2.
    }

    return 0;
}
