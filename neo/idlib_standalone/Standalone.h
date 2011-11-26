#ifndef __STANDALONE_H__
#define __STANDALONE_H__

/*
===============================================================================
	Standalone idLib Host

	Does exactly what the name implies. Provides a convenient interface
	for idLib to be used in standalone applications.
===============================================================================
*/

class idLibStandalone	// TODO really use "id" prefix?
{

public:
	// Initializes the standalone idLib. basePath is equivalent to
	// the fs_basepath cvar (/home/user/doom, c:\doom, etc).
	//
	// If any of these are not set then the paths will be set from
	// the environment variables IDLIB_BASEPATH, IDLIB_SAVEPATH,
	// IDLIB_CDPATH, and IDLIB_DEVPATH. If those are not set then
	// the filesystem will fall back to its standard methods of
	// finding those paths.
	// be referenced to there. That is effected by implementing the
	// Sys_* path functions.
	static void Init(const char *basePath = "basePath", const char *savePath = "savePath", const char *cdPath = "cdPath", const char *devPath = "devPath");

	// Shuts everything down.
	static void Shutdown();

private:
	static void InitPaths(const char *basePath, const char *savePath, const char *cdPath, const char *devPath);
}
