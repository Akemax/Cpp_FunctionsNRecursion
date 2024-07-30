#include <iostream>
#include <vector>

double GetAvg(double x, double y)
{
    return (x + y) / 2.0;
}

void GetOddsEvens(std::string str, std::vector<int>& v)
{
    if (str == "true")
    {
        for (auto s : v)
        {
            if (s % 2 == 0)
            {
                std::cout << s << std::endl;
            }
        }
    }
    if (str == "false")
    {
        for (int s : v)
        {
            if (s % 2 == 1)
            {
                std::cout << s << std::endl;
            }
        }
    }
}

int main(int argc, char** argv) {
    
    try {
        double x = 10.0;
        double y = 20.0;
        std::cout << GetAvg(x, y) << std::endl;
    }
    catch (std::invalid_argument& e) {
        std::cout << "One or more invalid arguments." << std::endl;
    }

    std::vector<int> v = { 1, 2, 3, 4, 5 };
    std::string s = "true";
    GetOddsEvens(s, v);
    return 0;
}
