#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
enum sex {
	male=5,
	female,
	dog=9,
};
int main()
{
	/*const int num = 100;
	num = 200;*/


//#define _MAX 100;
//	int m = _MAX;
//
//
//	printf("num = %d", m);
//
//	return 0;

	enum sex s = male;
	printf("%d\n", male); 
	printf("%d\n", female); 
	printf("%d\n", dog); 
}