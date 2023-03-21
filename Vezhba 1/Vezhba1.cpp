#include <iostream>
using namespace std;

int main() {
   int pass = 0; // promenliva za broenje na premini vo nizata
   int a[24] = {'S','t','e','f','a','n',' ','K','o','c','o','v','s','k','i',' ','I','N','K','I','1','0','2','6'}; // niza od 24 karakteri

   cout << "Pochetna niza" << endl; // ispecati "Pochetna niza" na konzolata
   for(int i=0; i<24; i++) { // se vrshi proverka na elementite od nizata
      printf("%c ", a[i]); // se pecatat elementite od nizata, kade elementot oznacen kako 'c%'' e formatot za ispisuvanje na odreden karakter
      // (a[i]) e promenliva koja go sodrzi ASCII kodot na karakterot oznacen kako 'i' vo nizata [a]
   }

   for(int i=0; i<24; i++) { // zapocnuva for-ciklus kade se proveruva sekoj element od nizata
      for (int j=0; j<24; j++) { // zapocnuva vtor for-ciklus kade se sporeduva sekoj element so ostanatite
         if(a[i]<a[j]) { // se proveruva dali prviot element e pomal od vtoriot
            int temp = a[i]; // ako e taka, vremenski se zacuvuva prviot element
            a[i]=a[j]; // vtoriot element se dodava na mestoto od prviot element
            a[j] = temp; // vremenskata promenliva (prviot element) se dodava na mestoto na vtoriot
         }
      }
      pass++; // se zgolemuva brojot na premini vo nizata, se dodeka ne se podredat elementite po golemina
   }

   cout << "\nSortirana niza" << endl; // ispecati "Sortirana niza" na konzolata
   for(int i=0;i<24;i++) {
      printf("%c ", a[i]); // gi pechati elementite na nizata otkako se sortirani
   }

   cout << "\nBrojot na premini pri sortiranjeto: " << pass << endl; // ispecati "Brojot na premini pri sortiranjeto:" na konzolata i go dodava brojot na premini
   return 0;
}
