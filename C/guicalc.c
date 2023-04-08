#include <gtk3/gtk3.h>

static void on_button_clicked(GtkButton *button, gpointer data) {
    GtkWidget *entry = (GtkWidget *)data;
    const gchar *text = gtk_button_get_label(button);
    gchar *current_text = gtk_entry_get_text(GTK_ENTRY(entry));
    gchar *new_text = g_strdup_printf("%s%s", current_text, text);
    gtk_entry_set_text(GTK_ENTRY(entry), new_text);
    g_free(new_text);
}

static void on_clear_button_clicked(GtkButton *button, gpointer data) {
    GtkWidget *entry = (GtkWidget *)data;
    gtk_entry_set_text(GTK_ENTRY(entry), "");
}

static void on_equals_button_clicked(GtkButton *button, gpointer data) {
    GtkWidget *entry = (GtkWidget *)data;
    const gchar *text = gtk_entry_get_text(GTK_ENTRY(entry));
    gchar *result = g_strdup_printf("%g", eval_expr(text));
    gtk_entry_set_text(GTK_ENTRY(entry), result);
    g_free(result);
}

static void on_window_closed(GtkWidget *widget, gpointer data) {
    gtk_main_quit();
}

int main(int argc, char *argv[]) {
    GtkWidget *window;
    GtkWidget *grid;
    GtkWidget *entry;
    GtkWidget *button;
    int i;

    gtk_init(&argc, &argv);

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Calculator");
   
