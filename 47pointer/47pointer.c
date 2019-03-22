#include<stdio.h>
/*
%x是16进制输出.
%8x是输出8位
%#x是带格式输出, 效果为在输出前加0x.
所以 这里就是以16进制输出y值,并在前面加0x前缀, 如果输出小于8位,那么实际输出8位,左侧补空格.
比如 y=0x20那么会输出
y= 0x20
如果y=0x12345678
那么会输出
y=0x12345678
*/

int main() 
{
	char a = 'V'; short b = 2; int c = 10; double d = 123.45;

	printf("&a = %p	",&a); printf("%#x\n", &a);
	printf("&b = %p	",&b); printf("%#x\n", &b);
	printf("&c = %p	",&c); printf("%#x\n", &c);
	printf("&d = %p	",&d); printf("%#x\n", &d);

	printf("%c\n", *(&a));
	printf("%d\n", *(&b));
	printf("%d\n", *(&c));
	printf("%f\n", *(&d));

	
	
}