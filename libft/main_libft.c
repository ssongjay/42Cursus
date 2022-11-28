#include<stdio.h>
#include <string.h>
#include<ctype.h>
#include"ft_isalpha.c"
#include"ft_isdigit.c"
#include"ft_isalnum.c"
#include"ft_isascii.c"
#include"ft_isprint.c"
#include"ft_memset.c"
#include"ft_memcpy.c"

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

	size_t i = 10;

	while(i)
		printf("%ld", i--);
}