#include <gtk/gtk.h>  
#include <string.h>

// takes the first command line argument as the window title
// ./first WindowTitle
// if no argument is sent, "Title" is the title

 
int main( int  argc, char *argv[] )  
{  
    char *title;
    if (argc == 0)
    {
        strcpy(title, "Title");   
    }
    else
    {
        strcpy(title, argv[1]);
    }
    GtkWidget *window;  
    gtk_init (&argc, &argv);  
    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);  
    gtk_window_set_title (GTK_WINDOW (window), title);
    gtk_widget_show (window);  
    gtk_main ();  
    return 0;  
 }  
