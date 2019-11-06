#include <stdio.h>
//数组最大
int max(int a[10])
{
	int c;
	int i;
	for(i=0;i<10;i++)
		if (a[i] < a[i + 1])
		{
			c = a[i];
			a[i] = a[i + 1];
			a[i + 1] = c;
			return a[i];
		}
}
int main()
{
	int a[10];
	int i, j;
	//输入一个十位整型数组
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	j = max(a);
	printf("%d", j);

	

	

}