#include "ft_printf.h"
#include <stdio.h>
//#include<fcntl.h>
int main()
{
//fclose(stdout);
//int c = ft_printf("hello man");
//fprintf(stderr,"%d",c);
int x;
int	xf;

x = ft_printf("%\n");
xf = printf("%\n");
printf("%d\n", x);
printf("%d\n", xf);

}