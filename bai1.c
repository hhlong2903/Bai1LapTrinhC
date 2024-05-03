/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int laBoiCua7(int so) {
    return (so % 7 == 0);
}

int main()
{
    printf("Cac so nguyen co 2 chu so va la boi cua 7 la:\n");
    for (int i = 10; i < 100; i++) {
        if (laBoiCua7(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
