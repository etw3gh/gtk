#include <gtk/gtk.h>  
#include <string.h>

// takes the first command line argument as the window title
// ./first WindowTitle
// if no argument is sent, "Title" is the title

 
// on click event
static void test_btn_click (GtkWidget *widget, gpointer *data)
{
    g_print("Test Click Event\n");
}

int main( int  argc, char *argv[] )  
{  
    char *title;
    strcpy(title, "Title");   

    GtkWidget *window;  
    GtkWidget *button;

    gtk_init (&argc, &argv);  

    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);  
    gtk_window_set_title (GTK_WINDOW (window), title);

    // create button
    //button = gtk_button_new_with_label("Test: Click Me");
    
    // wire up button
    //g_signal_connect(button, "clicked", G_CALLBACK(test_btn_click), NULL);

    // add button to window
    //gtk_container_add(GTK_CONTAINER (window), button);

    //gtk_widget_show(button);
    gtk_widget_show(window);  
    gtk_main ();  
    return 0;  
 }  
