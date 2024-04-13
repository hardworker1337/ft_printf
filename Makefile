# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bnafia <bnafia@student.42madrid.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/20 18:30:25 by bnafia            #+#    #+#              #
#    Updated: 2024/04/10 22:03:30 by bnafia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= 	libftprintf.a



SRCDIR			= Mandatory/Sources
SRCLIBFT		= libft/*.c 
SRCS1			= $(wildcard $(SRCDIR)/*.c)
SRCS2			= $(wildcard $(SRCLIBFT))

SRCS			= $(SRCS1) $(SRCS2)

CC				= 	gcc
RM				= 	rm -f
CFLAGS			= 	  -g -Wall -Wextra -Werror 

OBJS			= $(SRCS:.c=.o)
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@


#BONUS_INCLUDES		= bonus/Includes
BONUS_SRCDIR		=		bonus/Sources
BONUS_SRC1		= $(wildcard $(BONUS_SRCDIR)/*.c)
BONUS_SRCS		= $(BONUS_SRC1) $(SRCS2)
BONUS_OBJS 		= $(BONUS_SRCS:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			 $(BONUS_OBJS)
				ar rcs $(NAME) $(BONUS_OBJS)	
.PHONY:			all clean fclean re bonus
