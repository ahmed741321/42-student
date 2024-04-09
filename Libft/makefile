NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
       ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c \
       ft_strrchr.c ft_strlen.c ft_strncmp.c ft_memset.c \
       ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c \
       ft_memcmp.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c \
       ft_atoi.c ft_calloc.c ft_strdup.c
OBJS = $(SRCS:.c=.o)

all: $(NAME) progress_bar

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

progress_bar:
	@echo -n "["
	@for i in $$(seq 1 50); do \
		sleep 0.1; \
		echo -n "\033[0;32m█"; \
	done
	@echo -n "\033[0m]"
	@echo  ""

progress_bar_clean:
	@echo -n "["
	@for i in $$(seq 1 50); do \
		sleep 0.1; \
		echo -n "\033[0;91m█"; \
	done
	@echo -n "\033[0m]"
	@echo  ""



clean: progress_bar_clean
	@rm -f $(OBJS)

fclean: clean 
	@rm -f $(NAME)
       
re: fclean all

.PHONY: all clean fclean re progress_bar
