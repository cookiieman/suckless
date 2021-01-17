//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"  ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"  ", " df -h / | grep \"/dev/nvme0n1p1\" | awk -F \" \" \'{print $2 \"/\" $3}\'",	30,		0},
	{" ", "battery_percent",					                        20, 	0},
	{" ", "volume",					                                    0,		10},
	{"  ", "date '+%a %b %d'",                         				5,		0},
	{"  ", "date '+%H:%M'",				                            5,		0},
};
//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
