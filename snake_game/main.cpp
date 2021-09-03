#include <iostream>

bool g_gameOver;

const int g_width { 20 };
const int g_height { 20 };

int g_x{}, g_y{};
int g_fruitX{}, g_fruitY{}; // Food location
int g_score{};

enum eDirection
{
    STOP = 0,
    LEFT,
    RIGHT,
    UP,
    DOWN
};
eDirection g_dir;

void Setup()
{
    g_gameOver = false;

    g_dir = STOP;

    g_x = static_cast<int>(g_width / 2);
    g_y = static_cast<int>(g_height / 2);

    g_fruitX = static_cast<int>(rand() % g_width);
    g_fruitY = static_cast<int>(rand() % g_height);

    g_score = 0;
}

void Draw()
{
    system("cls");
    /*==================MAP=======================*/
    for (int i { 0 }; i < g_width+2; i++)
        std::cout << "#";
    std::cout << std::endl;

    /*Height*/
    for (int i { 0 }; i < g_height; i++)
    {
        for (int j { 0 }; j < g_width; j++)
        {
            (!j) ? std::cout << "#" : std::cout << "";
            /* Print head snake */
            if (i == g_y && j == g_x)
                std::cout << "o";
            /* Print food */
            else if (i == g_fruitY && j == g_fruitX)
            {
                std::cout << "@";
            }
            
            else
                std::cout << " ";

            (j == g_width-1) ? std::cout << "#" : std::cout << "";
        }
        std::cout << std::endl;
    }

    for (int  i { 0 }; i < g_width+2; i++)
        std::cout << "#";
    std::cout << std::endl;
    /*=========================================*/
}

void Input()
{

}

void Logic()
{
   
    
}

int main()
{
     Setup();
    while (!g_gameOver)
    {
        Draw();
        Input();
        Logic();
    }
    return 0;
}