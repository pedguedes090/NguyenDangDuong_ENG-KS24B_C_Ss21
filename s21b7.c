#include<stdio.h>
typedef struct {
	char id[20];
	char name[100];
	char age[20];
}Student;
int main(){
	int a;
	char b[100];	
	Student student[100];	
	printf("Moi ban nhap so hoc sinh : ");
	scanf("%d",&a);
	FILE *fptr;
	fptr = fopen("Student.txt","w");
	for(int i =0;i<a;i++){
		printf("Moi ban nhap thong tin sinh vien thu %d \n",i+1);
		fflush(stdin);
		printf("id : ");
		fgets( student[i].id,100,stdin);
	   student[i].id[strcspn(student[i].id, "\n")] = '\0';
		printf("name : ");
		fgets( student[i].name,100,stdin);	
	   student[i].name[strcspn(student[i].name, "\n")] = '\0';
		printf("age : ");
		fgets( student[i].age,100,stdin);
		   student[i].age[strcspn(student[i].age, "\n")] = '\0';
		fprintf(fptr, "%s %s %s\n", student[i].id, student[i].name, student[i].age);		
	}
	fclose(fptr);
return 0;
}
