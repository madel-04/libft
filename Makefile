# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/17 18:46:52 by marvin            #+#    #+#              #
#    Updated: 2024/09/17 18:46:52 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c\
			(...)

OBJS	= $(SRCS%.c=%.o)
#Para generar los archivos objetos de una lista fuente SRCS

FLAGS = -Wall -Werror -Wextra

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I./ 
#Para compilar con las flags en el directorio actual, la I (Include directory) busca archivos de cabecera
#en el directorio indicado. Los archivos fuentes .c con la cabecera propia (libft.h), si el .h está en el
#directorio actual, se necesita el flag para que el compilador realice su función
#Fuerza a buscar en mi directorio sobre los del sistema si hubiera coincidencias
	ar rc $(NAME) $(OBJS)
# ar para crear, modificar o extraer contenidos de archivos de librerias estáticas | r de replace por si es necesario | c create si aun no existe

all: $(NAME)
#Define el target/objetivo y especifica que depende de NAME
#Si el archivo no existe o no está actualizado se ejecutan las reglas para obtenerlo

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
#Ejecuta primero el clean para eliminar los archivos objetos y luego la libreria .a

re: fclean all
#Aegurarse de que se construya desde un estado limpio
#eliminando cualquier problema o residuo de compilaciones anteriores