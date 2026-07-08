# ===========================
# Compilador, sim plifica na hora de, evita por no codigo por exemplo gcc main.c snake.c food.c input.c render.c game.c -lncurses -o snake
# ===========================
# Define o compilador que será utilizado
CC = gcc

# Opções do compilador:
# -Wall   : ativa avisos importantes
# -Wextra : ativa avisos extras
# -Iinclude : procura arquivos .h na pasta include
CFLAGS = -Wall -Wextra -Iinclude

# Bibliotecas que serão vinculadas ao programa
LDFLAGS = -lncurses

# Arquivos .c do projeto
SRC = src/main.c \
      src/game.c \
      src/snake.c \
      src/render.c \
      src/input.c \
      src/food.c
# Nome do programa gerado após a compilação
TARGET = snake
# Regra principal
all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

# Remove arquivos gerados
clean:
	rm -f $(TARGET)