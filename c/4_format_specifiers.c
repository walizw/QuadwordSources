#include <stdio.h>

int
main (void)
{
  int integer_var = 100;
  float floating_var = 331.79f;
  double double_var = 8.44e+11;
  char char_var = 'W';

  _Bool bool_var = 0;

  printf ("integer_var = %d\n", integer_var);
  printf ("floating_var = %f\n", floating_var);
  printf ("double_var = %e\n", double_var);
  printf ("double_var = %g\n", double_var);
  printf ("char_var = %c\n", char_var);
  printf ("bool_var = %d\n", bool_var);

  return 0;
}
