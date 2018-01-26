#include <stdio.h>
int main()
{
  int level, year;
  printf("school level of student: ");
  scanf("%d", &level);
  printf("how many of learning: ");
  scanf("%d", &year);
  if ( ((level >= 1 && level <= 3) && (year > 3 && year <= 12) ) || ((level >= 4 && level <= 6) && (year >= 1 && year <= 12)) ) {
      printf("Yes");
  }
  else {
      printf("No");
  }
}