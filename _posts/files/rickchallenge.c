#include <stdio.h>

void defuse(int value1,int value2)
{
    unsigned int result = value1*value2;
    if(result==4294965959)
        printf("U FOUND MY MEGIC NAMBARR!\n");
        
    printf("My flag is : V:HB{M41_m3g1c_n4mb4r_%d(%d*%d)}",result,value1,value2);
}
int main()
{
    int value1 = 0;
    int value2 = 0;
    printf("Choose 2-digit number: ");
    scanf("%2d",&value1);
    printf("Choose 3-digit number: ");
    scanf("%3d",&value2);
    defuse(value1,value2);
}
