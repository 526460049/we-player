#pragma once

#include<FL/Fl.H>
#include<FL/Fl_Window.H>
#include<FL/Fl_Box.H>
#include<FL/Fl_Button.H>

class LiveList : public Fl_Group {
public:
	LiveList(Fl_Window* window);
private:
	static void switchPage1(Fl_Button* btn, Fl_Window*);
	static void switchPage2(Fl_Button* btn, Fl_Window*);
	Fl_Button* btn1;
	Fl_Button* btn2;
	Fl_Box* box1;
};

