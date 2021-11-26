/*C program to calculate area and perimeter of a rectangle,
  area and circumference of a circle.*/
#include<stdio.h>

int
main ()
{
  int l, b, r, area1, perimeter;
  float area2, circum;

  /*Taking length and breadth from the user. */
  printf ("Enter Length and Breadth of Rectangle:");
  scanf ("%d\n %d", &l, &b);
  area1 = l * b;
  perimeter = 2 * (l + b);

  printf ("Area of Rectangle: %d \n", area1);
  printf ("Perimeter of Rectangle: %d \n", perimeter);

  /*Taking radius from the user. */
  printf ("Enter Radius of a Circle:");
  scanf ("%d", &r);
  area2 = 3.14 * r * r;
  circum = 2 * 3.14 * r;
  printf("Area of Circle: %f \n", area2);
  printf ("Circumference of Circle: %f \n", circum);
  
  return 0;
}
