#include <stdio.h>
#include <string.h>

struct Student {
	char name[50];
	int age;
	float grade;
};

int main() {
	struct Student students[2]
	;
	
	strcpy(students[0].name, "museum");
	students[0].age = 19;
	students[0].grade = 3.90;
	
	strcpy(students[1].name, "farang");
	students[1].age = 5;
	students[1].grade = 4.01;
	
for (int i = 0; i <2; i++){
	printf("Student %d\n", i + 1);
	printf("Name: %s\n", students[i].name);
	printf("Age: %d\n", students[i].age);
	printf("Grade: %.2f\n", students[i].grade);
	printf("\n");
}
	return 0;
}