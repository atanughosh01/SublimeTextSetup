#include <stdio.h>
#include <stdlib.h>

int func(int n)
{
    if(n <= 1)
        return 0;
    else
        return n/2 + func(n-2) - 1;
}

int main()
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
	    int B;
	    scanf("%d", &B);
        printf("%d\n", func(B));
	}
	return 0;
}
