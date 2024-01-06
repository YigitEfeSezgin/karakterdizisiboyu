#include <stdio.h>
#include <stdlib.h>
#define max 50
int main()
{
    char dizi[max];
    int i=0;
    char *pointer;

    printf("bir karakter dizisi giriniz\n");
    gets(dizi);
    for(pointer=dizi;*pointer;pointer++)
    {

    }
    printf("Dizimiz %s %d karakterden olusmaktadir.",dizi,pointer-dizi);





    return 0;
}
