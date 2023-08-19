#include "painter.h"
#include "wall.h"


using namespace std;

int main() {
    Painter bill;
    Wall wall(3.5, 2.45);

    bill.Paint (wall, Wall::Color::BLUE);
}