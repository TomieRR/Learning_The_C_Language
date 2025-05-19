#include <stdio.h>
#include <stdlib.h>

struct MusicalInstrument{
    char* instrumentType;
    char brand[30];
    int modelYear;
    unsigned char isAcoustic;
};

int main()
{
  struct MusicalInstrument guitar =
  {
      .instrumentType = "Gitara",
      .brand = "Gibson",
      .modelYear = 2019,
      .isAcoustic = 0
  };
  struct MusicalInstrument drums =
  {
      .instrumentType = "Perkusja",
      .brand = "Tama",
      .modelYear = 1999,
      .isAcoustic = 0
  };
  struct MusicalInstrument flute =
  {
      .instrumentType = "Flet",
      .brand = "Altus",
      .modelYear = 2003,
      .isAcoustic = 0
  };


    printf("Test\n"); //zostawiam aby sprawdzic czy ewentualny program by dzialal poprawnie
    return 0;
}
