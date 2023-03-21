/* ctime example */
#include <stdio.h>      /* printf */
#include <time.h>       /* time_t, time, ctime (standarna biblioteka za rabota so vreme i datumi) */

int main () // zapochnuvanje na glavnata funkcija na programata
{
  time_t rawtime; // deklariranje na promenliva rawtime za chuvanje na tekovnoto vreme

  time (&rawtime); // povikuvanje na funkcijata time(), za da se dobie vremeto zachuvano vo promenlivata rawtime
  printf ("The current local time is: %s", ctime (&rawtime)); // se pechati momentalnoto lokalno vreme, i vremeto se pretvora vo tekstualen oblik so pomosh na funkcijata ctime().

  return 0; // vrakjanje rezultat 0 kako rezultat na glavnata funkcija
}