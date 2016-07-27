
NAME =	colleen grace sully
CC =	clang
FLAGS =	-Werror -Wextra -Wall

all:
	$(CC) $(FLAGS) -o colleen Colleen/Colleen.c
	$(CC) $(FLAGS) -o grace Grace/Grace.c
	$(CC) $(FLAGS) -o sully Sully/Sully.c

clean:
	@echo "No obj file"

fclean: clean
	-/bin/rm -f $(NAME)

re: fclean all
