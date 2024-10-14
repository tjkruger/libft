
SRCSLIBFT = ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memset.c \
			ft_strlen.c \

SRC		= $(SRCSLIBFT)
OBJ		= $(addprefix $(OBJDIR)/, $(SRC:.c=.o))
OBJDIR	= obj

HEADER = libft.h

NAME	= libft.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

$(OBJDIR)/%.o: %.c $(HEADER) | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@ -I .

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all