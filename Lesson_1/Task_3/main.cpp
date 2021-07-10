#include <iostream>

using namespace std;

int main()
{
    int trebaGorixiv, zibranoShushok, gorixivVshishki;
    cout << "Vvedite skilku treba gorixiv: ";
    cin >> trebaGorixiv;
    cout << "Skilku shishok zibrano: ";
    cin >> zibranoShushok;
    cout << "Skilku gorixiv v shushki: ";
    cin >> gorixivVshishki;
    
    if(trebaGorixiv == zibranoShushok * gorixivVshishki || trebaGorixiv < zibranoShushok * gorixivVshishki)
    {
        cout << "OK";
    }
    if(trebaGorixiv > zibranoShushok * gorixivVshishki)
    {
        cout << "NO";
    }
    system ("pause");

       return 0;
}
