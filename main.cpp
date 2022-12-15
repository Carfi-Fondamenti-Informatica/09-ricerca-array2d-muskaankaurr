#include <iostream>
#include "lib.h"
using namespace std;

int main() {
   int contatore =0;
   char nomi[10][20];
   inizio (nomi, 10);
   for (int i=0; i<10;i++){
       cin>> nomi [i];
   }

   char nomedue [1][20];
   inizio (nomedue,1);
   cin >> nomedue[0];
   if (funzione(nomi, nomedue,contatore)){
       cout << contatore << endl;
   }else {
       cout << "non presente"<< endl;
   }
    return 0;
}
