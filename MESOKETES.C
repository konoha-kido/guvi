   #include<stdio.h>

    int dailysimulation( int* direction,int X)
   {    if(*direction<X)
        {
       *direction=*direction+X;
        return 1;
        }
        else return 0;
   //return(*direction);
   }

   int main()
   {
   int N=0,S=0,E=0,W=0,index=0,X=5,days_attacked=0,total_days=0;
   int* pointer[4]={&N,&S,&E,&W};
   char side_of_wall;

   printf("How many days was mesoketes attacked ?");
   scanf("%d",&total_days);


   while(total_days)
   {
       printf("%d\n",total_days);
    scanf("%c - %d",&side_of_wall,&X);

    if(side_of_wall=='N')index=0;
    else if(side_of_wall=='S')index=1;
    else if(side_of_wall=='E')index=2;
    else if(side_of_wall=='W')index=3;

   if(dailysimulation(pointer[index],X))
   {days_attacked++;}

   total_days--;

    }


   printf("\nN : %d\n",N);
   printf("\nS : %d\n",S);
   printf("\nE : %d\n",E);
   printf("\nW : %d\n",W);

   printf("\nDays attacked : %d\n",days_attacked);


   }
