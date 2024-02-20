/* 
	 Viet chuong trinh  khoi tao mang 
	gom n phan tu kieu int (voi n duoc nhap tu ban phim), 
	voi dieu kien 0 < n <= 16 , 
	neu n khong thoa dieu kien thi yeu cau nhap lai n cho den khi n thoa dieu kien

	1/ Thuc hien nhap gia tri cho tung phan tu tu ban phim
	2/ Sau do in ra terminal cho tung phan tu da nhap
	3/ Sau do in ra terminal dia chi cua tung phan tu tron mang do
*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
int main()
{
	uint8_t n ;
	int* Arr;
	//Nhap so luong phan tu
type:
	printf("Nhap so luong phan tu n (5 < n <= 16) :  ");
	
	scanf("%d",&n);

	if (n > 5 && n <= 16)
	{

	}
	
	else 
	{
		printf("Error : ngoai khoang gia tri cho phep (5 < n <=16)\n");
		goto type;
	}
	//Khai bao mang  
	Arr = (int*)malloc(n * sizeof(int) );
	
	if (Arr == NULL)
	{
		printf("Error : Khai bao mang khong thanh cong ");
	}
	else
	{
		printf("Khai bao mang thanh cong ! \n");
		printf("Hay cap nhat cac phan tu trong mang cua ban : \n");

		for(int count = 0 ; count < n ; count ++)
		{
			printf("Arr[%d] = " , count);
			scanf("%d",&Arr[count]);
		}
	}

	//In mang da nhap 
	

	printf ("Cap nhat gia tri cua mang thanh cong ! \n");
	printf ("Arr[] = {  ");

	for (int count = 0 ;count < n; count ++)
	{
		printf(" %d ", Arr[count]);

	}
	printf ("} \n");

	//In dia chi cua mang da nhap 
	
	printf ("Dia chi cua tung phan tu cua mang : \n");
	
	for (int count = 0 ; count < n ; count ++)
	{
		printf("Adress_Arr[%d] = %p \n", count , &Arr[count]);
	}


	//Tinh gia tri trung binh
	
	int Sum = 0;
	float Avr_val;
	for (int count = 0 ; count < n ; count ++)
	{
		Sum = Sum + Arr[count] ;
		Avr_val = (float)Sum / n;

	}
	printf("Gia tri trung binh cua mang la : %.3f", Avr_val);
	return 0;
}
