#include <stdio.h>
int main()
{
    printf("Pick your Choice : \n\n1. Pizza,Rs239\n2. Burger,Rs129\n3. Pasta,Rs179\n4. FrenchFries,Rs99\n5. Sandwich,Rs149\n\n Enter your choice : ");
    
    int choice=0;
    
    scanf("%d",&choice);
    
    switch (choice) {
        case 1:
            printf("\nYou picked Pizza.\n Rs239\n\n");
            break;
        case 2:
            printf("\nYou picked Burger.\n Rs 129\n\n");
            break;
        case 3:
            printf("\nYou picked Pasta.\n Rs179\n\n");
            break;
        case 4:
            printf("\nYou picked French Fries.\n Rs99\n\n");
            break;
        case 5:
            printf("\nYou picked sandwich.\n Rs149\n\n");
            break;
        default:
            printf("\nInvalid choice\n\n");
            break;
    }
}
   
