#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // For usleep()

int main()
{
    int h, m, s;
    int d = 1000000; // Delay in microseconds (1 second = 1,000,000 microseconds)

    printf("Set time (HH MM SS): \n");
    scanf("%d %d %d", &h, &m, &s);

    // Validate input
    if (h < 0 || h > 12 || m < 0 || m > 59 || s < 0 || s > 59)
    {
        printf("ERROR: Invalid time input!\n");
        exit(0);
    }
    printf("\n CLOCK :");
    while (1) // Infinite loop
    {
        s++;
        if (s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            m = 0;
        }
        if (h > 12)
        {
            h = 1;
        }

        
        printf("\n %02d:%02d:%02d", h, m, s);

        usleep(d); // Delay for 1 second
        system("clear"); // Clear the screen (use "cls" for Windows)
    }

    return 0;
}
