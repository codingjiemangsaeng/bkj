#include <stdio.h>
int cmp(int x, int y)
{
	return (x < y ? x : y);
}

int main (void)
{
	int x;
	scanf("%d",&x);
	int nb [1000000] = {0,1,1,};
	int i = 3;
	while(x > 3 && i < x){
		nb[i] = nb[i - 1] + 1;
		if(!((i + 1) % 3))
			nb[i] = cmp(nb[i],nb[i/3] + 1);
		if (!((i + 1) % 2))
			nb[i] = cmp(nb[i],nb[i/2] + 1);
		i++;
	}
	printf("%d",nb[x - 1]);
}