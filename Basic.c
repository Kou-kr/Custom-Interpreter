#include <stdio.h>
int main() 
{
int array[30];
printf("Enter 10 numbers to sort: \n");
for(int i = 0; i < 10; i++)
{
    scanf("%d", &array[i]);
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
