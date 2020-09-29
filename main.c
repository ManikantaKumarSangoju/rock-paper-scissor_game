#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    while(1)
    {
        int user,randomindex;
        char computer[20],userselection[20];
        printf("\nplease enter your choice\n");
        printf("1-rock\n2-paper\n3-scissor \n4-exit\n");
        scanf("%d",&user);
        char arr[3][20]={"rock","paper","scissor"};
        randomindex =   rand()% 3 + 1;
        strcpy(computer,arr[randomindex-1]);
        printf("%s\n",computer);
        switch(user)
        {
            case 1:if(randomindex==1)
                   {
                        printf("it is a draw\n");
                        printf("The computer has chosen %s\t an u have chosen %s",computer,arr[user-1]);
                   }
                   else if(randomindex==2)
                   {
                        printf("oops u have lost it\n");
                        printf("The computer has chosen %s\t an u have chosen %s",computer,arr[user-1]);
                   }
                   else
                   {
                        printf("hey!! u have won\n");
                        printf("The computer has chosen %s\t an u have chosen %s",computer,arr[user-1]);
                   }
                   break;
            case 2:if(randomindex==2)
                   {
                        printf("it is a draw\n");
                        printf("The computer has chosen %s\t an u have chosen %s",computer,arr[user-1]);
                    }
                    else if(randomindex==3)
                    {
                        printf("oops u have lost it\n");
                        printf("The computer has chosen %s\t an u have chosen %s",computer,arr[user-1]);
                    }
                    else
                    {
                        printf("hey!! u have won\n");
                        printf("The computer has chosen %s\t an u have chosen% s",computer,arr[user-1]);
                    }
                    break;
            case 3:if(randomindex==3)
                    {
                        printf("it is a draw\n");
                        printf("The computer has chosen %s\t an u have chosen %s",computer,arr[user-1]);

                    }
                    else if(randomindex==1)
                    {
                        printf("oops u have lost it\n");
                        printf("The computer has chosen %s\t an u have chosen %s",computer,arr[user-1]);
                    }
                    else{
                        printf("hey!! u have won\n");
                        printf("The computer has chosen %s\t an u have chosen %s",computer,arr[user-1]);
                    }
                    break;
            case 4:return 0;
        }

    }
}
