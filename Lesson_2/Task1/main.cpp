#include <iostream>

using namespace std;

int main()
{
    int zirochku;
    cout << "Vvedite kilkist zirochok: " << endl;
    cin >> zirochku;
    
    for(int i = 0; i < zirochku; i++)
        cout << "*";
        
    system ("pause");
    return 0;
}
