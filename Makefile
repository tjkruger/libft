
SRCSLIBFT = ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memset.c \
			ft_strlen.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \

BONUSSRCS = ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \


SRC		= $(SRCSLIBFT)
BONUS	= $(SRCSLIBFT) $(BONUSSRCS)

OBJ		= $(addprefix $(OBJDIR)/, $(SRC:.c=.o))
BONUSOBJ = $(addprefix $(OBJDIR)/, $(BONUSSRCS:.c=.o))

OBJDIR	= obj
HEADER  = libft.h
NAME	= libft.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus: $(NAME) $(BONUSOBJ)
	ar -rcs $(NAME) $(BONUSOBJ)

$(OBJDIR)/%.o: %.c $(HEADER) | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@ -I .

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all