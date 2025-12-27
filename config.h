//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/    /*Command*/                                           /*Update Interval*/ /*Update Signal*/
	{"",        "/home/atego/.config/scripts/screenrecord status",    30,                12},
	{"",        "/home/atego/.config/scripts/statusbar/weather",      600,                0},
	{"",        "/home/atego/.config/scripts/statusbar/wifi",         30,                 0},
	{"",        "/home/atego/.config/scripts/statusbar/battery",      120,                0},
	{"",        "/home/atego/.config/scripts/statusbar/timedate",     60,                 0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 3;
