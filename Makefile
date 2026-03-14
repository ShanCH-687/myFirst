TAR = main
CC :=gcc
OBJ = main.o math_utils.o
$(TAR): $(OBJ)
	$(CC) $^ -o $@
%.o : %.c
	$(CC) -c $^ -o $@
.PHONY: clean
clean:
rm -f $(TAR) $(OBJ)
