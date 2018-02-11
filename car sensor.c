#include<stdio.h>
int pos,km,obs,s,dest;
int main()
{
    printf("\n enter the destination in km");
    scanf("%d",&dest);
    while(dest!=0)
    {
        printf("\n enter the obstacle \n 1.speedbreaker \n 2.person \n 3.signal \n 4.exit");
        scanf("%d",&obs);
        switch(obs)
        {
            case 1:   printf("\n enter the sensor renge");
                      scanf("%d",&s);
                      if(s>0||s<=1)
                      slow();
                      else
                      move();
                      break;
                  
            case 2:
           
                printf("\n enter the sensor range");
                scanf("%d",&s);
                if(s==1)
                stop();
                else if(s>0)
                slow();
                else if(s==0)
                move();
                else
                move();
                break;
       
            case 3:printf("\n enter the signal color \n 1.red \n 2.yellow \n 3.green");
                   scanf("%d",&s);
                   if(s==1)
                   stop();
                   else if(s==2)
                   slow();
                   else
                   move();
            case 4:dest=0;
            
                   break;
        }
       } 
    } 
   
    int stop()
    { 
        printf("\n the obstacle is near to our car.so stop the car");
        return 0;
    }
    int slow()
    {
        printf("\n the car is running at th espeed 30km/hr there is a obstacle");
        return 0;
    }
    int move()
    {
        printf("\n tne car was running at the speed 60 there is no obstacle");
        printf("\n we reach the destination successfully");
        return 0;
    }

   
    
