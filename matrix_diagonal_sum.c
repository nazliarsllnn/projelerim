#include <stdio.h>
#include <stdlib.h>

//Sayilari girilen 3*3 matrisin kösegen uzerindeki elemanlarını toplayan program...

int main(int argc, char *argv[]) {

    int dizi[3][3];
    int i,j,top=0;
    
    printf("Lutfen Sayilari Girin\n");
    
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("Dizi[%d][%d] --> ",i,j);
    		scanf("%d",&dizi[i][j]);
		}
	}

    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		if(i==j)
    		{
    			top+=dizi[i][i];
			}
		}
	}
	printf("\n");
	printf("Kosegen Elemanlari-->%d,%d,%d",dizi[0][0],dizi[1][1],dizi[2][2]);
    printf("\n");
	printf("Toplam= %d",top);
    
	return 0;
}
