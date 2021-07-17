#include <iostream>

using namespace std;

int main()
{
    int zirochku;
    cout << "Vvedite kiskist zirochok dlya trukytnuka:" << endl;
    cin >> zirochku;

    for (int i = 0; i < zirochku; i++) {
        cout << '*';
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    system ("pause");
}
