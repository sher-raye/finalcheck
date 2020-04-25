#include <stdio.h>
#include <stdlib.h>



float amount=10000;
int withdraw;
char ch;
int deposit;
int Quit;
//for here im trying to use function for the balance, withdraw, deposit and quit
void checkbalance();
void withdrawal();
void desposit();
void quit();

int transaction( void );

int main( void )
{

  int pin, repeat;
  printf("Please enter pin: ");
  fflush( stdout );
  scanf("%d", &pin);
  printf( "\n" );

  while ( pin != 1520 )
  {
    printf("Invalid input\n");
    printf("Please enter pin again: ");
    fflush( stdout );
    scanf("%d", &pin);
    printf( "\n" );
  }

 printf("You can now continue...\n\n");

  do
  {
      repeat = transaction();
  } while( repeat == 1 );

  return 0;
}

int transaction( void )
{

    int choice, exit_loop = 0, inner_loop = 1;

    while( exit_loop == 0 )
    {

        printf("********************************************************************\n");
        printf("****************Welcome to NEWBORN BANK ATM Services****************\n");
		printf("***************         SELECT OPTIONS             *****************\n");
		printf("********************************************************************\n");
		printf("\t\t[1] Check Balance\n");
		printf("\t\t[2] Withdraw Cash\n");
		printf("\t\t[3] Deposit Cash\n");
		printf("\t\t[4] Quit\n");
		printf("\n********************************************************************\n");
		printf("\t\tEnter your number: ");
          fflush( stdout );
		scanf("%d", &choice);
          printf( "\n" );

  switch(choice)
       {

      case 1:
          float amount;
      printf("\nYOUR BALANCE ON YOUR ACCOUNT IS: %f\n\n", amount);
      exit_loop = 1;
      break;

     case 2:
         int withdraw;
        while( inner_loop == 1 )
        {
        printf("Please enter amount to withdraw: ");
        fflush( stdout );
        scanf("%d", &withdraw);
        printf( "\n" );


        if (withdraw % 100 != 0)
		{
		printf("ENTER THE AMOUNT IN MULTIPLES OF 100.\n\n");
		}
		else if (amount<500)
	    {
	     printf("INSUFFICENT BALANCE LESS THAN 500$\n\n");
              inner_loop = 0;
     	}
        else if(withdraw>amount)
		{
        printf("There is insuffient Balance in account.\n\n");
              inner_loop = 0;
          }
	    else
		{
				amount = amount - withdraw;
				printf("COLLECT CASH BELOW\n");
				printf("YOUR BALANCE IS: %f\n\n", amount);
                    inner_loop = 0;
		}
         }
         exit_loop = 1;
         break;

    case 3:
    float deposit;

    printf("Please enter amount to deposit: ");
    fflush( stdout );
    scanf("%d", &deposit);
    printf( "\n" );
   amount = deposit + amount;
    printf("Thank you for depositing, new balance is: %f\n\n", amount);
    exit_loop = 1;
    break;

    case 4:
        int quit;
    	printf("**THANKS FOR USING OUR ATM SERVICE**\n");
         return 0;

       default:
			printf("INVALID NUMBER.\n\n");
    }
   }

   printf("DO U WISH TO HAVE ANOTHER TRANSCATION? (y/n): ");
   fflush( stdout );
   ch = getchar();
   printf( "\n" );
   if (ch == 'y'|| ch == 'Y')
   {
       return 1;
   }
   else
   {
       printf("THANKS FOR USING OUT ATM SERVICE\n");
       return 0;
   }
}

//i trying to use functions/function call withing the switch statement for check balance, withdraw, deposit and quit. but receiving an error


