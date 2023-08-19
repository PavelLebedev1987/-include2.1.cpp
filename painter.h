
class Painter {
public:
    // Напишите класс Painter
    void Paint(const Wall& wall, const Wall::Color color) const {

        wall.SetColor(color);
        
    }
};