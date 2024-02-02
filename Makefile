CFLAGS=--std=c99 -Wall -Wextra -g -fsanitize=address # -Werror
TARGETS=hello_world data_types arithmetic control_flow functions strings segfault segfault_hard malloc printf structs pointers

all: $(TARGETS)

clean:
	rm -rf $(TARGETS) *.dSYM

hello_world: hello_world.c
	gcc $(CFLAGS) $< -o $@

data_types: data_types.c
	gcc $(CFLAGS) $< -o $@

arithmetic: arithmetic.c
	gcc $(CFLAGS) $< -o $@

control_flow: control_flow.c
	gcc $(CFLAGS) $< -o $@

functions: functions.c
	gcc $(CFLAGS) $< -o $@

strings: strings.c
	gcc $(CFLAGS) $< -o $@

segfault: segfault.c
	gcc $(CFLAGS) $< -o $@

segfault_hard: segfault_hard.c
	gcc $(CFLAGS) $< -o $@

malloc: malloc.c
	gcc $(CFLAGS) $< -o $@

printf: printf.c
	gcc $(CFLAGS) $< -o $@

structs: structs.c
	gcc $(CFLAGS) $< -o $@

pointers: pointers.c
	gcc $(CFLAGS) $< -o $@
