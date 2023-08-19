
class Painter {
public:
    // Напишите класс Painter
    pair <double, Wall::Color > Paint(const Wall& wall, const Wall& Color) const {
        double height = wall.GetHeight();
        double width = wall.GetWidth();
        Wall::Color color = wall.GetColor();
        return { width * height * 5, color };
    }
};