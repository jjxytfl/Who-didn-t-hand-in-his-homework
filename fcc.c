/*#include<string.h>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>


#define M 4
#define N 3

void Shuru(int a[],int n)
{
	int i;
	int x;
	printf("�밴��С�����˳������%d����:\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &x);
		a[i] = x;
	}
}

void Shuchu(int *a,int k)
{
	int i;
	for (i = 0; i < k; i++)
	{
		printf("%d  ", *(a + i));
	}
	printf("\n");
}

void Zhongweishu(int *a, int k)
{
	int x;
	if (!k % 2){
		x = (a[k / 2] + a[k / 2 - 1]) / 2;
	}
	else{
		x = a[k / 2];
	}
	printf("��λ��Ϊ%d\n", x);
}


int main()            
{
	int m[M];
	int n[N];
	int *c=NULL;
	int i, j, k;
	i = 0; j = 0; k = 0;
	
	Shuru(m, M);
	Shuru(n, N);
	while (1)
	{
		if (m[i] < n[j]){
			c = (int *)realloc(c,sizeof(int)*(k + 1));
			c[k++] = m[i++];
			if (i >= M)break;
		}
		if (m[i] == n[j]){
			c = (int *)realloc(c, sizeof(int)*(k + 1));
			c[k++] = m[i++];
			j++;
			if (i >= M||j>=N)break;
		}
		if (m[i] > n[j]){
			c = (int *)realloc(c, sizeof(int)*(k + 1));
			c[k++] = n[j++];
			if (j >= N)break;
		}
	}
	if (i >= M&&j<N){
		while (j < N)
		{
			c = (int *)realloc(c, sizeof(int)*(k + 1));
			c[k++] = n[j++];
		}
	}
	if (j >= N&&i<M){
		while (i < M)
		{
			c = (int *)realloc(c, sizeof(int)*(k + 1));
			c[k++] = m[i++];
		}
	}
	printf("%d\n", sizeof(c));
	Shuchu(c,k);
	Zhongweishu(c, k);

	free(c);
	system("pause");
}



*/