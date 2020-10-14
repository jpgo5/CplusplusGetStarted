#include "helloworld.cc"
#include <gtkmm/application.h>

//g++ main.cc -o hello `pkg-config gtkmm-3.0 --cflags --libs`

int main (int argc, char *argv[])
{
  auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

  HelloWorld helloworld;

  //Shows the window and returns when it is closed.
  return app->run(helloworld);
}
