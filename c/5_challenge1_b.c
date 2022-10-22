#include <stdio.h>

int
main (void)
{
  enum websites
  {
    QUADWORD,
    GEEKSFORGEEKS,
    GITHUB,
    KILL_9,
    LOVELACEC
  };

  enum websites quadword = QUADWORD;
  enum websites kill_9 = KILL_9;
  enum websites lovelacec = LOVELACEC;

  printf ("%d\n%d\n%d\n", quadword, kill_9, lovelacec);

  return 0;
}
