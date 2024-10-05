# Nombre de la biblioteca
NAME = libft.a

# Compilador y flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Lista de archivos .c (agrega todos los ft_*.c que necesites)
SRCS = ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_memset.c ft_strlen.c ft_bzero.c

# Objetos correspondientes a los archivos .c
OBJS = $(SRCS:.c=.o)

# Comando para crear la biblioteca estática
AR = ar -rcs

# Regla que genera la biblioteca (por defecto se ejecuta 'all')
all: $(NAME)

# Compilar los objetos y crear la biblioteca
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c Makefile
	$(CC) $(CFLAGS) -c -o $@ $<

#main:
#	$(CC) $(CFLAGS) main.c -L. -lft

# Regla para limpiar los archivos objeto
clean:
	rm -f $(OBJS)

# Regla para limpiar todo (objetos y la biblioteca)
fclean: clean
	rm -f $(NAME)

# Regla para recompilar todo (fclean + all)
re: fclean all

# Indicamos que no son archivos reales
.PHONY: all clean fclean re
