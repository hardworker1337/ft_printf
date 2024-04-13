#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	//printf("%d\n", printf("<%p>\n", 0));
	printf("%d\n", printf("(null)", (char)0));
	ft_printf("%d\n", ft_printf("(null)", (char)0));

	return (0);
}
