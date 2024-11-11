#include <stdio.h>
#include <string.h>
void abc(void);
void square(int W, int L);

main(){
	//abc();
	//square(5,20);
	//(50,100);
	printf("enter Radius:");   scanf("%d", &r);
	printf("Circle %.3f\n", circle(r));
}

void abc(void){
	printf("hello world\n");
}

void square(int W, int L){
	int ANS = W*L;
		printf("ANSWER = %d\n", ANS);
}

float circle(int r){
	float c = 3.14*r*r;
	return c;
}