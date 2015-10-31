// 1.1

#ifndef __Sprite__
#define __Sprite__

#include "Defines.h"
#include "Graphics.h"
#include "iGraphics.h"
using namespace PlayLib;

enum axis
{
	horizontal,
	vertical
};

class Sprite : public Image
{
	private:
		int screen_x;
		int screen_y;
		int sheet_x;
		int sheet_y;
		int frame_width;
		int frame_height;
		char path[FILE_PATH_SIZE];

	public:
		Sprite (int w, int h, const char* p);
		Sprite (int w, int h);
		Sprite (int w, int h, int sheet_X, int sheet_Y, int screen_X, int screen_Y);
		void load (const char* sub_folder_path, char* file_name);
		void load_direct (char* file_path);
		void draw (Graphics* g);
		void draw (iGraphics* i);
		void set_frame_width (int w);
		void set_frame_height (int h);
		void print_path();
		void move (int x, int y);
		void move (int n, axis a);
};

#endif