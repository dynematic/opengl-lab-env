//------------------------------------------------------------------------------
// main.cc
// (C) 2015-2017 Individual contributors, see AUTHORS file
//------------------------------------------------------------------------------
#include "config.h"
#include "lab_1_app.h"

int
main(int argc, const char** argv)
{
	Lab1::Lab1App app;
	if (app.Open())
	{
		app.Run();
		app.Close();
	}
	app.Exit();
	
}