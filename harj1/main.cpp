// Harj1 teht1
//
#include <iostream>

using namespace std;

int main()
{
    int a = 4, b = 5;
    int tulo = 0;

    tulo = a * b * 2 + 1;

    cout << tulo << endl;
    return 0;
}

//
// harj1 teht 1 loppuu
//
// harj1 teht 2
//

void tarkista(int num) {
    if (num < 0)        cout << "negatiivinen" << endl;
    else if (num > 0)   cout << "Positiivinen" << endl;
    else                cout << "nolla" << endl;
}

//
// harj1 teht 2 loppuu
//
// harj1 teht 3
//

void terveiset(int num) {
    for(int i=0; i<num; i++) {
        cout << "Terve " << i+1 << endl;
    }
}

//
// harj1 teht 3 loppuu
//
// harj1 teht 4
//

#include <iostream>

using namespace std;

int main() {
    int luku = 0;
    cout << "?";
    cin >> luku;
    cout << luku*2 << endl;
    return 0;
}

//
// harj1 teht 4 loppuu
//
// harj1 teht 5
//

void kertoma(int num) {
    if(num > 10)        cout << "Luku on liian iso" << endl;
    else if(num < 1)    cout << "Ei voida laskea" << endl;
    else {
        long tulo = 1; // hyvin toimi intilläkin, mut laitetaan nyt long
            // ohjeen mukaisesti. Oikeasti ei mitään hajua miksi.

        for(int i=1; i<=num; i++) {
            tulo *= i;
        }
        cout << tulo << endl;
    }
}

//
// harj1 teht 5 loppuu
//
// harj1 teht 6
//

void tarkista_jaollisuus(int num) {
    if (num % 4 == 0)   cout << "jaollinen" << endl;
    else                cout << "ei jaollinen" << endl;
}

//
// harj1 teht 6 loppuu
//
// harj1 teht 7
//

void tarkista_jaollisuus(int jaettava, int jakaja) {
    if (jaettava % jakaja == 0) cout << "jaollinen" << endl;
    else                        cout << "ei jaollinen" << endl;
}

//
// harj1 teht 7 loppuu
//
// harj1 teht 8
//

void sarja(int sluku) {
    // Muista #include <cstdlib>
    std::srand(sluku);
    cout   << std::rand() % 20 << endl
         << std::rand() % 20 << endl
         << std::rand() % 20 << endl
         << std::rand() % 20 << endl
         << std::rand() % 20 << endl;
}

//
// harj1 teht 8 loppuu
