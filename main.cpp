#include <iostream>
using namespace std;

#define Zadanie3

#ifdef Zadanie1
int main(int argc, char const *argv[])
{
    bool wczytanie = false;
    int z1 = -1, z2 = -1, z3 = -1, z4 = -1, z5 = -1;
    int max = -1, min = INT_MAX;
    while (!wczytanie)
    {
        if (z1 > 0 && z2 > 0 && z3 > 0 && z4 > 0 && z5 >> 0)
            wczytanie = true;
        z5 = z4;
        z4 = z3;
        z3 = z2;
        z2 = z1;
        cin >> z1;
        if (z1 > max && z1 % 2 != 0)
            max = z1;
        if (z1 < min && z1 % 2 == 0 && z1 > 0)
            min = z1;
    }

    //cerr << z1 << '\t' << z2 << '\t' << z3 << '\t' << z4 << '\t' << z5 << '\n';
    cout << "Max: " << max << "\nMin: " << min;
    cout << '\n';
    return 0;
}
#endif

#ifdef Zadanie2
#include <ctime>
int main(int argc, char const *argv[])
{
    srand(time(0));
    int tab[7][9];
    int naj_w = 0, naj_k = 0;
    tab[0][0] = rand() % 10 * 2 + 10;
    for (size_t i = 1; i < 7; i++)

        for (size_t j = 1; j < 9; j++)
        {
            tab[i][j] = rand() % 10 * 2 + 10;
            if (tab[i][j] >= tab[naj_w][naj_k])
            {
                naj_w = i;
                naj_k = j;
            }
        }

    for (size_t i = 1; i < 7; i++)
    {
        for (size_t j = 1; j < 9; j++)
        {
            if (i == naj_w)
                cout << '(' << tab[i][j] << ')' << '\t';
            else if (j == naj_k)
                cout << '(' << tab[i][j] << ')' << '\t';
            else
                cout << tab[i][j] << '\t';
        }
        cout << '\n';
    }

    return 0;
}

#endif

#ifdef Zadanie3
int main(int argc, char const *argv[])
{
    char tekst[100];
    fgets(tekst, 99, stdin);
    tekst[strlen(tekst) - 1] = 0;
    for (size_t i = 0; tekst[i] == 0; i++)
        if (!isalpha(tekst[i]))
        {
            cout << "invalid_argument";
            break;
        }

    return 0;
}

#endif
