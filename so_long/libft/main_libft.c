#include<stdio.h>
#include <string.h>
#include<stdlib.h>
#include<ctype.h>
#include"ft_isalpha.c"
#include"ft_isdigit.c"
#include"ft_isalnum.c"
#include"ft_isascii.c"
#include"ft_isprint.c"
#include"ft_memset.c"
#include"ft_memcpy.c"
#include"ft_atoi.c"
#include<limits.h>

int main()
{
	// for(int i = 0; i <= 255; i++)
	// 	printf("i = %d\nis: %d\nft: %d\n", i, isalnum(i), ft_isalnum(i));
	
	// for(int i = 0; i <= 255; i++)
	// 	printf("i = %d\nis: %d\nft: %d\n", i, isalnum(i), ft_isalnum(i));

	// for(int i = 0; i <= 255; i++)
	// 	printf("i = %d\nis: %d\nft: %d\n", i, isprint(i), ft_isprint(i));
	
	// char *dst = NULL;
	// char *src = NULL;
	// printf("%p ", memcpy(dst, src, 1));
	// printf("%p", ft_memcpy(dst, src, 1));
	char *str = "  -9223372036854775807";
	printf("%ld %ld\n", LONG_MAX, LONG_MIN);
	printf("atoi: %d\nft_atoi: %d\n", atoi(str), ft_atoi(str));
}