NAME = libft.a

CC  = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard *.c)

OBJS = $(patsubst %.c, %.o, $(SRCS))

OBJS_PREFIXED = $(addprefix $(OBJS_DIR)/, $(OBJS))

HEADER_DIR = .

OBJS_DIR = objs

all : $(NAME)

$(NAME) : objs
	ar rcs $(NAME) $(OBJS_PREFIXED)

%.o : %.c
	mkdir -p $(OBJS_DIR)
	$(CC) $(CFLAGS) -c -I$(HEADER_DIR)/ $< -o $(OBJS_DIR)/$@

objs : $(OBJS)

clean :
	rm -rf $(OBJS_DIR)

fclean : clean
	rm -f $(NAME)

re : fclean all
