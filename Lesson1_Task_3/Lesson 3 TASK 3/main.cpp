#include <iostream>

using namespace std;

int main()
{
    int treba_gorixiv, zibrano_shushok, gorixiv_v_shishki, Summa;
    cout << "Vvedite skilku treba gorixiv: ";
    cin >> treba_gorixiv;
    cout << "Skilku shishok zibrala: ";
    cin >> zibrano_shushok;
    cout << "Skilku gorixiv v shushki: ";
    cin >> gorixiv_v_shishki;
    Summa = zibrano_shushok*gorixiv_v_shishki;


    if(treba_gorixiv == Summa || treba_gorixiv <= Summa)
    {
        cout << "OK";
    }
    if(treba_gorixiv > Summa)
    {
        cout << "NO";
    }


       return 0;
}
