#include <stdio.h>

int
main (void)
{
  int my_variable;
  printf ("Enter a value: ");
  scanf ("%d", &my_variable);

  printf ("You entered: %d", my_variable);
  return 0;
}
