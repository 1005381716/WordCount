﻿#include <stdio.h>
int main()
{
	int A = 0, B = 1;
	char c;
	while ((c = getchar()) != '\n') {
		if (c == ', ')
			B++;
		else if ((c >= 'a'&&c <= 'z') || (c >= 'A'&&c <= 'Z'))
			A++;
		else;
	}
	printf("单词数是:%d\n", B);
	printf("字符数是:%d\n", A);
	return 0;
}