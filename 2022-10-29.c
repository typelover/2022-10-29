#pragma warning(disable:4996)
# include <stdio.h>
#define NUM 10

int main()
{
	int sum = 0;
	int mark[NUM];
	for (int i = 0; i < 10; i++)
	{
		printf("�������%iλͬѧ�ĳɼ���",i+1);
		scanf("%d", &mark[i]);
		sum += mark[i];
	}
	printf("��ʮλͬѧ��ƽ���ɼ�Ϊ%.2f", (double)sum / NUM);


	return 0;
}

//int main()
//{
//	int a = 0;
//	int mark[10];
//	while ((a = getchar()) != EOF)
//	{
//		scanf("%d", &mark);
//	}
//	for (int x = 0; x < 10; x++)
//	{
//		printf("%d\n", mark[x]);
//	}
//	
//
//	return 0;
//}
//
//
////int main()
////{
//	int a[10];
//	for (int i = 0; i < 10; i++)
//	{
//		a[i] = i;
//	}
//	for (int x = 0; x < 10; x++)
//	{
//		printf("%d\n", a[x]);
//	}
//	return 0;
//}