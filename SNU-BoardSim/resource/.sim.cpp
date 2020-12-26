#include "Vtop.h"
#include "verilated.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <termios.h>



Vtop* top = new Vtop;
unsigned char SevenSeg[6][7][5];
unsigned char PrevSeg[6];
unsigned char PrevSwitch[6];
unsigned char PrevDip[10];
unsigned char PrevLED[6];

static inline void to_segment(unsigned char value, unsigned char Segment[7][5]){

	for(int i = 0; i < 7 ; i ++)
		for(int j = 0; j < 5 ; j++)
			Segment[i][j] = 0;
		
	if(value & 0x01){  //G
		for(int k = 0; k < 5; k++){
			Segment[3][k] = 1;
		}
	}
	
	if(value & 0x02){  //F
		for(int k =0; k < 4 ; k++)
			Segment[k][0] = 1;
	}

	if(value & 0x04){  //E
		for(int k =3; k < 7 ; k++)
			Segment[k][0] = 1;	
	}

	if(value & 0x8){   //D
		for(int k =0; k < 5 ; k++)
			Segment[6][k] = 1;	
	}

	if(value & 0x10){ //C
		for(int k =3; k < 7 ; k++)
			Segment[k][4] = 1;	
	}

	if(value & 0x20) { //B
		for(int k =0; k < 4 ; k++)
			Segment[k][4] = 1;	
	}

	if(value & 0x40) { //A
		for(int k =0; k < 5 ; k++)
			Segment[0][k] = 1;
	}

}

static inline void segment_display(unsigned char S6, unsigned char S5, unsigned char S4,unsigned char S3, unsigned char S2,unsigned char S1 ){

	to_segment(S6, SevenSeg[5]);
	to_segment(S5, SevenSeg[4]);
	to_segment(S4, SevenSeg[3]);
	to_segment(S3, SevenSeg[2]);
	to_segment(S2, SevenSeg[1]);
	to_segment(S1, SevenSeg[0]);

	printf ( "\033[8;1H\033[30m\033[48m                                     Seven Segment                                         \033[31m\033[48m");

for(int row = 0; row < 7 ; row++){

	printf ( "\033[%d;1H     ", row+9 );
	for(int seg = 0; seg < 6 ; seg++){
		for(int col = 0 ; col < 5 ; col++){
			if(SevenSeg[seg][row][col] == 1)
				printf("■");
			else
				printf(" ");
		}
		printf("          "); 
	}
}

printf("\033[17;1H\033[34m\033[49m    Segment1       Segment2       Segment3       Segment4       Segment5       Segment6      ");

}


static inline void push_switch_display(unsigned char s6, unsigned char s5, unsigned char s4, unsigned char s3, unsigned char s2, unsigned char s1 ){

printf("\033[18;1H\033[30m\033[49m_____________________________________________________________________________________________\033[19;1H                                      Push Switch                                          ");

unsigned char switch_arr[6];
switch_arr[5] = s6;
switch_arr[4] = s5;
switch_arr[3] = s4;
switch_arr[2] = s3;
switch_arr[1] = s2;
switch_arr[0] = s1;

   for(int switch_height = 0; switch_height < 2; switch_height ++){
	printf("\033[%d;1H",switch_height + 21);
	for (int i = 0; i < 6 ; i++){
		if ( switch_arr[i] == 0 )
			printf("     \033[30m\033[47m    \033[30m\033[49m      ");
		else
			printf("     \033[30m\033[44m    \033[30m\033[49m      ");
	}
	printf("\n");	
   }

printf("\033[24;1H\033[34m\033[49m Push Switch1   Push Switch2   Push Switch3   Push Switch4   Push Switch5   Push Switch6    ");
printf("\033[25;1H\033[30m\033[48m_____________________________________________________________________________________________");

}


