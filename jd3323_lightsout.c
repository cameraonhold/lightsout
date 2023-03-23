#include <stdio.h>

#define HOUSE_WIDTH   69
#define HOUSE_HEIGHT  26
#define WINDOW_WIDTH  11
#define WINDOW_HEIGHT  3

int get_input (int* val)
{
    do {
        if ( (*val = getchar()) == '\n')
            return 0;
    } while (getchar() != '\n');

    *val -= '0';

    if (*val >= 0 && *val <= 9)
        return 1;
    else
        return 0;
}
 
void house_display (char* house)
{
    int i, j;

    for (j=0; j<HOUSE_HEIGHT; j++, printf("\n"))
        for (i=0; i<HOUSE_WIDTH; i++)
            printf ("%c", house[HOUSE_WIDTH*j+i]);
}

void house_init(char house[], int state[], int i)
{
	int r1start, r1end, r2start, r2end, r3start, r3end;

	switch(i){
		case 0:
			r1start = 563;
			r1end = 574;
			r2start = 632;
			r2end = 643;
			r3start = 701;
			r3end = 712;
			break;
		case 1:
			r1start = 581;
			r1end = 592;
			r2start = 650;
			r2end = 661;
			r3start = 719;
			r3end = 730;
			break;
		case 2:
			r1start = 599;
			r1end = 610;
			r2start = 668;
			r2end = 679;
			r3start = 737;
			r3end = 748;
			break;
		case 3:
			r1start = 977;
			r1end = 988;
			r2start = 1046;
			r2end = 1057;
			r3start = 1115;
			r3end = 1126;
			break;
		case 4:
			r1start = 995;
			r1end = 1006;
			r2start = 1064;
			r2end = 1075;
			r3start = 1133;
			r3end = 1144;
			break;
		case 5:
			r1start = 1013;
			r1end = 1024;
			r2start = 1082;
			r2end = 1093;
			r3start = 1151;
			r3end = 1162;
			break;
		case 6:
			r1start = 1391;
			r1end = 1402;
			r2start = 1460;
			r2end = 1471;
			r3start = 1529;
			r3end = 1540;
			break;
		case 7:
			r1start = 1409;
			r1end = 1420;
			r2start = 1478;
			r2end = 1489;
			r3start = 1547;
			r3end = 1558;
			break;
		case 8:
			r1start = 1427;
			r1end = 1438;
			r2start = 1496;
			r2end = 1507;
			r3start = 1565;
			r3end = 1576;
			break;
	}
		if(state[i] == 1){
		int k;
		for (k=r1start; k<r1end; k++)
		{
			house[k] = '#';
		}
		for (k=r2start; k<r2end; k++)
		{
			house[k] = '#';
		}
		for (k=r3start; k<r3end; k++)
		{
			house[k] = '#';
		}
	}
	else
	{
		int k;
		for (k=r1start; k<r1end; k++)
		{
			house[k] = ' ';
		}
		for (k=r2start; k<r2end; k++)
		{
			house[k] = ' ';
		}
		for (k=r3start; k<r3end; k++)
		{
			house[k] = ' ';
		}
	}
}

void change_array(int state[], int choice)
{
	choice = choice-1;
	if(state[choice] == 1){
		state[choice] = 0;
	}
	else{
		state[choice] = 1;
	}
}


void window_toggle(int state[], char house[], int choice)
{
	change_array(state, choice);

	int r1start, r1end, r2start, r2end, r3start, r3end;

	switch(choice){
		case 1:
			r1start = 563;
			r1end = 574;
			r2start = 632;
			r2end = 643;
			r3start = 701;
			r3end = 712;
			break;
		case 2:
			r1start = 581;
			r1end = 592;
			r2start = 650;
			r2end = 661;
			r3start = 719;
			r3end = 730;
			break;
		case 3:
			r1start = 599;
			r1end = 610;
			r2start = 668;
			r2end = 679;
			r3start = 737;
			r3end = 748;
			break;
		case 4:
			r1start = 977;
			r1end = 988;
			r2start = 1046;
			r2end = 1057;
			r3start = 1115;
			r3end = 1126;
			break;
		case 5:
			r1start = 995;
			r1end = 1006;
			r2start = 1064;
			r2end = 1075;
			r3start = 1133;
			r3end = 1144;
			break;
		case 6:
			r1start = 1013;
			r1end = 1024;
			r2start = 1082;
			r2end = 1093;
			r3start = 1151;
			r3end = 1162;
			break;
		case 7:
			r1start = 1391;
			r1end = 1402;
			r2start = 1460;
			r2end = 1471;
			r3start = 1529;
			r3end = 1540;
			break;
		case 8:
			r1start = 1409;
			r1end = 1420;
			r2start = 1478;
			r2end = 1489;
			r3start = 1547;
			r3end = 1558;
			break;
		case 9:
			r1start = 1427;
			r1end = 1438;
			r2start = 1496;
			r2end = 1507;
			r3start = 1565;
			r3end = 1576;
			break;
		}
	if(house[r1start] == ' '){
		int k;
		for (k=r1start; k<r1end; k++)
		{
			house[k] = '#';
		}
		for (k=r2start; k<r2end; k++)
		{
			house[k] = '#';
		}
		for (k=r3start; k<r3end; k++)
		{
			house[k] = '#';
		}
	}
	else
	{
		int k;
		for (k=r1start; k<r1end; k++)
		{
			house[k] = ' ';
		}
		for (k=r2start; k<r2end; k++)
		{
			house[k] = ' ';
		}
		for (k=r3start; k<r3end; k++)
		{
			house[k] = ' ';
		}
	}
}

