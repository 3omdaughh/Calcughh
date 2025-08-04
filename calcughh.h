#ifndef CALCUGHH_H
#define CALCUGHH_H

#include <gtk/gtk.h>
#include <stdbool.h>

typedef struct
{
	GtkWidget *window;
	GtkWidget *grid;
	GtkWidget *button[17];
} calc;

extern GtkWidget *box;

#define SIZE 10

extern char input_buffer[100];
extern char output_buffer[100];
extern bool clear_buffer;
extern bool add;
extern bool mul;
extern bool divv;
extern bool sub;
extern float result;
extern float num[SIZE];
extern int count;

void calculate(GtkButton *button, gpointer data);
void activate(GtkApplication *app, gpointer user_data);

#endif
