#include<stdio.h>
void print( const char* str)
{
	printf("%s", str);
}
void test(void (*p)(const char*))
{
	printf("ĞÂÄê¿ìÀÖ\n");
	p("zzt");
}
int main()
{
	test(print);
}