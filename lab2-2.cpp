#include <stdio.h>

main(){
	int menu;
	printf("----------Food Menu----------\n");
	printf("1.pepsi \t 20 bath \n");
	printf("2.fanta \t 15 bath \n");
	printf("3.singcha \t 65 bath \n");
	printf("4.heinegen \t 75 bath \n");
	printf("5.Red Wine \t 200 bath \n");
	printf("---------------------------");
	printf("please select menu:  ");
	scanf("%d", &menu);
	switch (menu) {
		case 1:
			printf("pepsi\n");
			break;
		case 2:
			printf("fanta\n");
			break;
		case 3:
			printf("singcha\n");
			break;
		case 4:
			printf("heinegen\n");
			break;
		case 5:
			printf("Red Wine\n");
			break;
		default :
			printf("please enter the correct one");
			break;
		}
}