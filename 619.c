#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROLLS 36000

int main(void)
{
    int face1, face2, sum;
    int frequency[13] = { 0 }; 
    int expected[13] = { 0, 0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1 }; 

    srand((unsigned int)time(NULL));

    for (int i = 0; i < ROLLS; i++)
    {
        face1 = 1 + rand() % 6;
        face2 = 1 + rand() % 6;
        sum = face1 + face2;
        frequency[sum]++;
    }

    printf("%6s%12s%15s%15s\n", "Sum", "Frequency", "Expected", "Actual (%)");
    for (int j = 2; j <= 12; j++)
    {
        double expectedCount = ROLLS * (expected[j] / 36.0);
        double actualPercent = (double)frequency[j] / ROLLS * 100.0;
        printf("%6d%12d%15.1f%14.2f%%\n", j, frequency[j], expectedCount, actualPercent);
    }

    system("pause");
    return 0;
}