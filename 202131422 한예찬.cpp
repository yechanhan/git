#포함 < iostream>
#포함 < 문자열>
사용하는 네임 스페이스 표준을;

class Car {
  const 문자열 모델;
  부울 파워;
  이중 속도;

  공공의 : Car(string m, bool p = false, double s = 0.0)
      : model(m), power(p), speed(s){};
  무효 set_power();
  무효 set_speed(bool);
  double get_speed() const;
};
void Car ::set_power() {
  힘 = !힘;
  반환;
}
void Car ::set_speed(bool a) {
  if (!power) return;
  만약(a)
  속도 + = 100;
  그밖에
  속도 -= 10;
  반환;
}
두 배 Car ::get_speed() const { 복귀 속도; }
int main() {
  자동차 car1(" 포르쉐 ");
  car1.set_power();
  car1.set_speed(false);
  cout << car1.get_speed() << endl;

  Car car2(" 람보르기니 ");
  car2.set_power();
  car2.set_speed(true);
  cout << car2.get_speed() << endl;

  Car car3(" 벤츠 ");
  car3.set_power();
  car3.set_speed(true);
  cout << car3.get_speed() << endl;

  Car car4(" BMW ");
  car4.set_power();
  car4.set_speed(false);
  cout << car4.get_speed() << endl;

  반환 0;