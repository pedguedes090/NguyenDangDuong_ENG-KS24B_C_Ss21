#include<stdio.h>
int main(){
	char a[100];
FILE *fptr, *dptr;
fptr = fopen("test.txt","r");
if(fptr == NULL){
printf("khong the mo dc file \n");
fclose(fptr);
return 1;	
}
dptr = fopen("Bai6.txt","w");
while(fgets(a,100,fptr)!=NULL){
	fputs(a,dptr);
}
fclose(fptr);
fclose(dptr);


return 0;

}

