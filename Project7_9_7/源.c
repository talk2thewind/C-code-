#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int n = 10;
//	for (int i = 1; i < n; i*=2)
//	{
//		printf("wtf\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (;;)
//	{
//		if (i >= 10)
//			break;
//		printf("faq\n");
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0, i = 10;
//	while (n <= i)
//	{
//		printf("faq\n");
//		n+=1;
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	do {
//		printf("n=%d\n", n);
//		n++;
//
//	} while (n < 10);
//
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	do {
//		if(n == 6)
//			continue;
//		printf("n=%d\n", n);
//		n++;
//
//	} while (n <= 12);
//	return 0;
//}
//int main()
//{
//    for (int i = 1; i <= 10; i++)
//    {
//        if (i == 6)
//            continue;
//        printf("%d\n", i);
//    }
//    return 0;
//}
int main()
{
	int n = 1;
	do {
		n++;
		if (n == 6)
			continue;
		printf("n=%d\n", n);
		
		
	} while (n <= 10);
	return 0;
}