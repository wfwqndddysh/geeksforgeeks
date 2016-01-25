#include<vector>
#include<iostream>

int countSolution(const std::vector<int>& coffe, size_t start, int rhs)
{
    if(rhs==0) return 1;

    int ret = 0;

    for(size_t i=start; i<coffe.size(); ++i)
    {
        if(coffe[i]<=rhs)
        {
            ret += countSolution(coffe, i, rhs-coffe[i]);
        }
    }

    return ret;
}

int main(void)
{
    std::vector<int>  coffe {2, 2, 5};
    int result = 4;
    std::cout<<countSolution(coffe, 0, result);
    return 0;
}

