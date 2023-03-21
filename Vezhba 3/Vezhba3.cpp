/* asctime example */
#include <stdio.h>      /* printf */
#include <time.h>       /* time_t, struct tm, time, localtime, asctime (standarna biblioteka za rabota so vreme i datumi) */

int main () // zapochnnuvanje so glavnata funkcija vo programata
{
  time_t rawtime; // deklariranje na promenliva rawtime za chuvanje na tekovnoto vreme
  struct tm * timeinfo; // promenliva timeinfo koja kje gi chuva podatocite za datumot i vremeto

  time ( &rawtime ); // povikuvanje na funkcijata time() koja gi zema podatocite za tekovnoto vreme i gi zachuvuva vo promenlivata rawtime, koristejkji &rawtime
  timeinfo = localtime ( &rawtime ); // povikuvanje na funkcijata localtime koja prevzema podatoci od promenlivata rawtime i gi zachuvuva vo timeinfo
  printf ( "The current date/time is: %s", asctime (timeinfo) ); // so pomosh na printf() se pechati tekstot i momentalnoto vreme i datum, vrateni od asctime(), sodrzhana vo timeinfo

  return 0; // vrakjanje rezultat 0 kako rezultat na glavnata funkcija
}