#include <stdio.h>
#include <string.h>

struct Student {
	char name[50];
	int age;
	float grade;
};

main(){
	FILE *file=fopen("C:\\User\\museum\\DOwnloads\\student.yxt", "w");
	if(file == NULL) {
		printf("Could not open file.");
	}

	struct Student students[7];
	for	(int i = 0; i <7; i++)	{
		printf("student number:%d", i +	1);
		printf("\nPlease enter students name: ");
		scanf("%s", &students[i].name);
		printf("Please enter students age: ");
		scanf("%d", &students[i].age);
		printf("please enter student grade: ");
		scanf("%f", &students[i].grade);
		printf("\n");
	
}
for (int i = 0; i <7; i++){
	printf("Student %d\n", i + 1);
	printf("Name: %s\n", students[i].name);
	printf("Age: %d\n", students[i].age);
	printf("Grade: %.2f\n", students[i].grade);
	printf("\n");
}
	return 0;
}