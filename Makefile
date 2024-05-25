NAME = libft.a
SOURCES = \
	ft_isalpha.c ft_isdigit.c  ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c  ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c  
	
BSOURCES = \
	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c ft_lstclear_bouns.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJECTS = $(SOURCES:.c=.o)
BOBJECTS = $(BSOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror





all: progress_bar $(NAME) 

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

bonus: $(OBJECTS) $(BOBJECTS) 
	$(AR) -r $(NAME) $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean: progress_bar_clean
	rm -f $(OBJECTS) $(BOBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re

progress_bar:
	@printf  "["
	@for i in $$(seq 1 50); do \
		sleep 0.1; \
		printf  "\033[0;32m█"; \
	done
	@printf  "\033[0m]"
	@echo  ""

progress_bar_clean:
	@printf  "["
	@for i in $$(seq 1 50); do \
		sleep 0.1; \
		 printf "\033[0;91m█"; \
	done
	@printf "\033[0m]"
	@echo  ""

