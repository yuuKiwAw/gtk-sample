#include "hellogtk.hpp"
#include <gtkmm/application.h>

int main(int argc, char *argv[])
{
    auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

    HelloGtk hellogtk;

    return app->run(hellogtk);

    return 0;
}
