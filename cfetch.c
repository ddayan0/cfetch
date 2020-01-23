#include <stdio.h>
#include <sys/utsname.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CHAR_SIZE 255 // could be lower, but works for now
struct sytruct // sets every char array to have a maximum size of 255 for the struct to compile
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



void concat(const char *s1, const char *s2)
{
    const size_t len1 = strlen(s1);
    const size_t len2 = strlen(s2);
    char *result = malloc(len1 + len2 + 1); // +1 for the null-terminator
    memcpy(result, s1, len1);
    memcpy(result + len1, s2, len2 + 1); // +1 to copy the null-terminator
    printf("\n", result);
} //code found on stackoverflow: https://stackoverflow.com/questions/8465006/how-do-i-concatenate-two-strings-in-c





void ascii(){ //fancy ascii for looks. could be removed if needed
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
	SYS_INFO.kernname == system("uname -s"); // all uname code below just executes the uname command
	SYS_INFO.nodename == system("uname -n");
	SYS_INFO.kernrel == system("uname -r");
	SYS_INFO.kernver == system("uname -v");
	SYS_INFO.machine == system("uname -m");
	SYS_INFO.processor == system("uname -p");
	SYS_INFO.hwplat == system("uname -i");
	SYS_INFO.os == system("uname -o");
	printf("\n", SYS_INFO.kernname); // all printf statements below just print the output of the uname commands	
	printf("\n", SYS_INFO.nodename);
	printf("\n", SYS_INFO.kernrel);
	printf("\n", SYS_INFO.kernver);
	printf("\n", SYS_INFO.machine);
	printf("\n", SYS_INFO.processor);
	printf("\n", SYS_INFO.hwplat);
	printf("\n", SYS_INFO.os);
//	concat("Kernel Version: ", SYS_INFO.kernrel);
}



void main(){

ascii();
sysinfo();

}
