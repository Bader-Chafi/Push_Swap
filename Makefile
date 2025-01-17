NAME = push_swap.a
CC = cc -Wall -Wextra -Werror
AR = ar -rc
RM = rm -rf
HEADER = push_swap.h

PRINTF = ft_printf-42
LIBFT = libft-42

SOURCES = \
	push_swap.c \
	$(PRINTF)/ft_printf.c $(PRINTF)/ft_printf_utils.c \
	$(LIBFT)/ft_atoi.c \

# BSOURCES = 
# 	push_swap

OBJECTS=$(SOURCES:.c=.o)
BOBJECTS=$(BSOURCES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(AR) $(NAME) $^

%.o : %.c $(HEADER)
	$(CC) -c $< -o $@

clean:
	$(RM) $(OBJECTS) $(BOBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
.PHONY: clean