#include <stdio.h>

int main() {
    int languageChoice, serviceChoice;

    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");
    printf("Enter your choice: ");
    scanf("%d", &languageChoice);

    switch(languageChoice) {
        case 1:
            printf("\nPress 1 for Internet Recharge\n");
            printf("Press 2 for Top-up Recharge\n");
            printf("Press 3 for Special Recharge\n");
            printf("Enter your choice: ");
            scanf("%d", &serviceChoice);

            switch(serviceChoice) {
                case 1:
                    printf("\nYou have successfully done an Internet Recharge.\n");
                    break;
                case 2:
                    printf("\nYou have successfully done a Top-up Recharge.\n");
                    break;
                case 3:
                    printf("\nYou have successfully done a Special Recharge.\n");
                    break;
                default:
                    printf("\nInvalid choice for services.\n");
            }
            break;

        case 2: 
            printf("\nInternet Recharge ke liye 1 dabayein\n");
            printf("Top-up Recharge ke liye 2 dabayein\n");
            printf("Special Recharge ke liye 3 dabayein\n");
            printf("Apna pasand ka number dabhayein: ");
            scanf("%d", &serviceChoice);

            switch(serviceChoice) {
                case 1:
                    printf("\nAapne Internet Recharge safalta purvak kiya hai.\n");
                    break;
                case 2:
                    printf("\nAapne Top-up Recharge safalta purvak kiya hai.\n");
                    break;
                case 3:
                    printf("\nAapne Special Recharge safalta purvak kiya hai.\n");
                    break;
                default:
                    printf("\nSeva ke liye galat chayan.\n");
            }
            break;

        case 3: 
            printf("\nInternet Recharge mate 1 dabavo\n");
            printf("Top-up Recharge mate 2 dabavo\n");
            printf("Special Recharge mate 3 dabavo\n");
            printf("Enter your choice: ");
            scanf("%d", &serviceChoice);

            switch(serviceChoice) {
                case 1:
                    printf("\nTame Internet Recharge safaltapoorvak karyu che.\n");
                    break;
                case 2:
                    printf("\nTame Top-up Recharge safaltapoorvak karyu che.\n");
                    break;
                case 3:
                    printf("\nTame Special Recharge safaltapoorvak karyu che.\n");
                    break;
                default:
                    printf("\nSeva mate khoto chayan.\n");
            }
            break;

        default:
            printf("\nInvalid choice for language.\n");
    }


}

