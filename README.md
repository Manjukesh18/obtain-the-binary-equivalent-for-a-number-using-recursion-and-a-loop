# obtain-the-binary-equivalent-for-a-number-using-recursion-and-a-loop
It is a c program to obtain the binary equivalent for a number using recursion and also with a loop. Its a question from let us c book.

Illustration:

           r1:                     r2               r3            r4                        r5
        x=n%2;                 //x=1              x=0             x=1                      x=1
        rem=rem+(x*place);     //rem=0+(1*1)     rem=1+0          rem=1+(1*100) i.e 101    rem=101+(1*1000) =>1101
        place=10*place;        //place=10        //place=100      place =1000
        n=n/2;                 //n=6              n=3             n=1
    