static inline void dip_switch(unsigned char s1, unsigned char s2, unsigned char s3, unsigned char s4,
unsigned char s5, unsigned char s6, unsigned char s7 ,unsigned char s8, unsigned char s9, unsigned char s10){

printf("\033[26;1H                                       DIP Switch                                        ");


unsigned char switch_arr[10];

switch_arr[0] = s1;
switch_arr[1] = s2;
switch_arr[2] = s3;
switch_arr[3] = s4;
switch_arr[4] = s5;
switch_arr[5] = s6;
switch_arr[6] = s7;
switch_arr[7] = s8;
switch_arr[8] = s9;
switch_arr[9] = s10;


   for(int dip = 0; dip < 2; dip ++){
		printf("\033[%d;1H",dip + 28);
	for (int i = 0; i < 10 ; i++){
		if ( switch_arr[i] == 0 )
			printf("   \033[30m\033[47m   \033[30m\033[49m   ");
		else
			printf("   \033[30m\033[44m   \033[30m\033[49m   ");
	}
   }

printf("\033[31;1H\033[34m\033[49m   DS1      DS2      DS3      DS4      DS5      DS6      DS7      DS8      DS9      DS10");
printf("\033[32;1H\033[30m\033[48m_____________________________________________________________________________________________");
}



static inline void led_print(unsigned char led1_red, unsigned char led2_yellow, unsigned char led3_green, unsigned char led4_red,
unsigned char led5_yellow, unsigned char led6_green){

printf("\033[33;1H                                          LED                                        \033[35;1H");


		if (  led1_red == 0 )
			printf("       \033[30m\033[47m   \033[30m\033[49m     ");
		else
			printf("       \033[30m\033[41m   \033[30m\033[49m     ");

		if (  led2_yellow == 0 )
			printf("       \033[30m\033[47m   \033[30m\033[49m     ");
		else
			printf("       \033[30m\033[43m   \033[30m\033[49m     ");

		if (  led3_green == 0 )
			printf("       \033[30m\033[47m   \033[30m\033[49m     ");
		else
			printf("       \033[30m\033[42m   \033[30m\033[49m     ");


		if (  led4_red == 0 )
			printf("       \033[30m\033[47m   \033[30m\033[49m     ");
		else
			printf("       \033[30m\033[41m   \033[30m\033[49m     ");


		if (  led5_yellow == 0 )
			printf("       \033[30m\033[47m   \033[30m\033[49m     ");
		else
			printf("       \033[30m\033[43m   \033[30m\033[49m     ");

		if (  led6_green == 0 )
			printf("       \033[30m\033[47m   \033[30m\033[49m     ");
		else
			printf("       \033[30m\033[41m   \033[30m\033[49m     ");


printf("\033[37;1H\033[34m\033[49m    LED1_RED      LED2_YELLOW     LED3_GREEN     LED4_RED      LED5_YELLOW     LED6_GREEN    ");
printf("\033[38;1H\033[30m\033[48m_____________________________________________________________________________________________");

}



static inline void print_info(void){

//printf("\033[39;1H<Key Info>\033[41;1H--[Push Switch] = (1 ~ 6)\033[42;1H--[DIP Switch] = Shift + (1 ~ 9,0)\033[43;1H--[Break when Segment/LED Output Change] = d, [Stop Break] = c,\033[44;1H--[Simulation timer reset] = r\033[45;1H--[Pause simulation] = p\033[45;1H--[Bug Report] = tas0220@davinci.snu.ac.kr\033[46;1H");

printf("\033[39;1H<Key Info>\033[41;1H--[Push Switch] = (1 ~ 6)\033[42;1H--[DIP Switch] = Shift + (1 ~ 9,0)");
}

