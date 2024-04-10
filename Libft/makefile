NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = src/ft_isalpha.c src/ft_isdigit.c src/ft_isalnum.c src/ft_isascii.c \
       src/ft_isprint.c src/ft_toupper.c src/ft_tolower.c src/ft_strchr.c \
       src/ft_strrchr.c src/ft_strlen.c src/ft_strncmp.c src/ft_memset.c \
       src/ft_bzero.c src/ft_memcpy.c src/ft_memmove.c src/ft_memchr.c \
       src/ft_memcmp.c src/ft_strnstr.c src/ft_strlcpy.c src/ft_strlcat.c \
       src/ft_atoi.c src/ft_calloc.c src/ft_strdup.c

OBJS = $(SRCS:.c=.o)

all: $(NAME) progress_bar

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@rm -f $(OBJS) 
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
