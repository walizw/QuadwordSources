CC=gcc
ECHO=echo -e

FLAGS=-Wall -Werror -std=gnu99 -O0 -g

FILES=C/beginners/1_first_program.out C/beginners/2_input.out

all: $(FILES)

C/beginners/1_first_program.out: C/beginners/1_first_program.c
	@$(ECHO) "CC\t\t"$<
	@$(CC) $(FLAGS) $< -o $@

C/beginners/2_input.out: C/beginners/2_input.c
	@$(ECHO) "CC\t\t"$<
	@$(CC) $(FLAGS) $< -o $@

clean:
	@rm -f $(FILES)
