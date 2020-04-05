#pragma once

#include<FL/Fl.H>
#include<FL/Fl_Window.H>
#include<FL/Fl_Box.H>
#include<FL/Fl_Button.H>
#include<FL/Fl_Output.H>
#include<FL/FL_Text_Display.H>
#include<FL/Fl_Help_View.H>
#include<FL/Fl_PNG_Image.H>
#include<FL/Fl_Shared_Image.H>
#include<FL/fl_draw.H>

class LivePage : public Fl_Group {
public:
	LivePage(Fl_Window* window);
private:
	static void switchPage(Fl_Button* btn, Fl_Window*);
	Fl_Button* btn1;
	Fl_Box* video;
	Fl_Group* info;
	Fl_Box* roomId;
	Fl_Box* roomUser;
	Fl_RGB_Image* image;
	Fl_Text_Display* box_cmt_image;
	Fl_Text_Buffer* text_buffer;
};

