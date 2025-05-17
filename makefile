COMPILER = gcc

SRC = src/main.c src/editor.c

BUILD = build/torch

$(BUILD):$(SRC)
	$(COMPILER) $(SRC) -o $(BUILD)
