#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

float countLetters (string sentence);
float countWords (string sentence);
float countSen (string sentence);
int const num=100;

int main (void){


     string sample=get_string("Text:");
     float letters=countLetters(sample);
     //printf("Count:%f\n",letters);
     float words=countWords(sample);
     //printf("Count:%f\n",words);
     float sen=countSen(sample);
     //printf("Count:%f\n",sen);

    float L=letters/words*num;
    //printf("L:%f\n",L);
    float S=num/words*sen;
    //printf("S:%f\n",S);
    double index = 0.0588 * L - 0.296 * S - 15.8;
    //printf("Index:%f\n",round(index));
    if (index<1){

         printf("Grade:1\n");
    }

    else if (index>1 && index<16){

         printf("Grade:%.0f\n",round(index));
    }

    else {

         printf("Grade:16+\n");
    }


}

float countLetters (string sentence){

    float count=0;
    int len=strlen(sentence);
    for (int i=0;i<len;i++)
    {
        if (isalpha(sentence[i]))
        {
            count++;
        }

    }
    return count;

}
float countWords (string sentence){

    float count=0;
    int len=strlen(sentence);
    for (int i=0;i<len;i++)
    {
        if (isspace(sentence[i]))
        {
              count++;
        }
    }
    return count+1;

}

float countSen(string sentence){
    float count=0;
    int len=strlen(sentence);

    for (int i=0;i<len;i++)
    {
        if (sentence[i]=='!'||sentence[i]=='?'||sentence[i]=='.')
        count++;
    }
    return count;

}