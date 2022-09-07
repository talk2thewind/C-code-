#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>;
//int main()
//{
//	int input = 0;
//	printf("choose 0 or 1");
//
//	scanf("%d, &input");
//
//	if (input == 1)
//
//		printf("youdied\n");
//	
//	else
//	
//		printf("faq\n");
//	
//	
//	return 0;
//int main()
//{
//	int num = 0;
//	printf("choose 0 or 1 ");
//scanf("%d", &num);
//if (num == 1)
//printf("you died");
//else
//printf("fa q ");
//	return 0;
//}
//int main()
//{
//	int score = 0;
//	printf("please write down your score");
//	scanf("%d", &score);
//	if(score<0)
//	{
//		printf("error!");
//	}
//	else if (score<60)
//	{
//		printf("not enough!");
//	}
//	else if (score <80)
//	{
//		printf("nice dude !");
//	}
//	else if (score <=100)
//	{
//		printf("pefect performance!");
//	}
//	else if (score >100)
//	{
//		printf("r u kidding ?");
//	}
//	return 0;
//}'
//int main()
//{
//	int a = 0, b = 0, max = 0;
//	printf("请输入两个数字：");
//	scanf("%d\n%d", &a ,& b);
//	max = a > b ? a : b;
//	printf("the bigger number is %d", max);
//
//		return 0;
//}
int main()
{
	int num = 0;
	printf("please devote 1to 5");
	scanf("%d", &num);

	switch(num)
	{
	case  1:
		printf("you choose one");
		break;
	case 2:
		printf("you choose two");
		break;
	case 3:
		printf("you choose three");
		break;
	case 4:
		printf("you choose four ");
		break;
	case 5:
		printf("youchoose five");
		break;
		
		
	}
	return 0;
}