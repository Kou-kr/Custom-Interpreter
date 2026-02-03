#include <stdio.h>
int main() 
{
    printf("ts is working i guess\n");
int array[5]  = {1, 2, 3, 4, 5};
for(int i = 1; i<=5; i++) 
{for (int j = 0; j < 5; j++) 
 {
 if(array[j]>array[i])
    {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}
for (size_t i = 0; i < 5; i++)
{
    printf("%d ", array[i]);
}

}
}  