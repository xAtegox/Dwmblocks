//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/    /*Command*/                                           /*Update Interval*/ /*Update Signal*/

  /* Only show WiFi if LAN (ethernet) is NOT connected */
  {"", "[ $(cat /sys/class/net/e*/carrier 2>/dev/null | grep -c 1) -eq 0 ] && /home/atego/dotfiles/scripts/.config/scripts/statusbar/wifi", 30, 0},

  /* Only show Battery if the BAT0 directory exists */
  {"", "[ -d /sys/class/power_supply/BAT0 ] && /home/atego/dotfiles/scripts/.config/scripts/statusbar/battery", 60, 0},

  /* Deafult scripts */
  {"",        "/home/atego/dotfiles/scripts/.config/scripts/statusbar/musicplaying",  10,               11},
  {"",        "/home/atego/dotfiles/scripts/.config/scripts/statusbar/screenrecord",   0,               12},
	{"",        "/home/atego/dotfiles/scripts/.config/scripts/statusbar/weather",      180,               15},
	{"",        "/home/atego/dotfiles/scripts/.config/scripts/statusbar/volume",         0,               10},
	{"",        "/home/atego/dotfiles/scripts/.config/scripts/statusbar/timedate",      30,                0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 3;
