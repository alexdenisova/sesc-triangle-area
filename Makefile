run: area
	./area

area: area.c
	gcc -Wall -std=c11 area.c -o area

build: area
