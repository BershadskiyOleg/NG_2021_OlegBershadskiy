#include <iostream>

using namespace std;

int main()
{
    int number_1, number_2, action;
    cout << "Vvedite perve chislo: ";
    cin >> number_1;
    cout << "Vvedite dryge chislo: ";
    cin >> number_2;
    cout << "Vuberite diay: \n" << "1 - dodatu\n" << "2 - vidnaytu\n" << "3 - pomnogutu\n" << "4 - podilutu\n";
    cin >> action;

    switch(action){
    case 1 : cout << "Resultat: " << number_1 + number_2; break;
    case 2 : cout << "Resultat: " << number_1 - number_2; break;
    case 3 : cout << "Resultat: " << number_1 * number_2; break;
    case 4 : cout << "Resultat: " << number_1 / number_2; break;
    default: cout << "Taka diay vidsytnay";
    }
    system ("pause");
}
