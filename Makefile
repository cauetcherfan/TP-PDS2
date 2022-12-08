CC := g++
FLAGS := -I include/ -Wall 
BUILDDIR := build
SRCDIR := src
TARGET := main.out
LIBSDIR := -L/usr/local/lib -L/usr/lib/x86_64-linux-gnu/


all: clean main
	$(CC) $(FLAGS) $(BUILDDIR)/*.o -o $(TARGET) $(LIBSDIR) $(LFLAGS)

main: usuarios cliente bibliotecario
	$(CC) $(FLAGS) -c $(SRCDIR)/main.cpp -o $(BUILDDIR)/main.o

usuarios:
	$(CC) $(FLAGS) -c $(SRCDIR)/usuarios.cpp -o $(BUILDDIR)/usuarios.o

cliente:
	$(CC) $(FLAGS) -c $(SRCDIR)/cliente.cpp -o $(BUILDDIR)/cliente.o

bibliotecario:
	$(CC) $(FLAGS) -c $(SRCDIR)/bibliotecario.cpp -o $(BUILDDIR)/bibliotecario.o

clean:
	rm -rf build/*.o
	rm -rf $(TARGET)
