#include <stdio.h>

struct MenuItem {
    int id;
    char name[20];
    double price;
};

void displayMenu(struct MenuItem menu[], int size) {
    printf("Menu:\n");
    for (int i = 0; i < size; i++) {
        printf("%d. %s - %.2f THB\n", menu[i].id, menu[i].name, menu[i].price);
    }
}

double calculatePrice(int choice, int quantity, struct MenuItem menu[]) {
    return menu[choice - 1].price * quantity;
}

double applyVAT(double price) {
    const double VAT = 0.07;
    return price * VAT;
}

int main() {
    struct MenuItem menu[] = {
        {1, "Cola", 20},
        {2, "Burger", 55},
        {3, "Pizza", 99},
        {4, "Steak", 150}
		
		
    };
    int choice, quantity;
    double totalPrice = 0;
    char moreItems;
    
    displayMenu(menu, 3);

    do {
        printf("\nPlease make your selection from the menu:\n");
        printf("Enter the number of the food you want to order (1,2,3): ");
        scanf("%d", &choice);
        printf("quantity: ");
        scanf("%d", &quantity);
        totalPrice += calculatePrice(choice, quantity, menu);
        printf("Would you like to order more? (y/n): ");
        scanf(" %c", &moreItems);

    } while (moreItems == 'y' || moreItems == 'Y');

    double vatAmount = applyVAT(totalPrice);
    double totalWithVAT = totalPrice + vatAmount;

    printf("\n---- Order Summary ----\n");
    printf("VAT (7%%): $%.2f\n", vatAmount);
    printf("Total price: $%.2f\n", totalWithVAT);

    return 0;
}