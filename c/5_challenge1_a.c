#include <stdio.h>

int
main ()
{
  double width = 27.3;
  double height = 9.83;

  double perimeter = 0.0;
  double area = 0.0;

  perimeter = (width + height) * 2.0;
  area = width * height;

  printf ("The width of the rectangle is %f, and its height is %f\n", width,
          height);

  printf ("The perimeter is: %f\n", perimeter);
  printf ("The area is: %f\n", area);

  return 0;
}
