NAME = push_swap.a
CC = cc -Wall -Wextra -Werror
AR = ar -rc
RM = rm -rf
HEADER = push_swap.h

PRINTF = ft_printf-42
FT = libft-42

SOURCES = \
	push_swap.c \
	$(PRINTF)/ft_printf.c \
	$(PRINTF)/ft_printf_utils.c \
	$(FT)/ft_strjoin.c \
	$(FT)/ft_strlen.c \
	$(FT)/ft_strdup.c \
	$(FT)/ft_split.c \
	$(FT)/ft_substr.c \
	$(FT)/ft_putstr_fd.c \
	$(FT)/ft_isdigit.c\

OBJECTS=$(SOURCES:.c=.o)
# BOBJECTS=$(BSOURCES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(AR) $(NAME) $^

%.o : %.c $(HEADER)
	$(CC) -c $< -o $@

clean:
	$(RM) $(OBJECTS) 
#$(BOBJECTS)

fclean: clean
	$(RM) $(NAME)

re: all clean 
.PHONY: clean