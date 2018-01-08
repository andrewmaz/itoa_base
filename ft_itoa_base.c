#include "./libft/libft.h"
#include <stdio.h>

int		ft_intlen(unsigned int in, int base)
{
	int i;

	i = 0;
	while(in)
	{
		in = in/base;
		i++;
	}
	return (i);
}

char	*ft_itoa_base(int value, int base)
{
	unsigned int uin;
	int tmp;
	int size;
	char *res;

	size = (base == 10 && value < 0) ? 1 : 0;
	uin = size > 0 ? -value : (unsigned int)value;
	size += ft_intlen(uin, base);
	res = ft_strnew(size);
	while (size > 0)
	{
		tmp = uin%base;
		if (tmp > 9)
			res[--size] = tmp + 87;
		else
			res[--size] = tmp + '0';
		uin = uin/base;
	}
	res[0] = (base == 10 && value < 0) ? '-' : res[0];
	return (res);
}

int main (void)
{
	printf("printf %x\n", -25);

	printf("    my %s\n", ft_itoa_base(-25, 16));
	return (0);
}