# include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);
	int fact = 1;
	
	for( ; n>1 ; n--){
		fact *= n;
	}

	printf("%d!=%d\n", n,fact);

	return 0;
}
