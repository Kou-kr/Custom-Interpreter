#include <stdio.h>
int main() 
{
int array[30]  = {42, 7, 89, 13, 56, 3, 77, 24, 91, 18,
 64, 29, 5, 83, 47, 10, 71, 36, 2, 58,
 95, 21, 69, 14, 80, 33, 6, 52, 27, 88};
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