EXEC = ejecutable

SRC = main_OMP_Sanchez.c operaciones.c

HEADERS = operaciones.h

CC = gcc
CFLAGS = -fopenmp -Wall -Wextra

all: $(EXEC)

$(EXEC): $(SRC) $(HEADERS)
	$(CC) $(CFLAGS) -o $(EXEC) $(SRC)

clean:
	rm -f $(EXEC)
