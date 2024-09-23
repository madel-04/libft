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

NAME	= libft.a

SRCS	= ft_atoi.c\
			ft_bzero.c\
			ft_calloc.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_itoa.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c \
			ft_putchar_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_putstr_fd.c\
			ft_split.c\
			ft_strchr.c\
			ft_strdup.c\
			ft_strjoin.c\
			ft_strlcat.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_strmapi.c\
			ft_striteri.c\
			ft_strncmp.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_strtrim.c\
			ft_substr.c\
			ft_tolower.c\
			ft_toupper.c

BNS_SRCS	= ft_lstadd_back_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstclear_bonus.c\
			ft_lstdelone_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstnew_bonus.c\
			ft_lstsize_bonus.c

OBJS	= $(SRCS:%.c=%.o)
#Para generar los archivos objetos de una lista fuente SRCS

BNS_OBJS	= $(BNS_SRCS:%.c=%.o)

FLAGS = -Wall -Werror -Wextra #"-g3 -fsanitize=address" #Cuando compilas te dice si hay un leak de memoria

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I ./ 
#Para compilar con las flags en el directorio actual, la I (Include directory) busca archivos de cabecera
#en el directorio indicado. Los archivos fuentes .c con la cabecera propia (libft.h), si el .h está en el
#directorio actual, se necesita el flag para que el compilador realice su función
#Fuerza a buscar en mi directorio sobre los del sistema si hubiera coincidencias
	ar rc $(NAME) $(OBJS)
# ar para crear, modificar o extraer contenidos de archivos de librerias estáticas | r de replace por si es necesario | c create si aun no existe

bonus : $(NAME)
	gcc $(FLAGS) -c $(BNS_SRCS) -I ./
	ar rc $(NAME) $(BNS_OBJS)

all: $(NAME)
#Define el target/objetivo y especifica que depende de NAME
#Si el archivo no existe o no está actualizado se ejecutan las reglas para obtenerlo

clean:
	rm -f $(OBJS) $(BNS_OBJS)

fclean: clean
	rm -f $(NAME)
#Ejecuta primero el clean para eliminar los archivos objetos y luego la libreria .a

re: fclean all
#re for rebuilt
#Aegurarse de que se construya desde un estado limpio
#eliminando cualquier problema o residuo de compilaciones anteriores


#==========COLOURS=============================================================#

# Basic Colors

BLACK       = \033[0;30m
RED         = \033[0;31m
GREEN       = \033[0;32m
YELLOW      = \033[0;33m
BLUE        = \033[0;34m
MAGENTA     = \033[0;35m
CYAN        = \033[0;36m
WHITE       = \033[0;37m

# Bright Colors

BOLD_BLACK  = \033[1;30m
BOLD_RED    = \033[1;31m
BOLD_GREEN  = \033[1;32m
BOLD_YELLOW = \033[1;33m
BOLD_BLUE   = \033[1;34m
BOLD_MAGENTA= \033[1;35m
BOLD_CYAN   = \033[1;36m
BOLD_WHITE  = \033[1;37m

# Extended Colors (256 colors)
ORANGE      = \033[38;5;208m
WINE        = \033[38;5;88m
LIME        = \033[38;5;190m
TURQUOISE   = \033[38;5;38m
LIGHT_PINK  = \033[38;5;13m
DARK_GRAY   = \033[38;5;235m
LIGHT_RED   = \033[38;5;203m
LIGHT_BLUE  = \033[38;5;75m


# Reseteo de color
NO_COLOR    = \033[0m
DEF_COLOR   = \033[0;39m
CLEAR_LINE  = \033[2K
MOVE_UP     = \033[1A

#==========NAMES===============================================================#

NAME		:= libft.a
BONUS		:= .bonus

#==========COMMANDS============================================================#

CC			:= gcc
CFLAGS		:= -Wall -Wextra -Werror -g3
RM			:= rm -rf
AR			:= ar rcs
LIB			:= ranlib
MKDIR 		:= mkdir -p


##==========DIRECTORIES=======================================================#

INCLUDES := .
SRC_DIR := .
OBJ_DIR := obj/

#==========SOURCES============================================================#


IS_FILES	:= ft_isalpha ft_isalnum ft_isascii ft_isdigit ft_isprint

MEM_FILES	:= ft_bzero ft_calloc ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset\
			   
PUT_FILES	:= ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd

TO_FILES	:= ft_atoi ft_itoa ft_tolower ft_toupper

STR_FILES	:= ft_split ft_strchr ft_strdup ft_striteri ft_strjoin ft_strlcat ft_strlcpy ft_strlen ft_strmapi ft_strncmp \
			ft_strnstr ft_strrchr ft_strtrim ft_substr

LST_FILES	:= ft_lstnew_bonus ft_lstadd_front_bonus ft_lstsize_bonus ft_lstlast_bonus ft_lstadd_back_bonus \
		  	ft_lstdelone_bonus ft_lstclear_bonus

#==========FILES###===========================================================#

SRC_FILES+=$(IS_FILES)
SRC_FILES+=$(MEM_FILES)
SRC_FILES+=$(PUT_FILES)
SRC_FILES+=$(TO_FILES)
SRC_FILES+=$(STR_FILES)

SRC_BONUS_FILES+=$(LST_FILES)

SRCS := $(addsuffix .c, $(SRC_FILES))
OBJS := $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))
OBJS_BONUS := $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_BONUS_FILES)))
DEPS := $(addprefix $(OBJ_DIR), $(addsuffix .d, $(SRC_FILES)))

#==========RULES==============================================================#

all: $(NAME)

$(OBJ_DIR)%.o: %.c Makefile
	@mkdir -p $(dir $@)
	@printf "%b" "$(BOLD_CYAN)[LIBFT]:\t$(DEF_COLOR)$(BOLD_GREEN)$<$(DEF_COLOR)\r"
	@$(CC) $(CFLAGS) -I$(INCLUDES) -MMD -MP -c $< -o $@
	@printf "%b" "$(BOLD_BLUE)$(DEF_COLOR)\r"

$(NAME) : $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@printf "%b" "$(BOLD_BLUE)$(DEF_COLOR)"
	@printf "%b" "$(CLEAR_LINE)$(BOLD_CYAN)Compilation complete!$(DEF_COLOR)\n"

clean: 
	@$(RM) -rf $(OBJ_DIR) a.out
	@printf "%b" "$(BLUE)[LIBFT]:\tobject files$(DEF_COLOR)$(GREEN)  => Cleaned!$(DEF_COLOR)\n"

$(BONUS): $(OBJS) $(OBJS_BONUS)
	@$(AR) $(NAME) $(OBJS) $(OBJS_BONUS)
	@printf "%b" "$(BOLD_BLUE)$(DEF_COLOR)"
	@printf "%b" "$(CLEAR_LINE)$(BOLD_CYAN)Compilation complete!$(DEF_COLOR)\n"
	@touch $(BONUS)

bonus: $(BONUS)

fclean: clean
	@$(RM) $(NAME)
	@printf "%b" "$(CYAN)[LIBFT]:\texec. files$(DEF_COLOR)$(GREEN)  => Cleaned!$(DEF_COLOR)\n"

re: fclean all

norm:
	@norminette $(SRC) $(INCLUDE) | grep -v Norme -B1 || true

-include $(DEPS)

.PHONY: all clean fclean re norm