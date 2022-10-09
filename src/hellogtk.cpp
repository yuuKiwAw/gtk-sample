#include "hellogtk.hpp"
#include <iostream>

HelloGtk::HelloGtk()
: m_button("Hello gtk")
{
  set_border_width(10);

  m_button.signal_clicked().connect(sigc::mem_fun(*this,
              &HelloGtk::on_button_clicked));

  add(m_button);

  m_button.show();
}

HelloGtk::~HelloGtk()
{
}

void HelloGtk::on_button_clicked()
{
    std::cout << "HelloWorld!" << std::endl;
}