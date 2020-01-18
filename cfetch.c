#include <stdio.h>
#include <sys/utsname.h>
#define MAX_CHAR_SIZE 255
struct sytruct
{

	char *kernname [MAX_CHAR_SIZE];
	char *nodename [MAX_CHAR_SIZE];
	char *kernrel [MAX_CHAR_SIZE];
	char *kernver [MAX_CHAR_SIZE];
	char *machine [MAX_CHAR_SIZE];
	char *processor [MAX_CHAR_SIZE];
	char *hwplat [MAX_CHAR_SIZE];
	char *os [MAX_CHAR_SIZE];
} SYS_INFO;


void ascii(){
	 printf(R"EOF(
	
                                                                 #####
                                                                #######
                   #                                            ##O#O##
  ######          ###                                           #VVVVV#
    ##             #                                          ##  VVV  ##
    ##         ###    ### ####   ###    ###  ##### #####     #          ##
    ##        #  ##    ###    ##  ##     ##    ##   ##      #            ##
    ##       #   ##    ##     ##  ##     ##      ###        #            ###
    ##          ###    ##     ##  ##     ##      ###       QQ#           ##Q
    ##       # ###     ##     ##  ##     ##     ## ##    QQQQQQ#       #QQQQQQ
    ##      ## ### #   ##     ##  ###   ###    ##   ##   QQQQQQQ#     #QQQQQQQ
  ############  ###   ####   ####   #### ### ##### #####   QQQQQ#######QQQQQ
)EOF");
}

void sysinfo(){
	SYS_INFO.kernname == system("uname -s");
	SYS_INFO.nodename == system("uname -n");
	SYS_INFO.kernrel == system("uname -r");
	SYS_INFO.kernver == system("uname -v");
	SYS_INFO.machine == system("uname -m");
	SYS_INFO.processor == system("uname -p");
	SYS_INFO.hwplat == system("uname -i");
	SYS_INFO.os == system("uname -o");
	printf("\n", SYS_INFO.kernname);	
	printf("\n", SYS_INFO.nodename);
	printf("\n", SYS_INFO.kernrel);
	printf("\n", SYS_INFO.kernver);
	printf("\n", SYS_INFO.machine);
	printf("\n", SYS_INFO.processor);
	printf("\n", SYS_INFO.hwplat);
	printf("\n", SYS_INFO.os);
}



void main(){

ascii();
sysinfo();

}
