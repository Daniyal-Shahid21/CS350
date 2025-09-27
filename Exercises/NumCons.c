#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int U2B (unsigned long num, int w){
    int bin[w], i , j;
    for (i = 0; i < w; i++){
        bin[i] = num % 2;
        num /= 2;
    }
    for (i = w - 1; i >= 0; i--){
        printf("%d", bin[i]);
    }
    printf("\n");
}

int U2T (unsigned long num, int w){
    num &= (1 << w) - 1;
    if (num >= pow(2, (double)(w-1))){
        num -= pow(2, (double)w);
    }
    printf("%ld\n", num);
}

int B2U (unsigned char* bits, int w){
    int total = 0, base = 1;
    for(int i = w-1; i >= 0; i--){
        total += (bits[i] - '0') * base;
        base *= 2;
    }
    printf("%d\n", total);
}

int B2T (unsigned char* bits, int w){
    int total = 0, base = 1;
    for(int i = w-1; i >= 1; i--){
        total += (bits[i] - '0') * base;
        base *= 2;
    }
    total -= (bits[0] - '0')*(pow(2, (double)(w-1))); 
    printf("%d\n", total);
}

int T2B(long num, int w){
    for (int i = w - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int T2U(long num, int w){
    printf("%u\n", (unsigned)num);
}

int main (){
    int w, selection;
    printf("Type bit limit w: ");
    scanf("%d", &w);

    printf("Unsigned Min: %d\n", 0);
    printf("Unsigned Max: %u\n", (unsigned int)(pow(2, (double)w)-1));
    printf("Signed Min: %d\n", (int)((-1)*pow(2, (double)w-1)));
    printf("Signed Max: %d\n", (int)(pow(2, (double)w-1)-1));

    printf("Select which function to use: \n - U2B(1)\n - U2T(2)\n - B2U(3)\n - B2T(4)\n - T2B(5)\n - T2U(6)\n");
    scanf("%d", &selection);

    unsigned long num;
    long nums;
    char* bits = malloc ((w + 1) * sizeof(char));
    switch (selection){
        case 1:
            printf("Type an Unsigned Int: ");
            scanf("%ld", &num);
            return U2B(num, w);
        case 2:
            printf("Type an Unsigned Int: ");
            scanf("%ld", &num);
            return U2T(num, w);
        case 3:
            for(int i = 0; i < w; i++){
                printf("Please enter next number of binary: ");
                scanf(" %c", &bits[i]);
            }
            bits[w] = '\0';
            return B2U(bits, w);
        case 4:
            for(int i = 0; i < w; i++){
                printf("Please enter next number of binary: ");
                scanf(" %c", &bits[i]);
            }
            bits[w] = '\0';
            return B2T(bits, w);
        case 5:
            printf("Type an Signed Int: ");
            scanf("%ld", &nums);
            return T2B(num, w);
        case 6:
            long num;
            printf("Type an Signed Int: ");
            scanf("%ld", &num);
            return T2U(num, w);
    }
    return 1;
}