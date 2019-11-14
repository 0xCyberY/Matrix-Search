#include <stdio.h>
void main()
{
int arr[5][5],i,j,m,n,element,columnp,rowp,flag=1;
printf("Enter the dimensions (row,column) : \n");
scanf("%d %d",&m,&n);
printf("Enter the elements for the matrix :\n");
for(i=0;i<m;i++)
{
   for(j=0;j<n;j++)
   {
	scanf("%d",&arr[i][j]);
   }
}
printf("\n\n Matrix elements \n\n");
for(i=0;i<m;i++)
{
   for(j=0;j<n;j++)
   {
	printf("| %d |",arr[i][j]);
   }
   printf("\n");
}
printf("Enter the element to search: \n");
scanf("%d",&element);
for(i=0;i<m;i++)
{
   for(j=0;j<n;j++)
   {
	if(arr[i][j]==element)
	{
	   rowp=i+1;
	   columnp=j+1;
	   flag=0;
	   break;
	}
   }
}
if(flag==0)
{
printf("Element %d found at row %d and column %d\n",element,rowp,columnp);
}
else
{
printf("Element not found \n");
}
}
