#include <stdio.h>

int main()
{
    int j = 0;
    char city[4][8] = { "Seoul", "Busan", "Incheon", "Ulsan" };

    for (int i = 0; i < 4; i++) {
        /* for (int j = 0; j < 8; j++) {
            printf("%c", city[i][j]);
        }
        printf("\n"); */

        while (city[j] != 0) {
            printf("%c", city[i][j]);
            j++;
        }
        
        printf("\n");
    }
    return 0;

}