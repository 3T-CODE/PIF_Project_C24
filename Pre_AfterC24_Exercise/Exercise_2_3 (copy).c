/*
 Cau 2 O cau 1 , dua vao dia chi duoc in ra , 
 nhan xet mot phan tu cua mang co dung luong bao nhieu byte ? 
 Lan luot dinh nghia lai mang voi kieu du lieu sau : 
 uint8_t , uint16_t  , uint32_t , uint64_t (phai include them thu vien stdint.h) 
 va nhan xet dung luong cua tung phan tu sau khi dinh nghia lai.
 */
#include <stdio.h>
#include <stdint.h>

int main()
{
	short n ;
	uint32_t Arr[n];
type:
	printf("Type n (with 0 < n <= 16 ): ");

	scanf("%d",&n);

	//Check n value 
	if ( 0 < n && n <= 16 )
	{
		printf("Type the value each element \n");
		for (int count = 0 ; count < n ; count ++)
		{
			printf("Arr[%d] = ", count);
			scanf("%d",&Arr[count]);
		}
	}else
	{
		printf(" Erorr: Not within the given range (0 < n <= 16) , Type n again ! \n");
		goto type; //Go type again 
		
	}

	printf("arr [] = { ");
	for (int count = 0 ; count < n ; count ++)
	{
		printf("%d ",Arr[count]);
	}
	printf("} \n");
	
	printf("Adress of Array elements : \n");
	for (int count = 0 ; count < n ; count ++)
	{
		printf("%p \n",&Arr[count]);
	}


}
