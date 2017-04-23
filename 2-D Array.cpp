#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int arr[6][6];
    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){
          
          scanf("%d",&arr[arr_i][arr_j]);
           
       }
    }
    int one,two,three,four,five,six,seven,sum,tmp;
    int n=6;
    sum=-63;
    for(int index=0;index<n;index++)
    {

        for(int indexcol=0;indexcol<n;indexcol++)
        {
            if(indexcol+2< n && index+2<n)
            {
    			one=arr[index][indexcol];
    			two=arr[index][indexcol+1];
    			three=arr[index][indexcol+2];
    			four=arr[index+1][indexcol+1];
    			five=arr[index+2][indexcol];
    			six=arr[index+2][indexcol+1];
    			seven=arr[index+2][indexcol+2];
    			tmp=one+two+three+four+five+six+seven;
    	   }
            // printf("\n %d %d",tmp,sum);
			if(tmp > sum)
			{
				sum=tmp;
			}

		}
	}

    printf("%d\n", sum );
    return 0;
}
