// SWITCHED LOOP 

#include<stdio.h>
main()
{
	int f,b,a;
	printf("enter choice number");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			{
			
			int n,i,fact=1;
			printf("enter number");
			scanf("%d",&n);
			for(i=1;i<=n;i++)
				fact*=i;	
			printf("factorial no.%d",fact);
			break;
		}
			
	    	case 2:
	    		{
				
			int f,b;
			printf("Enter a&b");
			scanf("%d %d",&f,&b);
			f>b?printf("f is greater"):printf("b is greater");
			break;
		}
	}
}


