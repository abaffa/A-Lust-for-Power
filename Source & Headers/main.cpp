#include "SaveState.h"

Graphics graphics;
Image image;

void MainLoop(void)
{
	//graphics.DrawImage2D(100,100,400,400,0,0,400,400,image);
	graphics.DrawImage2D(0,0,400,400,0,0,400,400,image);
}

int main (void)
{
	SaveState save_state;
	save_state.print_table();
	
	
	graphics.CreateMainWindow(800, 600, "A Lust for Power");
	graphics.SetBackgroundColor(32,32,32);
	
	char image_file_path[300];
	strcpy_s(image_file_path,PROJECT_PATH);
	strcat_s(image_file_path, CR);
	strcat_s(image_file_path, "Medallions.png");
	printf("%s\n\n",image_file_path);
	image.LoadPNGImage(image_file_path); //Na mesma pasta

	graphics.SetMainLoop(MainLoop);
	graphics.StartMainLoop();
	

	return 0;
}
