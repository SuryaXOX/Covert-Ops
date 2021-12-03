#include <stdio.h>
#define N 4

int f0();
int f1();
int f2(int i);
void f3(int val, int* Ptr);

int F3_H(int*Ptr);
int Is_Number_Correct(int a, int b, int Num);

int main() {
    int i;
    int n[N];
    int a[N];
    int c = 0;

    // get numbers from user
    printf("Enter four numbers: ");
    for (i = 0; i<N; i++) scanf("%d", &n[i]);
    printf("\nYou have entered: %d, %d, %d, %d\n",n[0], n[1], n[2], n[3]);
    
    // get answers
    a[0] = f0(); 
    a[1] = f1();
    a[2] = f2(i);
    a[3] = 4046;  
    f3(a[3], &a[3]);

    // print answers
    //for (i = 0; i< N; i++) printf("answers #%d = %d\n",i,a[i]);

    // test 
    c += Is_Number_Correct(n[0], a[0], 0);
    c += Is_Number_Correct(n[1], a[1], 1);
    c += Is_Number_Correct(n[2], a[2], 2);
    c += Is_Number_Correct(n[3], a[3], 3);

    // report results
    if (c==0) printf("You didn't get any correct numbers. Please try again.\n");
    if (c > 0 && c < N) printf("You got %d correct numbers.  Please try again.\n", c);
    if (c==N) printf("All numbers are correct! Nice work!\n");

    return 0;
}

// Function returns Static Number.
int f0 () {
    return 5589516;
}

// Function returns the Remainder.
int f1 () {
    
    int nums[6] = {25027, 51330, 67548, 30404, 49, 17};
    
    // Putting the value of the sum of nums[0] & nums[1] into val.
    int val = nums[0] + nums[1];

    if (nums[0] <= val) 
    {
        val = nums[0] * nums[1];     
    } 
    else 
    {
	// RSB by 1
        nums[0] = nums[0] >> 1;
        
	val = nums[0];
    }   
 
    if (nums[3] >= val) 
    {
        val = nums[3];
        
	val = val % nums[5];
    }
    else 
    {
        val = nums[2];
        
	val = val % nums[4];
    }
    
    // Remainder.
    return val;
}

// Function that calculates and returns the total value
// Takes i as parameter which is used in calculating the total value while looping
int f2 (int i) {
    
    int value = 0;
    
    int x = 0;
	
    // While Loop calculates the total value
    while (x <= 27) {
        
	value = value + (x * x + i);
        x++;
    }

    // total value
    return value;
}

// Function that increments the * Ptr pointer by 3 whens it's called.
void f3 (int val, int* Ptr) {
    
    // increments the * Ptr pointer by 3 whens it's called.
    F3_H(Ptr);
    
    // increments the * Ptr pointer by 3 whens it's called.
    F3_H(Ptr);
   
    // LSB by 3 
    *Ptr = *Ptr << 3;    
    
    // Updates the pointer by adding val
    *Ptr = *Ptr + val;
}

// Helper for void f3 (int val, int* Ptr)
int F3_H(int* Ptr) {
 
 //increments the * Ptr pointer by 3  
 *Ptr = *Ptr + 3;

}

// Compares the correct/actual values with the values input by the user.
// Returns 1 or 0 accordingdly.
int Is_Number_Correct(int a, int b, int Num) {
    
    if (a == b)
    { 
        printf("Number %d: Correct\n", Num);
        return 1;
    } 
    else 
    {
        printf("Number %d: Incorrect\n", Num);
        return 0;
    }
}   



