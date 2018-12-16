#include <stdio.h>


int main ()

{
    int i;  // number of files
    int j = 0;
    printf ("Greetings, human! \n");
    printf ("Enter the number scanf of files \n");
    scanf("%d",&i);
    printf ("Type the new file name \n");
    FILE *pToFile = fopen("test.txt","w");  // Opens the text.txt file in writing mode
    if(pToFile != NULL) // If the pToFile found the the file
    {
        while (j <= i) // Why the fuck j <= i doesn't work?
        {
            fprintf (pToFile, "ren \"*.txt\" \"new-filename%d.txt\" \n", j); // Change .txt tp what ever
            j++;
        }
            printf("The CMD lines are saved to the test.txt file\n");
            printf("Change it to .bat and run it \*fingers crossed\* \n");
            fclose(pToFile);    // Closes thexit(1)e file
    }
    else
        {
            printf ("There is no such file \a \a");
            exit(1);
        }
    return (0);
}
