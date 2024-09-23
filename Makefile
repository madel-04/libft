# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: madel-va <madel-va@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/23 16:19:57 by madel-va          #+#    #+#              #
#    Updated: 2024/09/23 16:19:57 by madel-va         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_tolower.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_putchar_fd.c \
	ft_putnbr_fd.c \
	ft_strjoin.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_substr.c \
	ft_itoa.c \
	ft_split.c \
	ft_strrchr.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_atoi.c \
	ft_strchr.c \
	ft_strtrim.c

OBJ =	$(SRC:%.c=%.o)
#Para generar los archivos objetos de una lista fuente SRCS


INCLUDE =	libft.h

SRCBONUS =	ft_lstnew_bonus.c \
			 ft_lstadd_front_bonus.c \
			 ft_lstsize_bonus.c \
			 ft_lstlast_bonus.c \
			 ft_lstadd_back_bonus.c \
			 ft_lstdelone_bonus.c \
			 ft_lstclear_bonus.c \

OBJBONUS =	$(SRCBONUS:%.c=%.o)

all:	$(NAME)
#Define el target/objetivo y especifica que depende de NAME
#Si el archivo no existe o no está actualizado se ejecutan las reglas para obtenerlo

$(NAME): 	$(OBJ) $(INCLUDE)
		$(LIB) $(NAME) $(OBJ)

# gcc $(FLAGS) -c $(SRCS) -I ./ 
#Para compilar con las flags en el directorio actual, la I (Include directory) busca archivos de cabecera
#en el directorio indicado. Los archivos fuentes .c con la cabecera propia (libft.h), si el .h está en el
#directorio actual, se necesita el flag para que el compilador realice su función
#Fuerza a buscar en mi directorio sobre los del sistema si hubiera coincidencias

bonus: 	$(OBJ) $(OBJBONUS) $(INCLUDE)
		$(LIB) $(NAME) $(OBJBONUS) $(OBJ)


%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@
#El archivo .o depende del respectivo .c y la cabecera includeç
#la -c $< se refiere a la primera dependencia de la regla, siendo .c en este caso
# -o $@ indica el nombre del archivo de salida y el $@ se refiere al nombre del objetivo de la regla (.o)

.PHONY: clean fclean re
#Objetivos declarados ficticios para que se ejecuten siempre que se invoquen sin importar
#que haya archivos con los mismos nombres.

clean:
	$(RM) $(OBJ) $(OBJBONUS)

fclean: clean
	$(RM) $(NAME)
#Ejecuta primero el clean para eliminar los archivos objetos y luego la libreria .a y
# y vuelve a compilar los archivos generales 

re: fclean all
#re for rebuilt
#Aegurarse de que se construya desde un estado limpio
#eliminando cualquier problema o residuo de compilaciones anteriores

rebonus: fclean bonus