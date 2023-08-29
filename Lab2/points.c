#include <stdio.h>
#include<math.h>

struct pt{
    int x;
    int y;
};
float distance (struct pt p1, struct pt p2)
{
    float n = sqrt((p2.x-p1.x)*(p2.x-p1.x) + (p2.y-p1.y)*(p2.y-p1.y));
   return n;
   
}
int main() {
    // Enter CoDe
    struct pt points[10] = {
       {0,0},
       {2,3},
       {1,2},
       {2,4},
       {5,2},
       {6,3},
       {4,4},
       {1,3},
       {0,5},
       {2,6},
    };

        distance(points[0],points[8]);
        printf("\n\n");

        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                float z = distance(points[i],points[j]);
                printf("%f, ",z);
            }printf("\n");
        }printf("\n\n");

        float array[10][10];
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                array[i][j] = distance(points[i],points[j]);    
            }
        }

        printf("\n Given Distance Matrix\n");
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                printf("%f, ",array[i][j]);    
            }printf("\n");
        }

        float x = array[0][1];

        int pt1index = 0;
        int pt2index = 1;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(x>array[i][j] && i!=j)
                {
                    x = array[i][j];
                    pt1index = i;
                    pt2index = j;
                }   
            }
        }printf("Smallest distance is %f\n",x);
        printf("Coordinates of 1st point %d , %d\n",points[pt1index].x,points[pt1index].y);
        printf("Coordinates of 2nd point %d , %d\n",points[pt2index].x,points[pt2index].y);

        printf("\nTranspose of the Matrix\n");
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                printf("%f, ",array[j][i]);    
            }printf("\n");
        }
        int count=0;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(array[j][i]==array[i][j]);
                {
                    count++;
                }    
            }
        }

        if(count!=0)
        {
            printf("Its a SYMMETRIC MATRIX");
        }
        else
        {
            printf("NON-SYMMETRIC MATRIX");
        }



                            
    return 0;
}