// #include<stdio.h>
//     int main() {
//         int roll;
//         printf("enter ur roll no");
//         scanf("%d",&roll);
//         printf("my roll no is %d", roll);
//         return 0;
//     }


//ADDITION OF TWO NUMBER :--
// #include<stdio.h>
//     int main(){
//         int a, b;
//         printf("enter a ");
//         scanf("%d", &a);

//         printf("enter b");
//         scanf("%d", &b);

//         printf("sum is : %d", a + b);
//         return 0;
//     }


//WRITE A PROGRAM TO CALCULATE AREA OF A SQURE ????
// #include<stdio.h>
// int main(){
//     int side_of_squre;
//     printf("enter the side of squre = ");
//     scanf("%d", &side_of_squre);

//     printf("area of the squre is : %d" ,side_of_squre * side_of_squre);
//     return 0;
// }



//WRITE A PROGRAM TO CALCULATE THE AREA OF A CIRCLE ????
// #include<stdio.h>
// int main(){
//     float radius;
//     printf("enter the radius of the circle");
//     scanf("%f", &radius);
    
//     printf("area of the circle is : %f", 3.14*radius*radius);
//     return 0;
// }



//WRITE A PROGRAM TO CALCULATE PERIMETER OF A REACTAMGLE. TAKE SIDES  
// #include<stdio.h>
//      int main(){
//         float length;
//         printf("enter the length of the rectangle");
//         scanf("%f", &length);

//         float breadth;
//         printf("enter the breadth of the rectangle");
//         scanf("%f", &breadth);

//         printf("perimetre of squre is : %f", length * breadth);
//         return 0;
//      }


     //TAKE A NUMBER (n) FROM USER & OUTPUT ITS CUBE ?????
// #include<stdio.h>
//    int main(){
//       float number;
//       printf("enter the number = ");
//       scanf("%f", &number);

//       printf("the cube of the given number is : %f", number*number*number);
//       return 0;

//    }


//TAKE 3 NUMBERS AS INPUT AND PRINT THEIR AVERAGE ???
// #include<stdio.h>
// int main(){
//    float num_1;
//    printf("enter the first number = ");
//    scanf("%f",&num_1);

//    float num_2;
//    printf("enter the second number = ");
//    scanf("%f", &num_2);

//    float num_3;
//    printf("enter the third number = ");
//    scanf("%f", &num_3);

//    float num_4 = num_1 + num_2 + num_3;
   
//    printf("the average of the numbers entered are = %f", num_4 / 3); 
//    return 0;
// }

//short method
// #include<stdio.h>
// int main(){
//    float a,b,c;
//    printf("enter three numbers : ");
//    scanf("%f %f %f", &a, &b, &c);

//    float average=(a+b+c) / 3;
//    printf("average= %.2f\n", average);
//    return 0;
// }


//TAKE 3 INTEGERS AS INPUT AND PRINT THEIR SUM AN DPRINT THEIR AVERAGE????
// #include<stdio.h>
// int main(){
//    int a,b,c;
//    printf("enter 3 numbers : ");
//    scanf("%d %d %d", &a, &b, &c);
   
//    printf("sum is : %d", a+ b+ +c);
//    int average=(a+b+c)/3;

//    printf("\naverage is : %d", average);
//    return 0;
// }


// #include<stdio.h>
// int main(){
//    int p, q;
//    printf("enter value of p and q");
//    scanf("%d %d",&p, &q);
//    printf("p= %d q= %d", p, q);
//    return 0;
// }



//WAP TO TAKE TWO INTEGERS INPUT a, b:a>b, AND FIND THE REMAINDER WHEN a IS DIVIDED BY b. 
// #include<stdio.h>
// int main(){
//    int a, b, r; //take a > b
//    printf("enter two number");
//    scanf("%d %d",&a, &b);
//    r = a % b;
//    printf("the remainder is %d", r);
//    return 0;
// }



//WAP TO TAKE INPUT OF A FLOAT POSITIVE NUMBER  AND PRINT IT FRACTIONAL PART ONLY ???
#include<stdio.h>
int main(){
   float A;
   printf("enter a decimal number");
   scanf("%f",&A);
   int B;
   B=A;//here A is float value so when we equal A to B we get the integer part of the A cuz B is a integer  value....
   float C=A - B;// when we substract the the integer part from a decimal no we get the fractional part...
   printf("THE FRACTIONAL PART OF THE ENTERED DECIMAL NO IS : %f", C);
   return 0;
}