/*
+----------------------------------------------------------------------+
| PHPSciter                                                            |
+----------------------------------------------------------------------+
| This source file is subject to version 3.01 of the PHP license,      |
| that is bundled with this package in the file LICENSE, and is        |
| available through the world-wide-web at the following url:           |
| http://www.php.net/license/3_01.txt                                  |
| If you did not receive a copy of the PHP license and are unable to   |
| obtain it through the world-wide-web, please send a note to          |
| license@php.net so we can mail you a copy immediately.               |
+----------------------------------------------------------------------+
| Author: Chitao Gao  <neeke@php.net>                                  |
+----------------------------------------------------------------------+
*/

#include <stdlib.h>
#include <gtk/gtk.h>
#include <cairo.h>

#include "sciter-x.h"

void SciterWindowInit()
{
    gtk_init(0,NULL);
}

GtkWindow* gwindow(HWINDOW hwnd)
{
    return hwnd ? GTK_WINDOW(gtk_widget_get_toplevel(hwnd)): nullptr;
}

void SciterSetWindowTitle(HWINDOW hw, char* title)
{
    GtkWidget *window = gtk_widget_get_toplevel(hw);
    gtk_window_set_title(GTK_WINDOW(window), title);
}

void SciterShowWindow(HWINDOW hw)
{
    gtk_window_present(gwindow(hw));
}

int SciterApplicationRun(HWINDOW hw)
{
    gtk_main();
    return 0;
}
