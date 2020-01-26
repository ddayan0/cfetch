#include <stdio.h>
#include <sys/utsname.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 0
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



// put concat func here

void terminal(){ //terminal functionalty, still need to add a quit function 
        char userinp [] = "";
        printf("Welcome to dayterm!\n");
        printf("Enter a command\n");
        while(TRUE == 0){
                printf("%s", ">>");
                scanf("%s\-", &userinp);
                system(&userinp);
                printf("\n", &userinp);
        }
}






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
	terminal();
}



void main(){

ascii();
sysinfo();

}
