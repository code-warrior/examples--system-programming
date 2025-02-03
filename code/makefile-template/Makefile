CC=gcc
FLAGS=-Wall -g
FILENAME=hello-world.c
OUTPUT_FILE=a.out

all: build run

build:
	$(CC) $(FLAGS) $(FILENAME) -o $(OUTPUT_FILE)

run:
	$(OUTPUT_FILE)

clean:
	rm -fr $(OUTPUT_FILE) $(OUTPUT_FILE).dSYM *~
