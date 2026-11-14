#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
  int choice;
  float result;
  float A;
  float B;
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
	  scanf("%f", &A);
	  printf("B: ");
	  scanf("%f", &B);
	  result = A + B;
	  printf("Result = %.2f\n", result);
	}
      else if (choice == 2)
	{
	  printf("A: ");
	  scanf("%f", &A);
          printf("B: ");
          scanf("%f", &B);
          result = A - B;
	  printf("Result = %.2f\n", result);
	}
      else if (choice == 3)
	{printf("A: ");
          scanf("%f", &A);
          printf("B: ");
          scanf("%f", &B);
          result = A * B;
          printf("Result = %.2f\n", result);
	}
      while (choice == 4)
	{
	  printf("A: ");
          scanf("%f", &A);
          printf("B: ");
          scanf("%f", &B);
	  if (B == 0)
	    {
	      printf("Error: division by zero\n");
	      break;
	    }
	  result = A / B;
	  printf("Result = %.2f\n", result);
	  break;
	}
    }
  return(0);
}