int main(int argc, char **argv, char **env) {

  Verilated::commandArgs(argc, argv);

  struct termios t;
  tcgetattr(0, &t);
  t.c_lflag &= ~ICANON;
  tcsetattr(0, TCSANOW, &t);
  fcntl(0, F_SETFL, fcntl(0, F_GETFL) | O_NONBLOCK);
  int init = 0;
  int debug_step = 0;


//Initial Value 
   top->clk = 0;
   top->push_switch1 = 0;
   top->push_switch2 = 0;
   top->push_switch3 = 0;
   top->push_switch4 = 0;
   top->push_switch5 = 0;
   top->push_switch6 = 0;
   top->dip_switch1 = 0;
   top->dip_switch2 = 0;
   top->dip_switch3 = 0; 
   top->dip_switch4 = 0;
   top->dip_switch5 = 0;
   top->dip_switch6 = 0;
   top->dip_switch7 = 0;
   top->dip_switch8 = 0;
   top->dip_switch9 = 0;
   top->dip_switch10 = 0;

   const char *banner = "\
               ____  _   _ _   _ ____  _                 _       _                           \n\
              / ___|| \  | | | | / ___|(_)_ __ ___  _   _| | __ _| |_ ___  _ __               \n\
              \\___ \\|  \\| | | | \\___ \\| | '_ ` _ \\| | | | |/ _` | __/ _ \\| '__|              \n\
               ___) | |\\  | |_| |___) | | | | | | | |_| | | (_| | || (_) | |                 \n\
              |____/|_| \\_|\\___/|____/|_|_| |_| |_|\\__,_|_|\\__,_|\\__\\___/|_|                 \n\
_____________________________________________________________________________________________";

    printf("\e[?25l\033[2J\033[30m\033[48m\033[1;1H%s",banner);

   long long counter = 0;
   int last_key_hit = 0;

   while(1){
        char c = 0;
        read (0, &c, 1);

        switch (c) {
     	   case '1':
		    top->push_switch1 = 1;
        	    break;
        	case '2':
        	    top->push_switch2 = 1;
        	    break;
        	case '3':
        	    top->push_switch3 = 1;
        	    break;
        	case '4':
        	    top->push_switch4 = 1;
        	    break;
       		 case '5':
       		     top->push_switch5 = 1;
       		     break;
       		 case '6':
		    top->push_switch6 = 1;
        	    break;


		//Toggle
       		 case '!':
		    top->dip_switch1 = !top->dip_switch1 ;
        	    break;

       		 case '@':
		    top->dip_switch2 = !top->dip_switch2 ;
        	    break;

       		 case '#':
		    top->dip_switch3 = !top->dip_switch3 ;
        	    break;

       		 case '$':
		    top->dip_switch4 = !top->dip_switch4 ;
        	    break;

       		 case '%':
		    top->dip_switch5 = !top->dip_switch5 ;
        	    break;

       		 case '^':
		    top->dip_switch6 = !top->dip_switch6 ;
        	    break;

       		 case '&':
		    top->dip_switch7 = !top->dip_switch7 ;
        	    break;

       		 case '*':
		    top->dip_switch8 = !top->dip_switch8 ;
        	    break;

       		 case '(':
		    top->dip_switch9 = !top->dip_switch9 ;
        	    break;

       		 case ')':
		    top->dip_switch10 = !top->dip_switch10 ;
        	    break;
		 case 'd':
		     debug_step = 1;
        	    break;
		case 'r':
			counter = 0;
		    break;

        }

	if(c){
		last_key_hit = counter;
	}


        if( counter  - last_key_hit > 30000 ){
	  top->push_switch1 = 0;
	  top->push_switch2 = 0;
	  top->push_switch3 = 0;
   	  top->push_switch4 = 0;
          top->push_switch5 = 0;
          top->push_switch6 = 0;
	}

   for (int clk=0; clk<2; clk++) { // approx 2Mhz
     top->clk = !top->clk;
     top->eval();
    }


   if (  (init == 0) ||
         (PrevSeg[5] != top->segment6) || 
         (PrevSeg[4] != top->segment5) || 
         (PrevSeg[3] != top->segment4) || 
         (PrevSeg[2] != top->segment3) || 
         (PrevSeg[1] != top->segment2) || 
         (PrevSeg[0] != top->segment1)  ||
         (PrevSwitch[5] != top->push_switch6) || 
         (PrevSwitch[4] != top->push_switch5) || 
         (PrevSwitch[3] != top->push_switch4) || 
         (PrevSwitch[2] != top->push_switch3) || 
         (PrevSwitch[1] != top->push_switch2) || 
         (PrevSwitch[0] != top->push_switch1) ||

         (PrevDip[0] != top->dip_switch1) ||
	 (PrevDip[1] != top->dip_switch2) ||
	 (PrevDip[2] != top->dip_switch3) ||
	 (PrevDip[3] != top->dip_switch4) ||
	 (PrevDip[4] != top->dip_switch5) ||
	 (PrevDip[5] != top->dip_switch6) ||
 	 (PrevDip[6] != top->dip_switch7) ||
	 (PrevDip[7] != top->dip_switch8) ||
	 (PrevDip[8] != top->dip_switch9) ||
	 (PrevDip[9] != top->dip_switch10) ||

   	 (PrevLED[0] !=  top->led1_red) ||
   	 (PrevLED[1] !=  top->led2_yellow) ||
   	 (PrevLED[2] !=  top->led3_green) ||
   	 (PrevLED[3] !=  top->led4_red) ||
   	 (PrevLED[4] !=  top->led5_yellow) ||
   	 (PrevLED[5] !=  top->led6_green) )

   {
      segment_display(top->segment6,top->segment5,top->segment4,top->segment3,top->segment2,top->segment1);
      push_switch_display(top->push_switch6,top->push_switch5,top->push_switch4,top->push_switch3,top->push_switch2,top->push_switch1);
      
	dip_switch(
		top->dip_switch1,
		top->dip_switch2,
		top->dip_switch3,
		top->dip_switch4,
		top->dip_switch5,
		top->dip_switch6,
		top->dip_switch7,
		top->dip_switch8,
		top->dip_switch9,
		top->dip_switch10 );

      led_print(top->led1_red,top->led2_yellow,top->led3_green,top->led4_red,top->led5_yellow,top->led6_green); 
      print_info();

      fflush(stdout);
      init = 1;

	if ( debug_step == 1){

  		char d = 0;
		while(1){
        		read (0, &d, 1);
			if(d == 'd')
				break;
			else if (d == 'c'){
				debug_step = 0;
				break;
			}
		}
	}

   }

   if ( counter % 2000 == 0){
	printf("\033[7;1H[Simulation Time] %lld (ms)",counter / 2000 );
	fflush(stdout);
    }



   PrevSeg[5] = top->segment6;
   PrevSeg[4] = top->segment5;
   PrevSeg[3] = top->segment4;
   PrevSeg[2] = top->segment3;
   PrevSeg[1] = top->segment2;
   PrevSeg[0] = top->segment1;

   PrevSwitch[5] = top->push_switch6;
   PrevSwitch[4] = top->push_switch5;
   PrevSwitch[3] = top->push_switch4;
   PrevSwitch[2] = top->push_switch3;
   PrevSwitch[1] = top->push_switch2;
   PrevSwitch[0] = top->push_switch1;

   PrevDip[9] = top->dip_switch10;
   PrevDip[8] = top->dip_switch9;
   PrevDip[7] = top->dip_switch8;
   PrevDip[6] = top->dip_switch7;
   PrevDip[5] = top->dip_switch6;
   PrevDip[4] = top->dip_switch5;
   PrevDip[3] = top->dip_switch4;
   PrevDip[2] = top->dip_switch3;
   PrevDip[1] = top->dip_switch2;
   PrevDip[0] = top->dip_switch1;

   PrevLED[0] =  top->led1_red;
   PrevLED[1] =  top->led2_yellow;
   PrevLED[2] =  top->led3_green;
   PrevLED[3] =  top->led4_red;
   PrevLED[4] =  top->led5_yellow;
   PrevLED[5] =  top->led6_green;

   counter ++;


  }exit(EXIT_SUCCESS);

}






