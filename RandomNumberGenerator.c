#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main()
{
    int num[30];
    srand(time(NULL));
    char choice;

    do
    {
        printf("Generated Numbers: \n");

        for(int i = 0; i < 30; i++) //Fills Array with Numbers with size n
        {
            num[i] = i + 1; //Doesn't generate a zero
        }

        for(int i = 0; i < 6; i++) //Shuffles Array
        {
            int temp = num[i];
            int randNum = rand() % 30 + 1; //Randomly generates numbers from 1 to 30
            num[i] = num[randNum];
            num[randNum] = temp;
        }
        
        for(int i = 0; i < 6; i++) //Prints Array
        {
            printf("%d ", num[i]);
            getch();
        }
        
        printf("\nWould you like to run the program again? [Y/N]: ");
        scanf(" %c", &choice);

    } while(toupper(choice) == 'Y');
    
    printf("\n");

    return 0;
}