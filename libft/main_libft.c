#include<stdio.h>
#include <string.h>
#include<ctype.h>
#include"ft_isalpha.c"
#include"ft_isdigit.c"
#include"ft_isalnum.c"
#include"ft_isascii.c"
#include"ft_isprint.c"

int main()
{
	// for(int i = 0; i <= 255; i++)
	// 	printf("i = %d\nis: %d\nft: %d\n", i, isalnum(i), ft_isalnum(i));
	
	// for(int i = 0; i <= 255; i++)
	// 	printf("i = %d\nis: %d\nft: %d\n", i, isalnum(i), ft_isalnum(i));

	for(int i = 0; i <= 255; i++)
		printf("i = %d\nis: %d\nft: %d\n", i, isprint(i), ft_isprint(i));
}