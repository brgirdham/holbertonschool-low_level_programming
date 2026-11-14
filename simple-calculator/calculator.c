#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
  int choice;
  int result;
  int A;
  int B;
  choice = 1;
  while (choice != 0)
    {
      printf ("Simple Calculator\n");
      printf ("1) Add\n");
      printf ("2) Subtract\n");
      printf ("3) Multiply\n");
      printf ("4) Divide\n");
      printf ("0) Quit\n");
      scanf("%d", &choice);
      if (choice == 0)
	{
	  printf ("Bye!\n");
	}
      else if (choice > 4 || choice < 0)
	{
	  printf ("Invalid choice\n");
	} 
      else if (choice == 1)
	{
	  printf("A: ");
	  scanf("%d", &A);
	  printf("B: ");
	  scanf("%d", &B);
	  result = A + B;
	  printf("Result = %d\n", result);
	}
    }
  return(0);
}
