#include <stdio.h>

main()
{
	//D��ardan girilen 3 say�n�n en b�y���n� bulan c program�
	
	int sayi1,sayi2,sayi3;
	printf("uc tane sayi giriniz:	");
	scanf("%d %d %d",&sayi1,&sayi2,&sayi3);
	
	if(sayi1>sayi2 && sayi1>sayi3)
	{
		printf("en buyuk sayi:	%d",sayi1);
		
	}
		
		else if(sayi2>sayi1 && sayi2>sayi3 )
		{
		printf("en buyuk sayi:	%d",sayi2);
		}
			
			else if (sayi3>sayi1 && sayi3>sayi2) 
			{
			printf("en buyuk sayi:	%d",sayi3);
			}
				else 
				printf("esit iki veya daha fazla sayi girdiniz");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
