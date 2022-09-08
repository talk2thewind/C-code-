#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z
//	;
//}
//
//
//
//int main()
//{
//	int num1 = 0, num2 = 0, sum = 0;
//	scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;
//	sum = add(num1, num2);
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	char fu[] = { 'a' };//可以不写元素个数
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0, };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%c\n", fu[0]);
//			i++;
//	}
//	
//	return 0;
//}
//int main()
//{
//	printf("please enter 10 numbers!\n");
//	int x[10];
//	int max=0 , min=0 ,i = 0;
//	
//	for (i=0;i<10;i++)
//	{
//		printf("%d\t", i + 1);
//		scanf("%d", &x[i]);
//	}
//	max = min = x[0];
//	for (int i = 0; i < 10; i++)
//	{
//		if (x[i] > max)
//		{
//			 max = x[i];
//		}
//		else if (x[i] < min)
//		{
//			 min = x[i];
//		}
//	}
//	printf("max=%d,min=%d", max, min);
//	return 0;
//}
///*示例1*/
///*#include <stdio.h>
//#define SIZE 10
//main()
//{
//    int x[SIZE], i, max, min;
//    printf("Enter 10 integers:\n");
//    for (i = 0; i < SIZE; i++)
//    {
//        printf("%d:", i + 1);
//        scanf("%d", &x[i]);
//    }
//    max = min = x[0];
//    for (i = 1; i < SIZE; i++)
//    {
//        if (max < x[i])  max = x[i];
//        if (min > x[i])  min = x[i];
//    }
//    printf("Maximum value is %d\n", max);
//    printf("Minimum value is %d\n", min);*/
// 
//int main()斐波那契数列前二十项
//
//    {
//    int f[22] = { 1,1 };
//    int i = 0;
//   
//    for (i = 0; i < 20; i++)
//    {
//        f[i + 2] = f[i] + f[i + 1];
//        printf("%d\n", f[i]);
//    }
//    return 0;
//    }

/*示例2*/
//#include <stdio.h>
//main()
//{
//    int i;
//    int f[20] = { 1,1 };
//    for (i = 2; i < 20; i++)
//        f[i] = f[i - 2] + f[i - 1];
//    for (i = 0; i < 20; i++)
//    {
//        if (i % 5== 0)  printf("\n");
//        printf("%5d", f[i]);
//    }
//}
//冒泡法排顺序
//int main()
//{
//	int x[10], i = 0,j,o,t;
//	for (i = 0; i < 10; i++)
//	{
//		printf("enter number%d:\n",i+1);
//		scanf("%d", &x[i]);
//	}
//	for (j = 0; j < 9; j++)
//	{
//		for (o = 0; o < 9; o++)
//			if (x[o] < x[o + 1])t = x[o], x[o] = x[o + 1],x[o + 1] = t ;
//	}
//	for (o = 0; o < 10; o++)
//		printf("%d\n", x[o]);
//
//	return 0;
//}
/*示例3*/
//#include <stdio.h>
//main()
//{
//    int a[11], i, j, t;
//    printf("Input 10 numbers:\n");
//    for (i = 1; i < 11; i++)
//        scanf("%d", &a[i]);
//    printf("\n");
//    for (j = 1; j <= 9; j++)
//        for (i = 1; i <= 10 - j; i++)
//            if (a[i] > a[i + 1])
//            {
//                t = a[i]; a[i] = a[i + 1]; a[i + 1] = t;
//            }
//    printf("The sorted numbers:\n");
//    for (i = 1; i < 11; i++)
//        printf("%d ", a[i]);
//}
 /*示例4*/
//#include <stdio.h>  
////m/*ain()
//{
//    int a[11], i, j, k, x;
//    printf("Input 10 numbers:\n");
//    for (i = 1; i < 11; i++)
//        scanf("%d", &a[i]);
//    printf("\n");
//    for (i = 1; i < 10; i++)
//    {
//        k = i;
//        for (j = i + 1; j <= 10; j++)
//            if (a[j] < a[k])  k = j;
//        if (i!=k)
//        {
//            x = a[i]; a[i] = a[k]; a[k] = x;
//        }
//    }
//    printf("The sorted numbers:\n");
//    for (i = 1; i < 11; i++)
//        printf("%d ", a[i]);
//}*/
int main()
{

	return 0;
}

