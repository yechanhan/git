#���� < iostream>
#���� < ���ڿ�>
����ϴ� ���� �����̽� ǥ����;

class Car {
  const ���ڿ� ��;
  �ο� �Ŀ�;
  ���� �ӵ�;

  ������ : Car(string m, bool p = false, double s = 0.0)
      : model(m), power(p), speed(s){};
  ��ȿ set_power();
  ��ȿ set_speed(bool);
  double get_speed() const;
};
void Car ::set_power() {
  �� = !��;
  ��ȯ;
}
void Car ::set_speed(bool a) {
  if (!power) return;
  ����(a)
  �ӵ� + = 100;
  �׹ۿ�
  �ӵ� -= 10;
  ��ȯ;
}
�� �� Car ::get_speed() const { ���� �ӵ�; }
int main() {
  �ڵ��� car1(" ������ ");
  car1.set_power();
  car1.set_speed(false);
  cout << car1.get_speed() << endl;

  Car car2(" ��������� ");
  car2.set_power();
  car2.set_speed(true);
  cout << car2.get_speed() << endl;

  Car car3(" ���� ");
  car3.set_power();
  car3.set_speed(true);
  cout << car3.get_speed() << endl;

  Car car4(" BMW ");
  car4.set_power();
  car4.set_speed(false);
  cout << car4.get_speed() << endl;

  ��ȯ 0;