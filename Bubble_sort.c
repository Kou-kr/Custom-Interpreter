#include <stdio.h>
int main() 
{FILE*fp;
    fp = fopen("output.txt", "w+");
    // Bubble Sort Algorithm
int array[30];
printf("Enter 30 numbers to sort: \n");
for(int h = 0; h < 30; h++)
{
    printf("Number %d: ", h+1);
    if(scanf("%d", &array[h]) != 1)
    {
        printf("please enter a valid integer.\n");
        h--;
    }
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
    fprintf (fp, "%d\n", array[k]);
}
fclose(fp);
return 0;
}           
