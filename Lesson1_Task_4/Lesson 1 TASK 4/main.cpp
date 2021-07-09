#include <iostream>

using namespace std;

int main()
{
   float rozmir_zarplatu;
   cout << "Vvedite rozmir zarplatu: ";
   cin >> rozmir_zarplatu;


   if(rozmir_zarplatu > 1000000)
   {
       cout << "Da ti millioner";
   }

   if(rozmir_zarplatu > 1000 & rozmir_zarplatu < 1000000)
   {
       cout << "Kruto, no ti molodec";
   }
   if(rozmir_zarplatu < 1000)
   {
       cout << "Rabotai bolshe, no ti molodec";
   }
   system ("pause");

       return 0;
}












