#include <stdio.h>
int main() 
{
int array[30];
printf("Enter 30 numbers to sort: \n");
for(int h = 0; h < 30; h++)
{
    printf("Number %d: ", h+1);
    scanf("%d", &array[h]);
}
 int sizeofarray = sizeof(array)/sizeof(array[0]);
for(int i = 1; i < sizeofarray ; i++) 
{for (int j = 0; j < sizeofarray ; j++) 
 {
 if(array[j]>array[i])
    {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}
}
for (int k=0; k < sizeofarray; k++)
{
    printf("%d ", array[k]);
}
return 0;
}           
