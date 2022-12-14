#pragma once
#include "gtkmm/window.h"
#include "gtkmm/button.h"

class Buttons : public Gtk::Window
{
public:
	Buttons();
	virtual ~Buttons();

protected:
	void on_button_clicked();

	Gtk::Button m_button;
};