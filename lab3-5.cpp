#include <stdio.h>

main(){
	int smain , smid , sfinal , sjitpisai;
	printf("enter your score. (50)\n");
	scanf("%d" , &smain);
	printf("enter your midterm score. (20)\n");
	scanf("%d" , &smid);
	printf("enter your final score. (20)\n");
	scanf("%d" , &sfinal);
	printf("enter your behavior score. (10)\n");
	scanf("%d" , &sjitpisai);
}
	
	
	int calculate(int smain, int smid, int sfinal, int sjitpisai) {
		return(smain + smid + sfinal + sjitpisai);
}
	
	
}
