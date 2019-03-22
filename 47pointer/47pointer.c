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
//对变量取地址，取出的地址，就是一个指针，且常量指针。
//常量指针，不是一个单纯的地址 + 而是由类型的。
//指针的的本质是一个有类型的地址。类型决定了，从这个地址开始的寻址能力。
int main()
{
	int data = 0X12345678;
	
	printf("%p\n", &data);				//取出变量data的地址》0095F750并加上0X 变成0X0095F750.

	
	printf("%x\n", *(&data));			 //取出变量地址里面的值.
	printf("%x\n", *(char*)(&data));	
	printf("%x\n", *(short*)(&data));
	printf("%x\n", *(int*)(&data));


	//printf("%d\n", *(int*)0X0095F750);


}


int main1() 

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