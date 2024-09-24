#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size)
	{
		while ((i < size - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (ft_strlen(src));
}
/*
#include <stdio.h>
#include <bsd/string.h> 
int main() {
    
	char a[140] = "salam labas" ;
	char b[140] = "hanya bekher" ;
	int c;
	c = strlcpy(a,b,0);
	printf("%s and c = %d \n",a,c);
	char aa[140] = "salam labas" ;
	char bb[140] = "hanya bekher" ;
 	c = ft_strlcpy(aa,bb,0);
	printf("%s and c = %d  \n",aa,c);
	char aaa[140] = "salam labas" ;
	char bbb[140] = "hanya bekher" ;
 	c = fft_strlcpy(aaa,bbb,0);
	printf("%s and c = %d \n",aaa,c);
    return 0;
}*/