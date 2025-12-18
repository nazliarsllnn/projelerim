#include <stdio.h>
#include <stdlib.h>

//Kullanicinin girdigi sayiya gore 60a kadar giden ve 24 oluyorsa 24ü almayan üçer üçer artan program...

int main(int argc, char *argv[]) {

    int sayi;
    
    printf("Sayiyi girin= ");
    scanf(" %d",&sayi);
    
    while(sayi<=60)
    {
    	if(sayi!=24)
    	{
			printf(" %d\n",sayi);
		}
    	sayi+=3;
	}




	return 0;
}
