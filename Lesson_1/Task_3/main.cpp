#include <iostream>

using namespace std;

int main()
{
    int T, Z, G;
    cout << "Vvedite skilku treba gorixiv: ";
    cin >> T;
    cout << "Skilku shishok zibrano: ";
    cin >> Z;
    cout << "Skilku gorixiv v shushki: ";
    cin >> G;
    
    if(T <= Z * G)
    {
        cout << "OK";
    }
    elae if(T > Z * G) // просто else чомусь не працює, тому використав else if
    {
        cout << "NO";
    }
    system ("pause");

       return 0;
}
