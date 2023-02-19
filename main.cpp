#include <stdio.h>

main()
{
	int n;
	printf("Enter the number of items: ");
	scanf("%i",&n);
	int a[n];
	for(int i=0; i<n; i++)
	{
		printf("\nEnter item number %i: ", i+1);
		scanf("%i",&a[i]);
	}
	
	int min=a[0];
    int max=a[0];
    float sum=0;
    
    for (int i=0; i<n; i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
        if (a[i] > max)
        {
            max=a[i];
        }
        sum=sum+a[i];
    }
    
    float mid=sum/(float)n;
    printf("Max=%i\n", max);
	printf("Min=%i\n", min);
	printf("Sum=%f\n", sum);
	printf("Mid=%f", mid);
}
