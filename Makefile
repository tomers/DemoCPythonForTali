all: run

clean:
	rm ./main ./defs.json ./generated.json

main: main.c

defs.json: main
	./main

generated.json: defs.json
	./app.py

run: generated.json
