#include <iostream>

int main()
{
    int nData{};
    int nDiv{};
    int nTotal{};

    scanf("%d %d",&nData,&nDiv);
    while(nData>1)
    {
        if(nData%nDiv==0)
        {
            nData/=nDiv;
            nTotal++;
        }
        else
        {
            nData-=1;
            nTotal++;
        }
    }
    printf("%d",nTotal);
}
