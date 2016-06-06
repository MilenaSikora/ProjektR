#include<stdio.h>

main()
{
    int isValid = -1;
    if(mm<0 || mm>12) {
        is Valid =-1;
    }
    else {
        if((mm==1) || (mm=3) || (mm=5) || (mm=7) || (mm=8) || (mm=10) || (mm=12)) {
            if((dd>0) && (dd<=31))
                isValid=1;
        } else if ((mm==4) || (mm==6) || (mm=9) || (mm=11)) {
                if ((dd>0) && dd<=30))
                isValid=1;
        } else {
            if(isLeapYear(yyyy)) {
                if((dd>0) && dd<30)
                    isValid=1;
            } else {
                if((dd>0) && dd<29)
                    isValid=1;
            }
        }
    }
    return isValid;
}
