/*Suppose that you are given a list of integers stored in consecutive memory locations(arrays). Perform the following operations. (Note : Use pointers)
a.	Create an array of N Integer Elements by allocating memory dynamically
b.	Display of array Elements with Suitable Headings
c.	Insert an Element (ELEM) at a given valid Position (POS)
d.	Delete an Element at a given valid Position (POS)
e.	Search an element in the array  */


#include<stdio.h>
#include<stdlib.h>
main()
	{
	int *arr;
	int n, i,choice,pos,x,key,found=0;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	/* Dynamic memory allocation */
	arr=(int *)malloc(n*sizeof(int));
tttttttttttt
	printf("Enter the elements");
	
	for(i=0;i<n;i++)
		scanf("%d",(arr+i));
	printf("The elements of the array are :\n");
  	for(i=0;i<n;i++)
	{
		printf("*(arr+%d)=%d\n",i,*(arr+i));
	}	
	while(1)
	{
 		printf("1-> INSERT  2-> DELETE   3-> SEARCH    4->EXIT\n");
		printf("Give your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1: //  Insert an element
			printf("Enter the element to be inserted:");
			scanf("%d",&x);
			printf("Enter the position to be inserted:");
			scanf("%d",&pos);
   			n++;
			for (i=n-1; i>=pos; i--)
      			     *(arr+i) = *(arr+i-1);
			// Insert at pos
 			*(arr+pos - 1) = x;
 
   			 // print the updated array
  			  printf("The elements of the array are :\n");
  			for(i=0;i<n;i++)
			{
				printf("*(arr+%d)=%d\n",i,*(arr+i));
			}
			break;

		case 2: // Delete an element
			printf("Enter the position of the element to be deleted:");
			scanf("%d",&pos);
			for (i=pos; i<=n-1; i++)
      			     *(arr+i-1) = *(arr+i);
			n--; 
   			 // print the updated array
  			  printf("The elements of the array are :\n");
  			for(i=0;i<n;i++)
			{
				printf("*(arr+%d)=%d\n",i,*(arr+i));
			}
			break;
		case 3: // Search an element
			found=0;
			printf("Enter the  element to be searched:");
			scanf("%d",&key);
			for (i=0; i<=n; i++)
      			     if(*(arr+i)==key)
				{
				found=1;
				printf("\n Search key %d is found at position %d",i+1);
				}
			if(found==0)
				printf("Search key %d is not found",key);
			break;
		case 4: exit(1);
		}/* switch*/
	}/*while*/
}/*main()*/