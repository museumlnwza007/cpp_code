#include <stdio.h>

struct MenuItem {
    int id;
    char name[20];
    double price;
};

void displayMenu(struct MenuItem menu[], int size) {
	printf("Farang Tamsang\n");
    printf("\n\n\n----------MENU----------\n");
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
    
    displayMenu(menu, 4);

    do {
        printf("\n\n\n\nPlease make your selection from the menu:\n");
        printf("Enter the number of the food you want to order (1,2,3,4): ");
        scanf("%d", &choice);
 if (choice <= 0 || choice >4 ){
            printf("\n\n\norder error , sorry we don't have that menu here.\n");
            printf("Enter the number of the food you want to order (1,2,3,4): ");
        scanf("%d", &choice);
        if (choice <= 0 || choice >4 ){
            printf("\n\n\nAre you kidding me?\n\n");
            printf("Enter the number of the food you want to order (1,2,3,4): ");
        scanf("%d", &choice);
        if (choice <= 0 || choice >4 ){
            printf("\n\n\nPlease Get Out");
            return 0;
        }
        }   
        }
        printf("quantity: ");
        scanf("%d", &quantity);
        totalPrice += calculatePrice(choice, quantity, menu);
        printf("Would you like to order more? (y to continue): ");
        scanf(" %c", &moreItems);

    } while (moreItems == 'y' || moreItems == 'Y');

    double vatAmount = applyVAT(totalPrice);
    double totalWithVAT = totalPrice + vatAmount;

    printf("\n---- Order Price ----\n");
    printf("Pre-Vat Price: $%.2f\n", totalPrice);
    printf("VAT (7%%): $%.2f\n", vatAmount);
    printf("Total price: $%.2f\n", totalWithVAT);

    return 0;
}