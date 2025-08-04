TARGET = calcughh
SRCS = main.c calcughh.c
GTK_FLAGS = $(shell pkg-config --cflags --libs gtk+-3.0)

all:
	gcc -o $(TARGET) $(SRCS) $(GTK_FLAGS)

clean:
	rm -f $(TARGET)
