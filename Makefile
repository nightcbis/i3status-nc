CXX = gcc
CXXFLAGS = -I -Wall -g

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

i3status-nc: main.o hostname.o date.o
	$(CC) -o i3status-nc main.o hostname.o date.o
