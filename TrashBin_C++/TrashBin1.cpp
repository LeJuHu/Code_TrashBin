#include <iostream>
#include <string>
using namespace std;
// Car 클래스 선언
class Car {
public:
    // 멤버 변수
    std::string color;
    std::string model;
    int year;

    // 생성자
    Car(std::string c, std::string m, int y) : color(c), model(m), year(y) {}

    // 멤버 함수
    void honk() {
        std::cout << "Broom!" << std::endl;
    }
};

// main 함수에서 Car 객체 생성 및 사용
int main() {
    // 'myCar' 객체 생성
    Car myCar("red", "sedan", 2020);

    // 객체의 멤버 변수에 접근
    std::cout << "My car is a " << myCar.year << " " << myCar.model << " in " << myCar.color << "." << std::endl;

    // 객체의 멤버 함수 호출
    myCar.honk();

    return 0;
}
