#include <stdio.h>

/* Only change any of these 4 values */
#define V0 3
#define V1 3
#define V2 3
#define V3 3

// DO NOT EDIT BELOW THIS LINE

#ifndef TEST
int main(void) {
  int a;
  char *s;

  /* This is a print statement. Notice the little 'f' at the end!
  It might be worthwhile to look up how printf works for your future
  debugging needs... */
  printf("Berkeley eccentrics:\n====================\n");

  /* for loop */
  for (a=0; a<V0; a++) {
    printf("Happy ");
  }
  printf("\n");

  /* switch statement */
  switch (V1) {
    case 0:   printf("Yoshua\n");
    case 1:   printf("Triangle Man\n");     break;
    case 2:   printf("Chinese Erhu Guy\n");
    case 3:   printf("Yoshua\n");           break;
    case 4:   printf("Dr. Jokemon\n");      break;
    case 5:   printf("Hat Lady\n");
    default:  printf("I don't know these people!\n");
  }

  /* ternary operator */
  s = (V3==3) ? "Go" : "Boo";

  /* if statement */
  if (V2) {
    printf("\n%s BEARS!\n", s);
  } else  {
    printf("\n%s CARDINAL!\n", s);
  }

  return 0;
}
#endif
/* Comentario agregado desde git*/ 
