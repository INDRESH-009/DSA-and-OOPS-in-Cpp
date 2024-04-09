/* Topics covered 
        1.Solid rectangle
        2.Solid square - as stars 
        3.Solid square -  as numbers 
        4.Star Triangle 
        5.Inerted star Triangle
        6.Number triangle
        7.Number square with row full of row number
        8.Odd number triangle 
        9.Solid square with alphabets 
        10. Alphabet triangle 
        11.Star Plus pattern 
        12.Star Cross pattern 
        13.Floyds triangle
        14.Binary triangle 
        15. Star triangle flipped




 */
#include <iostream>
using namespace std;
int main(){
    /* .............................................................................................................. */
    /* 01. Print a solid rectangle , take the no.of rows and colums as input from the user  */
    cout<<"Solid rectangle"<<endl;
    int row1,col1;
    cout<<"No of rows : ";
    cin>>row1;
    cout<<"No of columns : ";
    cin>>col1;
    for(int i=1;i<=row1;i++){
        for(int j=1;j<=col1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    /* the outer loop is responsible for printing the no.of rows and at each iteration it goes to the new line , the innner loop prints the no.of starts in each row */
    /* .............................................................................................................. */

    /* 2.Print a solid square taking the side as input */
    cout<<"Solid square - star"<<endl;
    int side1;
    cout<<"Enter the side length : ";
    cin>>side1;
    for(int i=1;i<=side1;i++){
        for(int j=1;j<=side1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    /* .............................................................................................................. */
    /* 3.Print a solid square taking the side as input in form of numbers */
    /*  Example : 
            1 2 3 4
            1 2 3 4
            1 2 3 4
            1 2 3 4  
        Simply print the iterator j in the inner loop as it moves from 1 to side2 value 
     */
    cout<<"Solid square - numbers "<<endl;
    int side2;
    cout<<"Enter the side length : ";
    cin>>side2;
    for(int i=1;i<=side2;i++){
        for(int j=1;j<=side2;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    /* .............................................................................................................. */
    /* 4.Print the below pattern by taking the height of the triangle as input
                *
                * *
                * * *
                * * * * 
                * * * * *
     */
    cout<<"Star triangle"<<endl;
    int height1;
    cout<<"Height of the star triangle : ";
    cin>>height1;
    for(int i=1;i<=height1;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    /* In this for each iteration of outer loop , the inner loop should print the stars such that no.of star = row number ,viz i in this case , So the inner loop works till j<=i */
    }
    /* .............................................................................................................. */
    /* 5.Print the below pattern by taking the height of the triangle as input
      
                * * * * *
                * * * *
                * * *
                * *
                * 
     */
    cout<<"Inverted star triangle"<<endl;
    int height2;
    cout<<"Height of the star triangle : ";
    cin>>height2;
    for(int i=height2;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
    cout<<endl;
    /* In this as we are going inverted lets change the way the outerloop runs , let i start from the highest row value and decrement to 1 , and the inner loop prints the no.of stars inthe rows based on the row number ( i ) */
    }
/* .............................................................................................................. */
    /* Another method  - Look at the inverted triangle patter , 
     *                   row number + no.of starts in that row = row_no + 1
                         So for each row if print (row_no+1-i) stars then we get the inverted triangle
     */
    
    cout<<"Alternate method"<<endl;
    int row_no;
    cout<<"Enter no.of rows : ";
    cin>>row_no;
    for(int i=1;i<=row_no;i++){
        for(int j=1;j<=row_no+1-i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

/* .............................................................................................................. */
    /* 4.Print the below pattern by taking the height of the triangle as input
                1
                1 2
                1 2 3 
                1 2 3 4
                1 2 3 4 5                      
     */
    cout<<"Number triangle"<<endl;
    int height3;
    cout<<"Height of the star triangle : ";
    cin>>height3;
    for(int i=1;i<=height3;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

/* .............................................................................................................. */
/* 7.Print a solid square taking the side as input and print each row with its row number */
    /*  Example : 
            1 1 1 1 
            2 2 2 2
            3 3 3 3
            4 4 4 4  
     */
    cout<<"Solid square - numbers "<<endl;
    int side3;
    cout<<"Enter the side length : ";
    cin>>side3;
    for(int i=1;i<=side3;i++){
        for(int j=1;j<=side2;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
/* .............................................................................................................. */
 /* 8.Print the below pattern by taking the height of the triangle as input
                1
                1 3
                1 3 5 
                1 3 5 7
                1 3 5 7 9   
        We can see that for each row number the max column number is 2*row-1 , for eg - 
            1st row - max col value = 2*1-1 = 1
            2nd row - max col value = 2*2-1 = 3
            3rd row - max col value = 2*3-1 = 5
            4th row - max col value = 2*4-1 = 7  
        so j<=2*row-1 and print all odd numbers                 
     */
    cout<<"Odd Number triangle"<<endl;
    int height4;
    cout<<"Height of the star triangle : ";
    cin>>height4;
    for(int i=1;i<=height3;i++){
        for(int j=1;j<=(2*i-1);j++){
            if(j%2!=0){
                cout<<j<<" ";
            }
            
        }
        cout<<endl;
    }

    /* .............................................................................................................. */
    /* 9.Print the below pattern by taking the side of square as input
                    A B C D
                    A B C D 
                    A B C D
                    A B C D 
    */
   int side4;
   cout<<"Enter the side length : ";
   cin>>side4;
   for(int i=1;i<=side4;i++){
    for(int j=1;j<=side4;j++){
        cout<<char(j+64)<<" ";
    }
    cout<<endl;
   }
   /* .............................................................................................................. */
    /* 10.Print the below pattern by taking the height of the triangle as input
                    A
                    A B  
                    A B C 
                    A B C D 
        In this case we are going to iterate j from 65 to 65+i based on the row number 
    */
   int height5;
   cout<<"Enter the height of the triangle : ";
   cin>>height5;
   for(int i=1;i<=height5;i++){
    for(int j=1;j<=i;j++){
        cout<<char(j+64)<<" ";
    }
    cout<<endl;
   }
    /* .............................................................................................................. */
    /* 11.Print the below star plus pattern by taking n1 as input where n1 represents the row and column where the + sign should print . Note that teh cionstrain is the value of n1 should always be odd number.
                *
                *
            * * * * *
                * 
                *     
                 
       In this case all + pattern can be considered as a square . 
             _ _ _ _ _
            |    *    |
            |    *    |
            |* * * * *| 
            |    *    |
            |_ _ * _ _|
        based on the above diagram we see that if a user gives n1 = 3 then the square size is (2*3-1)
        if n1 = 5 the square is of side 2*5-1 = 9;
        based on n1 , size of square is (2*n1-1);
        So once we know n1 and the size of square , we can write a program such that it prints star only on the n1th row and column

    */
   int n1;
   cout<<"Enter the value of n1 (row and column where we need to print the *) : ";
   cin>>n1;
    for(int i=1;i<=(2*n1-1);i++){
        for(int j=1;j<=(2*n1-1);j++){
            j==n1&&i!=n1?cout<<"*":cout<<" ";
            i==n1?cout<<"*":cout<<" ";

        }
        cout<<endl;
    }
/* .............................................................................................................. */
    //Alternate problem - If input n2 is the diension of the square the print the plus star pattern . In this case n2 is not the row or column that we need to print the star , it is the dimension of the square itself . To print the plus pattern the valur of n2 should always be odd

    int n2,mid;
    cout<<"Enter rthe dimensiuon of the square you want t print the star pattern in : ";
    cin>>n2;
    //for odd numbers mid = n2/2+1;
    mid = n2/2+1;
    for(int i=1;i<=n2;i++){
        for(int j=1;j<=n2;j++){
            if(j==mid||i==mid){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
/* .............................................................................................................. */
    /*12. Print the star cross pattern with a given input n3 which is the sode of the square
                        *    *
                         *  *
                          *
                         *  *
                        *    *    
            This pattern is also similar to a square where the points that are in the cross are printed with * and the other points are printed with space
        We see that for a particular row it is printed in 2 places - in j==row and in j==2*mid-row
        Here : 
            if n3 = 5
            mid = 3
            Row 1 : 1,2*3-1 = 1,5
            Row 2 : 2,2*3-2 = 2,4
            Row 3 : 3,2*3-3 = 3,3
            Row 4 : 4,2*3-4 = 4,2
            Row 5 : 5,2*3-5 = 5,1
    */
   int n3,mid1;
   cout<<"Enter the square size n3 : ";
   cin>>n3;
   mid1 = n3/2+1;
   for(int i=1;i<=n3;i++){
    for(int j=1;j<=n3;j++){
        if(j==i||j==(2*mid1-i)){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
   }

/* .............................................................................................................. */
    //Alternate idea = for a given square if side n3, * is printed at 2 places for a row 
/*          if column ==row number 
 *          if row+column == n3+1
 */
    int n4;
   cout<<"Enter the square size n4 : ";
   cin>>n4;
   for(int i=1;i<=n4;i++){
    for(int j=1;j<=n4;j++){
        if(j==i||i+j==n4+1){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
   }

/* .............................................................................................................. */
 /* 13.Print the below pattern by taking the height of the triangle as input - Floyds triangle 
                1
                2 3 
                4 5 6 
                7 8 9 10 
        since we want to print the numbers in increasing order without repeating we are going to use a new variable declared outside the loop and with each iteration its value is incremented by 1
*/
    int n5;
    cout<<"Enter the height of the triangle : ";
    cin>>n5;
    int counter = 1;
    for(int i=1;i<=n5;i++){
        for(int j=1;j<=i;j++){
            cout<<counter<<" ";
            counter++;
        }
        cout<<endl;
    }
/* .............................................................................................................. */
 /* 14.Print the below pattern by taking the height of the triangle as input - Binary triangle 
                1
                0 1 
                1 0 1 
                0 1 0 1 

    concept 01- we observe that if row + column number is even it is 1 else it is 0
                
    */
   int n6;
    cout<<"Enter the height of the triangle : ";
    cin>>n6;
    for(int i=1;i<=n5;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1"<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
/* .............................................................................................................. */
    //  Alternate method - We can also see that 1 and 0 are coming as alternatives , so we can use fliping , also we see   that odd rows start with 1 and even rows start with 0
    int n7;
    cout<<"Enter the height of the triangle : ";
    cin>>n7;
    int counter1;
    for(int i=1;i<=n7;i++){
        if(i%2==0) counter1 = 0;
        else counter1 = 1;
        for(int j=1;j<=i;j++){
            cout<<counter1<<" ";
            if(counter1 == 0)   counter1 = 1;
            else    counter1 = 0;
        }
        cout<<endl;
    }
/* .............................................................................................................. */

    /* 15.Print the below pattern by taking the height of the triangle as input - Star triangle flipped 
     *                      *
                          * *
                        * * *
                      * * * *
                    * * * * *
                
    */




















    return 0;

}