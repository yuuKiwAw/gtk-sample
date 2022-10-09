#pragma once

#include <gtkmm/button.h>
#include <gtkmm/window.h>

class HelloGtk : public Gtk::Window
{
public:
    HelloGtk();
    virtual ~HelloGtk();

protected:
    void on_button_clicked();

    Gtk::Button m_button;
};
