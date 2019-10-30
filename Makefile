# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ihering- <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/01/19 17:44:26 by ihering-       #+#    #+#                 #
<<<<<<< HEAD
#    Updated: 2019/10/30 11:08:07 by ihering-      ########   odam.nl          #
=======
#    Updated: 2019/10/30 11:12:56 by ihering-      ########   odam.nl          #
>>>>>>> 25d9c1ce67af94f509b12f6f7952390a95bab98a
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_whitespaces ft_memset ft_bzero ft_memcpy ft_memccpy \
		ft_memmove ft_memchr ft_memcmp ft_memalloc ft_memdel \
		ft_memdup ft_strlen ft_strdup ft_strcpy ft_strncpy \
		ft_strcat ft_strncat ft_strlcat ft_strchr ft_strrchr \
		ft_strstr ft_strnstr ft_strcmp ft_strncmp ft_atoi \
		ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint \
		ft_toupper ft_tolower ft_strnew ft_strdel ft_strclr \
		ft_striter ft_striteri ft_strmap ft_strmapi ft_strequ \
		ft_strnequ ft_strsub ft_strjoin ft_strtrim ft_strsplit \
		ft_itoa ft_putchar ft_putstr ft_putendl ft_putnbr \
		ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd \
		ft_lstadd ft_lstdel ft_lstdelone ft_lstiter ft_lstmap \
		ft_lstnew ft_leng ft_swap ft_strarrdel get_next_line \
		ft_sqrt
<<<<<<< HEAD
=======

>>>>>>> 25d9c1ce67af94f509b12f6f7952390a95bab98a

OBJDIR = obj/
SRCDIR = srcs/
HEADER = include/
FLAGS = -Wall -Wextra -Werror -I $(HEADER)

SRC:=$(addprefix $(SRCDIR),$(addsuffix .c,$(FILES)))
OBJ:=$(addprefix $(OBJDIR),$(addsuffix .o,$(FILES)))

BLUE_1 = \033[38;5;123m
BLUE_2 = \033[38;5;159m
BLUE_3 = \033[38;5;195m
RED:="\033[1;31m"
RESET = \033[0m

CCHF:=.cache_exists

all: $(NAME)

$(NAME): $(OBJ)
		@echo "$(BLUE_1)Libft done $(RESET)"
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

$(OBJDIR)%.o: $(SRCDIR)%.c | $(CCHF)
	@echo ".\c"
	@clang $(FLAGS) -I $(HEADER) -c $< -o $@

%.c:
	@echo $(RED) "Missing file : $@"

$(CCHF):
	@mkdir $(OBJDIR)
	@touch $(CCHF)

clean:
		@rm -rf $(OBJDIR)
		@rm -f $(CCHF)

fclean: clean
		@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re