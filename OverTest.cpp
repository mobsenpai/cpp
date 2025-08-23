class OverTest {
  int a;

public:
  OverTest() {};
  OverTest(int x) { a = x; };
};

int main() {
  OverTest o1(5), o2(4), o3;
  o3.a = o1.a + o2.a; // can't do it like this

  return 0;
}
