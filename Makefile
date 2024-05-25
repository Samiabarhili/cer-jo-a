# Définir le compilateur 
CC = gcc

# Définir les options de compilation
CFLAGS = -Wall -Wextra -Werror

# Définir l'exécutable cible
TARGET = exec

# Définir les fichiers source
SRCS = main.c \
       function.c \

# Définir les fichiers objets correspondants
OBJS = $(SRCS:.c=.o)

# Cible par défaut
all: $(TARGET)

# Règle pour construire l'exécutable final
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Règles pour construire les fichiers objets
main.o: main.c function.h structures.h
	$(CC) $(CFLAGS) -c main.c -o main.o

function.o: function.c function.h
	$(CC) $(CFLAGS) -c function.c -o function.o


# Règle pour nettoyer les fichiers objets et l'exécutable
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
