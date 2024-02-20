/*
 * Su dung lai cau 1 voi dieu kien n >5 , 
 * tim phan tu lon nhan va be nhat tron mang va in ra terminal
 * */


#include <stdio.h>
#include <stdint.h>


int main()
{
	int n ;
type:
	printf("Type n (with 5 < n <= 16 ): ");

	scanf("%d",&n);

	//Check n value 
	if ( 5 < n && n <= 16 )
	{ 
	}else
	{
		printf(" Erorr: Not within the given range (5 < n <= 16) , Type n again ! \n");

		goto type; //Go type again 
		
	}

		int Arr[n];
		printf("Type the value each element \n ");
		for ( int count = 0; count < n ; count ++)
		{
			printf("Arr[%d] = ", count);
			scanf("%d",&Arr[count]);
		}

	// Print elements of array 
	printf("arr [] = { ");
	
	for ( uint8_t count = 0; count < n ; count ++)
	{
		printf("%d ",Arr[count]);
	}
	
	printf("} \n");
	
	printf("Adress of Array elements : \n");

	for (int count = 0; count < n ; count ++)
	{
		printf("%p \n",&Arr[count]);
	}
	// Find max min inside array 
	
	int max , min = Arr[0];
	for(int count =0 ;count < n; count ++)
	{
		
		if (Arr[count] >= max) 
			max = Arr[count];
		else if (Arr[count] <= min)
			min = Arr[count];

	}

	printf("max is : %d and min is : %d \n", max , min);
	return 0;

}

