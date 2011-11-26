#include "../idlib/precompiled.h"
#pragma hdrstop

#include "Standalone.h"

int main(int argc, char **argv)
{
	idLibStandalone::Init("/storage/doom3");

	common->Printf("Hello, world!\n");

	idLibStandalone::Shutdown();
}
