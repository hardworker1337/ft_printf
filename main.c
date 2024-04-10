#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	//printf("%d\n", printf("<%p>\n", 0));
	printf("%d\n", printf("%w%5d%w%.4s%%", 78, "hello"));
	ft_printf("%d\n", ft_printf("%w%5d%w%.4s%%", 78, "hello"));
	return (0);
}
