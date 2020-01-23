#include<conio.h>
#include<stdio.h>
void main()
{
	int a[100],b[100],c[100],i,j,k=0,pos,in=0,item,size;
	printf("enter the size of a array: ");
	scanf("%d",&size);
	printf("enter the %d element :",size);
	for(i=0;i<size;++i)
	{
	    scanf("%d",&a[i]);
    }
    printf("enter the number to delete :");
    scanf("%d",&item);
    for(i=0;i<size;++i)
    {    
       while(a[i]==item)
       {
	    
		  j=i;
    		while(i<size)
    		{
			   
    		  a[i]=a[i+1];
    		  ++i;
    	     }
    	     i=j;
    	     ++in;
    	     

     }  
		
	}
	printf("after deletion operation:\n");
      for(i=0;i<size-in;++i)
	  printf("%d\n",a[i]); 
}
	
	
