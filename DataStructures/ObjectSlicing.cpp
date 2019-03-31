//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//class Shape {
//public:
//	virtual Shape& operator=(const Shape& s) {
//		assign(s);
//		return *this;
//	}
//
//	virtual std::string getName() = 0;
//	virtual         int getEdges() = 0;
//
//
//
//protected:
//	std::string name;
//	int         edges;
//
//	void assign(const Shape& s) {
//		this->name = s.name;
//		this->edges = s.edges;
//	}
//};
//
//class Circle : public Shape {
//private:
//	int radius;
//public:
//	Circle() { name = "Circle"; edges = 1; }
//	Circle(int rad) { name = "Circle"; edges = 1; radius = rad; }
//
//	virtual Circle& operator=(const Shape& s) {
//		if (const Circle* c = dynamic_cast<const Circle*>(&s))
//			assign(*c);
//		else {
//			std::cout << "BAD ASSIGNMENT IN CIRCLE.";
//			//THROW ERROR HERE INSTEAD OF THE ABOVE COUT
//		}
//		return *this;
//	}
//
//	std::string getName() { return name; }
//	int getEdges() { return edges; }
//	int getRadius() { return radius; }
//	void setRadius(int r) { radius = r; }
//
//protected:
//	void assign(const Circle& c) {
//		Shape::assign(c);
//		this->radius = c.radius;
//	}
//
//};
//
//int main() {
//	std::vector<Shape*> shapes;
//	std::vector<Circle> circs;
//	Circle c2(5); //Creates a circle with 5 for the radius.
//
//	shapes.push_back(&c2); //Pushing the 5-radius circle into the Shapes* vector
//	Circle c3; //Creates a circle with default constructor (which does NOT define radius)
//	c3 = *shapes[0]; //Now, the overloaded assignment operator. Look at Circle::assign(const Shape&) function
//	circs.push_back(c3); //We push our newly assigned circle to our Circle vector
//	std::cout << "c3 radius: " << circs[0].getRadius(); //This will be 5!
//}