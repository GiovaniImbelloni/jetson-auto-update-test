# Nome do binário final
TARGET = servico_teste_2

# Compilador
CC = aarch64-linux-gnu-g++

# Flags do compilador
CFLAGS = -Wall -O2

# Objetos
OBJS = servico_teste_2.o

# Regra padrão
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Regra de limpeza
clean:
	rm -f $(TARGET) $(OBJS)

