#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	float a;
	float b;
	
	printf("���ڸ� �Է��ϼ��� :");
	scanf("%f", &a);
	
	printf("�и� �Է��ϼ��� :");
	scanf("%f", &b);
	
	printf("�������� ����� %f\n �Դϴ�.", a/b);
	 
	system("PAUSE");
	return 0;
}
