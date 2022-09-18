#include <stdio.h>
#include <conio.h>
void main()
{
int a[10], i, n, search,flag=0;
printf("Enter the size of the array: ");
scanf_s("%d", &n);
printf("\nEnter the elements in the array\n");
for (i = 0; i < n; i++)
scanf_s("%d", &a[i]);
printf("Enter element to search: ");
scanf_s("%d", &search);
for (i = 0; i < n; i++)
{
if (search == a[i])
{
printf("\n\nElement found at location: %d\nElement found at Index: %d\n", i + 1, i);
flag = 1;
}
}
if (flag != 1)
printf("\nElement not found\n");
_getch();
}
