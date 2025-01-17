
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "ft_printf-42/ft_printf.h"

typedef struct s_node {
    int value;
    struct s_node *next;
} b_node;

typedef struct s_stack {
    b_node *top;
    int size;
} b_stack;


#endif