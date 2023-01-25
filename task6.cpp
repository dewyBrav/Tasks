#include <iostream>


enum Items
{
    POISON_HEALTH,
    TORCH,
    ARROWS,
    MAX_ITEM

};

//возвращает общее кол-во предметов
int countTotalItems(int *count)
{
    int maxCount=0;
    for(int i=0;i<MAX_ITEM; ++i)
    {
        maxCount+=count[i];
    }

    return maxCount;
}


int main()
{
    int count[MAX_ITEM] {3,6,12};

    std::cout<<countTotalItems(count)<<std::endl;

    return 0;
}