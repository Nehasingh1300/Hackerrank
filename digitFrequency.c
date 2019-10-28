//Neha Singh 6:39 monday 28 october, 2019
//Given a string,s , consisting of alphabets and digits, find the frequency of each digit in the given string.

#include<stdio.h>
#include<strings.h>

int main(){
    char s[1000];
    scanf("%s",&s);
    int res[10]={0,0,0,0,0,0,0,0,0,0}; 

    for(int i=0; i<strlen(s); i++){
        if(s[i]=='0')
            res[0]=res[0]+1;
        else if(s[i]=='1')
            res[1]=res[1]+1;
        else if(s[i]=='2')
            res[2]=res[2]+1;
        else if(s[i]=='3')
            res[3]=res[3]+1;
        else if(s[i]=='4')
            res[4]=res[4]+1;
        else if(s[i]=='5')
            res[5]=res[5]+1;
        else if(s[i]=='6')
            res[6]=res[6]+1;
        else if(s[i]=='7')
            res[7]=res[7]+1;
        else if(s[i]=='8')
            res[8]=res[8]+1;
        else if(s[i]=='9')
            res[9]=res[9]+1;
        else 
            continue;
    }

    for(int i=0; i<10; i++)
        printf("%d ", res[i]);

}

