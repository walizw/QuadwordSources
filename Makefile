CC=gcc
ECHO=echo -e

FLAGS=-Wall -Werror -Werror -std=gnu99 -O0 -g

FILES=c/1_first_program.out c/2_input.out c/4_format_specifiers.out

all: $(FILES)

c/1_first_program.out: c/1_first_program.c
	@$(ECHO) "CC\t\t"$<
	@$(CC) $(FLAGS) $< -o $@

c/2_input.out: c/2_input.c
	@$(ECHO) "CC\t\t"$<
	@$(CC) $(FLAGS) $< -o $@

c/4_format_specifiers.out: c/4_format_specifiers.c
	@$(ECHO) "CC\t\t"$<
	@$(CC) $(FLAGS) $< -o $@

clean:
	@rm -f $(FILES)
