#include <stdio.h>

int main()
{
   int i, j, k = 0, l = 0, height;
   do
   {
   printf("Enter the height of the pyramid: ");
   scanf("%i", &height);
   }
   while (height < 1 || height > 8); //Ensures height supplied falls within boundaries
   {
   for (k = 0, l = 0, i = 1; i <= height;
   i++) //Initialise i, l, k variables in first loop so they reset when 2nd "for" loop is done and printing can resume
   {
      for (j = 1; j <= height - i; j++) //Compares j value to know how any spaces to print
      {
         printf(" ");
      }
      while (k != i) //Compares k value to i which is incremented only after second 'for' loop is done and prints # accordingly
      {
         printf("#");
         k++; //increments so it doesnt keep printing endlessly
      }
      printf("  "); //Prints space between pyramids
      while (l != i) //Compares l, a new variable to i in the first loop to print the same number of hashes as the first pyramid
      {
         printf("#");
         l++;
      }
      printf("\n"); 
   }
   return 0;
   }
   return 0;
}