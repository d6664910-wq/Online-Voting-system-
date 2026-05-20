#include <stdio.h>
#include <conio.h>

int main()
{
    char name[30];
    int totalVoters;
    int vote;
    int a = 0, b = 0, c = 0, d = 0;
    int i;
    int securityCode;

    printf("\n===== ONLINE VOTING SYSTEM =====\n");

    printf("\nEnter total number of voters: ");
    scanf("%d", &totalVoters);

    for(i = 1; i <= totalVoters; i++)
    {
        printf("\n--- Voter %d ---\n", i);
        printf("Enter your name: ");
        scanf("%s", name);

        printf("\nChoose your candidate:\n");
        printf("1. Candidate A\n");
        printf("2. Candidate B\n");
        printf("3. Candidate C\n");
        printf("4. Candidate D\n");
        printf("Enter your vote: ");
        scanf("%d", &vote);

        switch(vote)
        {
            case 1: a++; break;
            case 2: b++; break;
            case 3: c++; break;
            case 4: d++; break;
            default:
                printf("Invalid vote! Try again.\n");
                i--; // repeat same voter
        }
    }

    printf("\nEnter 4-digit security code to view result: ");
    scanf("%d", &securityCode);

    if(securityCode == 3421)
    {
        printf("\n===== RESULTS =====\n");
        printf("Candidate A: %d votes\n", a);
        printf("Candidate B: %d votes\n", b);
        printf("Candidate C: %d votes\n", c);
        printf("Candidate D: %d votes\n", d);

        int max = a;
        char winner = 'A';

        if(b > max) { max = b; winner = 'B'; }
        if(c > max) { max = c; winner = 'C'; }
        if(d > max) { max = d; winner = 'D'; }

        if(a==b && b==c && c==d)
        {
            printf("\nAll candidates have equal votes!\n");
        }
        else
        {
            printf("\nWinner is Candidate %c with %d votes!\n", winner, max);
        }
    }
    else
    {
        printf("\nWrong Security Code! Access Denied.\n");
    }

    getch();
}
