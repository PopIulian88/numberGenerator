#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
struct NUMERE
{
    char zero, unu, doi, trei, patru;
    char cinci, sase, sapte, opt, noua;
}Num[6][5];
void genMat()
{
    char k = '@';
    Num[1][1].zero = Num[1][2].zero = Num[1][3].zero = k;
    Num[5][1].zero = Num[5][2].zero = Num[5][3].zero = k;
    Num[2][1].zero = Num[2][3].zero = Num[3][1].zero = k;
    Num[3][3].zero = Num[4][1].zero = Num[4][3].zero = k;
    Num[1][3].unu = Num[2][2].unu = Num[2][3].unu = k;
    Num[3][1].unu = Num[3][3].unu = Num[4][3].unu = k;
    Num[5][3].unu = k;
    Num[1][1].doi = Num[1][2].doi = Num[1][3].doi = k;
    Num[2][3].doi = Num[3][1].doi = Num[3][2].doi = k;
    Num[3][3].doi = Num[4][1].doi = Num[5][1].doi = k;
    Num[5][2].doi = Num[5][3].doi = k;
    Num[1][1].trei = Num[1][2].trei = Num[1][3].trei = k;
    Num[3][1].trei = Num[3][2].trei = Num[3][3].trei = k;
    Num[5][1].trei = Num[5][2].trei = Num[5][3].trei = k;
    Num[2][3].trei = Num[4][3].trei = k;
    Num[3][1].patru = Num[3][2].patru = Num[3][3].patru = k;
    Num[1][1].patru = Num[1][3].patru = Num[2][1].patru = k;
    Num[2][3].patru = Num[4][3].patru = Num[5][3].patru = k;
    Num[1][1].cinci = Num[1][2].cinci = Num[1][3].cinci = k;
    Num[3][1].cinci = Num[3][2].cinci = Num[3][3].cinci = k;
    Num[5][1].cinci = Num[5][2].cinci = Num[5][3].cinci = k;
    Num[2][1].cinci = Num[4][3].cinci = k;
    Num[1][1].sase = Num[1][2].sase = Num[1][3].sase = k;
    Num[3][1].sase = Num[3][2].sase = Num[3][3].sase = k;
    Num[5][1].sase = Num[5][2].sase = Num[5][3].sase = k;
    Num[2][1].sase = Num[4][1].sase = Num[4][3].sase = k;
    Num[1][1].sapte = Num[1][2].sapte = Num[1][3].sapte = k;
    Num[2][3].sapte = Num[3][3].sapte = Num[4][3].sapte = k;
    Num[5][3].sapte = k;
    Num[1][1].opt = Num[1][2].opt = Num[1][3].opt = k;
    Num[3][1].opt = Num[3][2].opt = Num[3][3].opt = k;
    Num[5][1].opt = Num[5][2].opt = Num[5][3].opt = k;
    Num[2][1].opt = Num[2][3].opt = Num[4][1].opt = k;
    Num[4][3].opt = k;
    Num[1][1].noua = Num[1][2].noua = Num[1][3].noua = k;
    Num[3][1].noua = Num[3][2].noua = Num[3][3].noua = k;
    Num[5][1].noua = Num[5][2].noua = Num[5][3].noua = k;
    Num[2][1].noua = Num[2][3].noua = Num[4][3].noua = k;
}
void afis(int nr, int lin)
{
    int j;
    if(nr == 0)
        for(j = 0; j <= 4; j++)
            cout << Num[lin][j].zero;
    else if(nr == 1)
        for(j = 0; j <= 4; j++)
            cout << Num[lin][j].unu;
    else if(nr == 2)
        for(j = 0; j <= 4; j++)
            cout << Num[lin][j].doi;
    else if(nr == 3)
        for(j = 0; j <= 4; j++)
            cout << Num[lin][j].trei;
    else if(nr == 4)
        for(j = 0; j <= 4; j++)
            cout << Num[lin][j].patru;
    else if(nr == 5)
        for(j = 0; j <= 4; j++)
            cout << Num[lin][j].cinci;
    else if(nr == 6)
        for(j = 0; j <= 4; j++)
            cout << Num[lin][j].sase;
    else if(nr == 7)
        for(j = 0; j <= 4; j++)
            cout << Num[lin][j].sapte;
    else if(nr == 8)
        for(j = 0; j <= 4; j++)
            cout << Num[lin][j].opt;
    else if(nr == 9)
        for(j = 0; j <= 4; j++)
            cout << Num[lin][j].noua;
}
long long generator(long long ls, long long ld){
    srand (time(NULL));
    if(ls == ld)
        return ls;
    if(ls > ld)
    swap(ls, ld);
    ld -= ls;
    ld++;
    return rand() % ld + ls;
}
long long ordine(long long n, int i)
{
        if(n > 9)
        {
        ordine(n / 10, i);
        afis(n % 10, i);
        }else
            afis(n, i);
}
int main()
{
    int i;
    long long a, b, gen;
    cout << "\n      GENERATOR DE NUMERE";
    cout << "\n\n  Acest program alege la intamplare\n un numar intre: ";
    genMat();
    while(true)
    {
        i = 1;
        cin >> a >> b;
        gen = generator(a, b);
        cout << '\n';
        while(i <= 5)
        {
            ordine(gen, i);
            cout << '\n';
            i++;
        }
        cout << "\n   Alege alte 2 numere: ";
    }
}
