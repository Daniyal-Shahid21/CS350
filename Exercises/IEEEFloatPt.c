// int FP2U (char* bits){
//     int mantissa;
//     printf("How many bits represent the Mantissa: ");
//     scanf("%d", &mantissa);
//     printf("Current binary representation: \n");
//     for (int i = (sizeof(bits)/sizeof(char)) - 1; i >= 0; i--){
//         printf("%d", bits[i]);
//     }

// }

// int U2FP (){

// }

// int main (){
//     int len, selection;
//     printf("Select which function to use: \n - FP2U(1)\n - U2FP(2)\n");
//     scanf("%d", &selection);

//     if (selection == 1){
//         printf("How many bits do you want in your floating point representation(Include binary point): ");
//         scanf("%d", &len);
//         char* bits = malloc(sizeof(char) * (len + 1));
//         for(int i = 0; i < len; i++){
//                 printf("Please enter next number of binary: ");
//                 scanf(" %c", &bits[i]);
//             }
//             bits[len] = '\0';
//             return B2U(bits);
//     }
// }