int solved(int state[])
{
	int i;
	for(i=0; i<9; i++)
	{
		if(state[i] == 1)
		{
			return 0;
		}
		
	}
	return 1;
}

int main (int argc, char** argv)
{
    int choice,i;

    char house[] =
    "                                             ______________          "
    "                                            |______________|         "
    "      _______________________________________|            |_____     "
    "     '                                       |____________|     `    "
    "    |                                                           |    "
    "    '-----------------------------------------------------------'    "
    "    |           1                 2                 3           |    "
    "    |     +-----------+     +-----------+     +-----------+     |    "
    "    |     |           |     |           |     |           |     |    "
    "    |     |           |     |           |     |           |     |    "
    "    |     |           |     |           |     |           |     |    "
    "    |     +-----------+     +-----------+     +-----------+     |    "
    "    |           4                 5                 6           |    "
    "    |     +-----------+     +-----------+     +-----------+     |    "
    "    |     |           |     |           |     |           |     |    "
    "    |     |           |     |           |     |           |     |    "
    "  _ |     |           |     |           |     |           |     |    "
    " |#||     +-----------+     +-----------+     +-----------+     |    "
    " |_||           7                 8                 9           |    "
    "  `-|     +-----------+     +-----------+     +-----------+     |    "
    "    -     |           |     |           |     |           |     |    "
    "    '     |           |     |           |     |           |     |    "
    "    '     |           |     |           |     |           |     |    "
    "   o'     +-----------+     +-----------+     +-----------+     |    "
    "    '                                                           |    "
    "____'___________________________________________________________'____";


    /* NOTE:
     *
     * this will be our initial window state, do not change this!
     *   1 = Light is ON  -- fill with '#' character
     *   0 = Light is OFF -- fill with ' ' character (i.e. a space) */
    int state[] = { 1, 1, 0,
                    1, 1, 0,
                    1, 0, 0 };

   for(i=0; i<9; i++){
   	house_init (house, state, i);
   }

    /* Infinite game loop.
     * (We will exit using 'break' when certain conditions are met) */


    while (1) {
	
	house_display(house);

	printf("Choose a Window (0 to exit): ");

	if (!get_input(&choice))
	{
		printf("INVLAID SELECTION!\n");
		continue;
	}

	if (!choice){
		break;
	}

	switch(choice-1){
		case 0:
			window_toggle(state, house, choice);
			window_toggle(state, house, 4);
			window_toggle(state, house, 2);
			break;
		case 1:
			window_toggle(state, house, choice);
			window_toggle(state, house, 1);
			window_toggle(state, house, 5);
			window_toggle(state, house, 3);
			break;
		case 2:
			window_toggle(state, house, choice);
			window_toggle(state, house, 2);
			window_toggle(state, house, 6);
			break;
		case 3:
			window_toggle(state, house, choice);
			window_toggle(state, house, 1);
			window_toggle(state, house, 5);
			window_toggle(state, house, 7);
			break;
		case 4:
			window_toggle(state, house, choice);
			window_toggle(state, house, 2);
			window_toggle(state, house, 4);
			window_toggle(state, house, 6);
			window_toggle(state, house, 8);
			break;
		case 5:
			window_toggle(state, house, choice);
			window_toggle(state, house, 3);
			window_toggle(state, house, 5);
			window_toggle(state, house, 9);
			break;
		case 6:
			window_toggle(state, house, choice);
			window_toggle(state, house, 4);
			window_toggle(state, house, 8);
			break;
		case 7:
			window_toggle(state, house, choice);
			window_toggle(state, house, 7);
			window_toggle(state, house, 5);
			window_toggle(state, house, 9);
			break;
		case 8:
			window_toggle(state, house, choice);
			window_toggle(state, house, 8);
			window_toggle(state, house, 6);
			break;
	}

	if (solved(state)) {
            printf ("Congratulations!  You won!\n");
            break;
        }		

    }

/*
        choice--;
        window_toggle (state, house, choice);
*/	


    printf ("Goodbye!\n");

    return 0;
}
