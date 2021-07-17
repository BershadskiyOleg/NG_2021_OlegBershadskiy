#include <iostream>

using namespace std;

int main()
{
    int chislo;
    cout << "Vvedite chislo: " << endl;
    cin >> chislo;
    
    for( int i = 0; i < chislo; i++)
        cout << "  " << i;
        
    system ("pause");
    return 0;
}
