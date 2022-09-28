#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, num3, num4, num5, i, j;
    printf("Input 5 numbers : ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    int arrNum[5] = {num1, num2, num3, num4, num5};

    for (i = 0; i <= 4; i++) {  
        for (j = i + 1; j <= 4; j++){
            if (arrNum[i] < arrNum[j]) {
                int push = arrNum[i];
                arrNum[i] = arrNum[j];
                arrNum[j] = push;
            }
        }
        printf("%d %d %d %d %d \n",arrNum[0],arrNum[1], arrNum[2], arrNum[3], arrNum[4]);
    }

    return 0;
}