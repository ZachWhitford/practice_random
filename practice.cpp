



// C program to print all permutations with duplicates allowed
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>  

using namespace std; 

/* Function to print permutations of string
   This function takes three parameters:
   1. String
   2. Starting index of the string
   3. Ending index of the string. */


 void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
 
void permute(char *a, int l, int r,int &num_perm)
{
   int i;
   if (l == r){
     cout<<a<<endl; 
     ++num_perm; 
 }
   else
   {
       for (i = l; i <= r; i++)
       {
          swap((a+l), (a+i));
          permute(a, l+1, r,num_perm);
          swap((a+l), (a+i)); //backtrack
       }
   }
}



void longest_prefix(vector<string>& str_vec){ 

int shortest = str_vec[0].size(); 

//find the shortest string 
for(int i = 1; i < (int) str_vec.size(); ++i){

  ((int) str[i].size() > shortest) ? (shortest = str[i].size() : shortest = shortest); 

}





}
 
/* Driver program to test above functions */
int main()
{
    char str[] = "ABCEFG";
    int n = strlen(str);
    int num_perm = 0; 
    permute(str, 0, n-1,num_perm);
    cout<<"The number of permutations was : "<<num_perm<<endl; 
    return 0;
}