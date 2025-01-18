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
int check_if_numbers(char **args_split)
{
    char *args;
    while (*args_split)
    {
        args = *args_split;
        while (*args)
        {
            if (ft_isdigit(*args))
                args++;
            else if ((*args == '+' || *args == '-') && ft_isdigit(*(args+1)))
                args++;
            else
                return (ft_putstr_fd("Error\n", 2), 0);
        }
        args_split++;
    }
    return 0;
}
char *joined_argv(char **argv)
{
    char *str;
    char *string;
    (1) && (string = NULL, str = NULL);
    argv++;
    while (*argv)
    {
        str = ft_strjoin(*argv, " ");
        string = ft_strjoin(string, str);
        argv++;
    }
    char **args_str = ft_split(string, ' ');
    // for testing split arguments string into array of strings
    // while (*args_str)
    // {
    //     ft_printf("%s\n", *args_str);
    //     args_str++;
    // }
    check_if_numbers(args_str);
    return (string);
}

int main(int argc, char **argv){
    (void)argc;
    (void)argv;
    if (argc > 1)
    {
        joined_argv(argv);
    }
    return 0;
}