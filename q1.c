// Q)1. armstrong number : it is a no. that is equal to the sum of its own digits each raised to the power of the no. of digits.
    int num, originalnum, remainder, n=0;
    double result = 0.0;
    printf("enter an integer :");
    scanf("%d", &num);
    originalnum = num;
    while(originalnum != 0){
        originalnum /= 10;
        ++n;
    }
    originalnum = num;
    while(originalnum != 0){
        remainder = originalnum % 10;
        result += pow(remainder,n);
        originalnum /= 10;
    }
    if((int)result == num)
    printf("%d is an armstrong number. \n", num);
    else
    printf("%d is not an armstrong number. \n", num);
