#include <stdio.h>
int main() 
{
    // Open file for writing
FILE*fp;    
fp = fopen("output.txt", "w+");

if (fp == NULL) 
{
    printf("Error opening file!\n");
    return 1;
}

// Bubble Sort Algorithm
const int array_size=30;
int array[array_size];

// Input numbers from user
printf("Enter %d numbers to sort: \n", array_size);

for(int i = 0; i < array_size; i++)
{
    printf("Number %d: ", i+1);
    if(scanf("%d", &array[i]) != 1)
    {
        printf("please enter a valid integer.\n");
        i--;
    }
}

// Sorting the array
for(int i = 1; i < array_size ; i++) 
{for (int j = 0; j < array_size ; j++) 
 {  
 if(array[j]>array[i])
    {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}
}

// Output sorted array
for (int i=0; i < array_size; i++)
{
    printf("%d ", array[i]);
    fprintf (fp, "%d\n", array[i]);

}
fclose(fp);

return 0;
}           
