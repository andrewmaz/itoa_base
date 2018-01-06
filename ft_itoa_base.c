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
	char			*res;
	int				size;
	int				tmp;
	unsigned int	uin;

	if (base == 10)
		res = ft_itoa(value);
	else
	{
		uin = (unsigned int)value;
		size = ft_intlen(uin, base);
		res = ft_strnew(size);
		while (size > 0)
		{
			tmp = uin%base;
			if (tmp > 9)
				res[--size] = uin%base + 55;
			else
				res[--size] = uin%base + '0';
			uin = uin/base;
		}
	}
	return (res);
}

int main (void)
{
	printf("!my %o\n", 1234341);

	printf(" my %s\n", ft_itoa_base(15, 16));
	return (0);
}