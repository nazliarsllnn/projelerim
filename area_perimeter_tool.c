#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

    int uzunkenar,kisakenar,cevre,alan;
    
    printf("Sayilari Girin\n");
	printf("*****************\n");
	printf("Uzun kenari girin: ");
    scanf(" %d", &uzunkenar);
    
    printf("Kisa kenari girin: ");
    scanf(" %d", &kisakenar);
    
    cevre = uzunkenar*2 + kisakenar*2;
    alan = uzunkenar*kisakenar;
    
    printf("\n");
    
    printf("------SONUC------\n");
    printf("Dikdortgenin cevresi: %d\n", cevre);
    printf("Dikdortgenin alani: %d\n", alan);
    
	return 0;
}
