/*
 *  prefs_unix.cpp - Preferences handling, Unix specific things
 *
 *  SheepShaver (C) 1997-2008 Christian Bauer and Marc Hellwig
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "sysdeps.h"

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>

#include "prefs.h"

#ifdef __APPLE__
#include "TargetConditionals.h"
#if TARGET_OS_IPHONE
#include "utils_ios.h"
#endif
#endif

// Platform-specific preferences items
prefs_desc platform_prefs_items[] = {
	{"ether", TYPE_STRING, false,          "device name of Mac ethernet adapter"},
	{"etherconfig", TYPE_STRING, false,    "path of network config script"},
	{"keycodes", TYPE_BOOLEAN, false,      "use keycodes rather than keysyms to decode keyboard"},
	{"keycodefile", TYPE_STRING, false,    "path of keycode translation file"},
	{"mousewheelmode", TYPE_INT32, false,  "mouse wheel support mode (0=page up/down, 1=cursor up/down)"},
	{"mousewheellines", TYPE_INT32, false, "number of lines to scroll in mouse wheel mode 1"},
	{"dsp", TYPE_STRING, false,            "audio output (dsp) device name"},
	{"mixer", TYPE_STRING, false,          "audio mixer device name"},
	{"idlewait", TYPE_BOOLEAN, false,      "sleep when idle"},
#ifdef USE_SDL_VIDEO
	{"sdlrender", TYPE_STRING, false,      "SDL_Renderer driver (\"auto\", \"software\" (may be faster), etc.)"},
#endif
	{NULL, TYPE_END, false, NULL} // End of list
};


// Prefs file name and path
const char PREFS_FILE_NAME[] = ".sheepshaver_prefs";
static char prefs_path[1024];

std::string UserPrefsPath;

/*
 *  Load preferences from settings file
 */

void LoadPrefs(const char *vmdir)
{
	if (vmdir) {
		snprintf(prefs_path, sizeof(prefs_path), "%s/prefs", vmdir);
		FILE *prefs = fopen(prefs_path, "r");
		if (!prefs) {
			printf("No file at %s found.\n", prefs_path);
			exit(1);
		}
		LoadPrefsFromStream(prefs);
		fclose(prefs);
		return;
	}

	if (!UserPrefsPath.empty()) strncpy(prefs_path, UserPrefsPath.c_str(), 1000);
	else {
		// Construct prefs path
		prefs_path[0] = 0;
#if TARGET_OS_IPHONE
		const char* home = document_directory();
#else
		char *home = getenv("HOME");
#endif
		if (home != NULL && strlen(home) < 1000) {
			strncpy(prefs_path, home, 1000);
			strcat(prefs_path, "/");
		}
		strcat(prefs_path, PREFS_FILE_NAME);
		printf("Looking for prefs_path: %s\n", prefs_path);
	}

	// Read preferences from settings file
	FILE *f = fopen(prefs_path, "r");
	if (f != NULL) {

		// Prefs file found, load settings
		LoadPrefsFromStream(f);
		fclose(f);
		printf("Successfully read from prefs_path: %s\n", prefs_path);

	} else {
		printf("Failed to read from prefs_path: %s\n", prefs_path);
#ifdef __linux__
		PrefsAddString("cdrom", "/dev/cdrom");
#endif
		// No prefs file, save defaults
		SavePrefs();
	}
}


/*
 *  Save preferences to settings file
 */

void SavePrefs(void)
{
	FILE *f;
	if ((f = fopen(prefs_path, "w")) != NULL) {
		SavePrefsToStream(f);
		fclose(f);
	}
}


/*
 *  Add defaults of platform-specific prefs items
 *  You may also override the defaults set in PrefsInit()
 */

void AddPlatformPrefsDefaults(void)
{
	PrefsAddBool("keycodes", false);
	PrefsReplaceString("extfs", "/");
	PrefsReplaceInt32("mousewheelmode", 1);
	PrefsReplaceInt32("mousewheellines", 3);
#ifdef __linux__
	if (access("/dev/sound/dsp", F_OK) == 0) {
		PrefsReplaceString("dsp", "/dev/sound/dsp");
	} else {
		PrefsReplaceString("dsp", "/dev/dsp");
	}
	if (access("/dev/sound/mixer", F_OK) == 0) {
		PrefsReplaceString("mixer", "/dev/sound/mixer");
	} else {
		PrefsReplaceString("mixer", "/dev/mixer");
	}
#else
	PrefsReplaceString("dsp", "/dev/dsp");
	PrefsReplaceString("mixer", "/dev/mixer");
#endif
	PrefsAddBool("idlewait", true);
}
