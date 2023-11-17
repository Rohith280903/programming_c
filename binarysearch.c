//Code for binary search
#include<stdio.h>
main()
int beg=0,end=n-1;
int mid;
while(beg<end)
{
mid=(beg+end)/2;
if(a[mid]==ele)
{
loc=mid;
break;
}
else if(a[mid]>ele)
{
end=mid-1;
}
else
{
beg=mid+1;
}
}
