#include <stdio.h>
#include "ft_printf-42/ft_printf.h"
#include "libft-42/libft.h"
#include "push_swap.h"

b_stack *intialise_stack()
{
    b_stack *stack = malloc(sizeof(b_stack));
    stack->top = NULL;
    stack->size = 0;
    return stack;
}
int check_argv(char *argv)
{
    // int i = 0;
    while (argv)
    {
        if (*argv == '+' || *argv == '-')
        {
            argv++;
        }
        while (*argv < 0 || *argv > 9)
        {
            ft_printf("%s\n", *argv);
            return (0);
        }
        *argv;
    }
    int nb = ft_atoi(argv);
    if (nb < -2147483648 || nb > 2147483647)
        return (0);
    return (nb);
}

int main(int argc, char **argv){
    int i = 1;
    while (i < argc)
    {
        // ft_printf("%s\n", argv[i]);
        check_argv(argv[i]);
        // ft_printf("%s\n", argv[i]);
        i++;    
    }
    return 0;
}