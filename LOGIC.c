#include <stdio.h>

int main()
{

    int platTickets;
    int goldTickets;
    int redTickets;
    int greenTickets;
    int finalTickets;
    double subTotal;
    double hst;
    double servFee;
    double total;
    int payMethod;

    char name[125];
    char numberSixteen[125];
    char date[125];
    char security[125];

    printf("\n        LOGIC Concert Ticket Sale\n");

    printf("\nSECTION                             PRICE\n");
    printf("Platinum                           150.00\n");
    printf("Gold                               120.50\n");
    printf("Red                                 80.75\n");
    printf("Green                               50.25\n");

    printf("-----------------------------------------\n");

    printf("Enter number of platinum tickets : ");
    scanf("%d", &platTickets);
    printf("Enter number of gold tickets : ");
    scanf("%d", &goldTickets);
    printf("Enter number of red tickets : ");
    scanf("%d", &redTickets);
    printf("Enter number of green tickets : ");
    scanf("%d", &greenTickets);

    printf("-----------------------------------------\n");

    finalTickets = platTickets + goldTickets + redTickets + greenTickets;
    subTotal = (150.00 * platTickets) + (120.50 * goldTickets) + (80.75 * redTickets) + (50.25 * greenTickets);
    hst = 0.13 * subTotal;
    servFee = 12.5 * finalTickets;
    total = subTotal + hst + servFee;

    printf("SUBTOTAL:        %23.2lf\n", subTotal);
    printf("HST:             %23.2lf\n", hst);
    printf("SERVICE FEES:    %23.2lf\n", servFee);
    printf("TOTAL:           %23.2lf\n", total);
    printf("-----------------------------------------\n");

    printf("How will you be paying?\n\n");

    printf("1 - VISA\n");
    printf("2 - MasterCard\n");
    printf("3 - American Express\n");

    printf("\nEnter your payment method: ");
    scanf("%d", &payMethod);

    if (payMethod == 1 || payMethod == 3) {

        printf("Enter your name: ");
        scanf("%s", name);
        printf("Enter the 16-Digit Number: ");
        scanf("%s", numberSixteen);
        printf("Enter the expiry date (dd/mm/yyyy): ");
        scanf("%s", date);

    } else {

        printf("Enter your name: ");
        scanf("%s", name);
        printf("Enter the 16-Digit Number: ");
        scanf("%s", numberSixteen);
        printf("Enter the expiry date (dd/mm/yyyy): ");
        scanf("%s", date);
        printf("Enter 4 Security Digits: ");
        scanf("%s", security);

    }

        printf("Thank you %s, your order has been processed!\n", name);

    return 0;
}