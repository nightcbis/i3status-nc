CXX = gcc
CXXFLAGS = -I -Wall -g

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

i3status-nc: i3status-nc.o hostname.o
	$(CC) -o i3status-nc i3status-nc.o hostname.o
