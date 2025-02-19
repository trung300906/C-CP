#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <ncurses.h>

using namespace std;

const int WIDTH = 40;
const int HEIGHT = 20;
const int SPEED = 100000; // Microseconds

enum DIRECTION { STOP = 0, LEFT, RIGHT, UP, DOWN };

struct Snake {
    vector<pair<int, int>> body;
    DIRECTION direction;
    int score;
    bool gameOver;
};

Snake snake;
pair<int, int> food;

void Setup() {
    initscr();
    cbreak();
    noecho();
    nodelay(stdscr, TRUE);
    keypad(stdscr, TRUE);
    curs_set(0);

    snake.gameOver = false;
    snake.direction = STOP;
    snake.score = 0;

    // Khởi tạo rắn ở giữa
    snake.body.push_back({WIDTH/2, HEIGHT/2});

    // Tạo thức ăn
    srand(time(0));
    food.first = (rand() % (WIDTH-2)) + 1;
    food.second = (rand() % (HEIGHT-2)) + 1;
}

void Draw() {
    clear();
    
    // Vẽ khung
    for (int i = 0; i < WIDTH; i++) {
        mvprintw(0, i, "#");
        mvprintw(HEIGHT-1, i, "#");
    }

    // Vẽ rắn và thức ăn
    for (auto &part : snake.body) {
        mvprintw(part.second, part.first, "O");
    }
    mvprintw(food.second, food.first, "F");

    // Hiển thị điểm
    mvprintw(HEIGHT, 0, "Score: %d", snake.score);
    refresh();
}

void Input() {
    int ch = getch();
    switch(ch) {
        case KEY_UP:
            if (snake.direction != DOWN) snake.direction = UP;
            break;
        case KEY_DOWN:
            if (snake.direction != UP) snake.direction = DOWN;
            break;
        case KEY_LEFT:
            if (snake.direction != RIGHT) snake.direction = LEFT;
            break;
        case KEY_RIGHT:
            if (snake.direction != LEFT) snake.direction = RIGHT;
            break;
        case 'x':
            snake.gameOver = true;
            break;
    }
}

void Logic() {
    if (snake.direction == STOP) return;

    pair<int, int> newHead = snake.body.front();
    
    switch(snake.direction) {
        case UP:    newHead.second--; break;
        case DOWN:  newHead.second++; break;
        case LEFT:  newHead.first--; break;
        case RIGHT: newHead.first++; break;
    }

    // Kiểm tra va chạm tường
    if (newHead.first <= 0 || newHead.first >= WIDTH-1 || 
        newHead.second <= 0 || newHead.second >= HEIGHT-1) {
        snake.gameOver = true;
        return;
    }

    // Kiểm tra va chạm thân
    for (auto &part : snake.body) {
        if (newHead == part) {
            snake.gameOver = true;
            return;
        }
    }

    snake.body.insert(snake.body.begin(), newHead);

    // Kiểm tra ăn thức ăn
    if (newHead == food) {
        snake.score += 10;
        bool valid;
        do {
            valid = true;
            food = { (rand() % (WIDTH-2)) + 1, (rand() % (HEIGHT-2)) + 1 };
            
            for (auto &part : snake.body) {
                if (food == part) {
                    valid = false;
                    break;
                }
            }
        } while (!valid);
    } else {
        snake.body.pop_back();
    }
}

int main() {
    Setup();
    while (!snake.gameOver) {
        Draw();
        Input();
        Logic();
        usleep(SPEED);
    }
    endwin();
    cout << "GAME OVER! Final score: " << snake.score << endl;
    return 0;
}