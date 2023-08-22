//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
       /*Icon      Command                                                          Interval Signal*/
	/*{"Mem:",   "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",       30,        0}, */
	{"  ",      "/home/ghost/.config/dwmblocks/cpu-perc.sh",                      5,        0},
	{" ",       "/home/ghost/.config/dwmblocks/ram-stat.sh",                     15,        0},
	{"󰜟 ",       "/home/ghost/.config/dwmblocks/vol.sh",                           0,       10},
	{"",         "date '+%e. %b - %H:%M '",                                       60,        0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
