
//TIC TAC TOE Game using C Languaage...
//Developer Name:-Rutuja Dnyaneshwar Sherakar
//Date:-11, September 2022


#include<stdio.h>

char box[10] = {'0','1','2','3','4','5','6','7','8','9'};

void Creating_Board();
void Marking_Board(int,char);
int Check_for_Win();
 
int main()
{
	int choice,player=1,i;
	char mark;
	
	do
	{
		Creating_Board();
		
		//        (1%2)=1 --->Hence Player 1 select
		player = (player %2) ? 1:2;
		
		printf("Player %d , enter a number: ",player);
		scanf("%d",&choice);
		
		mark = (player==1) ? 'X' : 'O';
		Marking_Board(choice,mark);
		
		i = Check_for_Win();
		player++;
				
	}while(i == -1);
	 Creating_Board();
	 
	 if(i == 1)
	 {
	 	printf("Player %d you have won the game",--player);
	 }
	 else
	 {
	 	printf("Match Draw.....\n\n");
	 }
 	
 	
 	return 0;
}
 
void Creating_Board()
{
	printf("---------------------------------------\n");
	printf("****************WELCOME****************\n");
	printf("\n\n\t Tic Tac Toe\n\n");
	printf("Player 1 (X) __ Player 2(O)\n\n");
	printf("     |     |      \n");
	printf(" %c    | %c   | %c   \n",box[1],box[2],box[3]);
	printf("_____|_____|_____\n");
	
	printf("     |     |      \n");
	printf(" %c    | %c   | %c   \n",box[4],box[5],box[6]);
	printf("_____|_____|_____\n");
	
	printf("     |     |     \n");
	printf(" %c    | %c   | %c   \n",box[7],box[8],box[9]);
	printf("_____|_____|_____\n");
	
	printf("     |     |      \n"); 
	printf("---------------------------------------\n");
	
}


void Marking_Board(int choice,char mark)
{
	if(choice==1 && box[1]=='1')
	{
		box[1] = mark;
	}
	else if(choice==2 && box[2]=='2')
	{
		box[2] = mark;
	}
	else if(choice==3 && box[3]=='3')
	{
		box[3] = mark;
	}
	else if(choice==4 && box[4]=='4')
	{
		box[4] = mark;
	}
	else if(choice==5 && box[5]=='5')
	{
		box[5] = mark;
	}
	else if(choice==6 && box[6]=='6')
	{
		box[6] = mark;
	}
	else if(choice==7 && box[7]=='7')
	{
		box[7] = mark;
	}
	else if(choice==8 && box[8]=='8')
	{
		box[8] = mark;
	}
	else if(choice==9 && box[9]=='9')
	{
		box[9] = mark;
	}
	else
	{
		printf("Invalid Move...\n");
	}	
}


int Check_for_Win()
{
	//Check Horizontal Match
	if(box[1]==box[2] && box[2]==box[3])
	{
		return 1;
	}
	else if(box[4]==box[5] && box[5]==box[6])
	{
		return 1;
	}
	else if(box[7]==box[8] && box[8]==box[9])
	{
		return 1;
	}
	
	//Check Vertical Match
	if(box[1]==box[4] && box[4]==box[7])
	{
		return 1;
	}
	else if(box[2]==box[5] && box[5]==box[8])
	{
		return 1;
	}
	else if(box[3]==box[6] && box[6]==box[9])
	{
		return 1;
	}
	
	//check Diagonal match
	if(box[1]==box[5] && box[5]==box[9])
	{
		return 1;
	}
	else if(box[3]==box[5] && box[5]==box[7])
	{
		return 1;
	}
	
	//No match
	else if(box[1]!='1' && box[2]!='2' && box[3]!='3' && box[4]!='4' && box[5]!='5' && box[6]!='6' && box[7]!='7' && box[8]!='8' && box[9]!='9')
    {
    	return 0;
	}
	
	else
	{
		return -1;
	}
}





















