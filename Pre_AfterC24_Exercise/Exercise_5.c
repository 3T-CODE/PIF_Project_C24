#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
struct  
{
	char name[32] ;
	char  mssv[8] ;
	uint8_t course_c;
}infor ;


void infor_input()
{
	/*Nhap ten*/
	printf("Name input : ");
	scanf("%s", &infor.name);
	
	
	/*Nhap mssv*/
	printf("Mssv input : ");
	scanf("%s", &infor.mssv);
	
	
	/*Nhap khoa c*/
	printf("Course C : ");
	scanf("%d",&infor.course_c);

}

void infor_print(struct infor *stu_infor)
{
	/* In ten */
	printf("info name : "); 
	printf("%s \n" , infor.name);
	
	/* In mssv */
	printf("info mssv : ");
	printf("%s \n", infor.mssv);

	/* In khoa c */
	printf("info course_c : %d ", infor.course_c);
}

int main()
{
	
infor_input();
infor_print((void*)&infor);
return 0;
}



