CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = server \
	   client
	   
SERVER_SRCS = server.c
CLIENT_SRCS = client.c
		

SERVER_OBJS = server.o
CLIENT_OBJS = client.o
		


LIB_DIR = ./ft_printf
LIB_NAME = libftprintf
LIB = $(LIB_DIR)/$(LIB_NAME).a


all: $(NAME)
	
$(LIB):
	make -C $(LIB_DIR)

server: $(SERVER_OBJS) $(LIB)
	$(CC) $(CFLAGS) -o $@ $^

client: $(CLIENT_OBJS) $(LIB)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(SERVER_OBJS)
	rm -f $(CLIENT_OBJS)
	make -C $(LIB_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIB_DIR) fclean

re: fclean all

.PHONY: fclean all clean re