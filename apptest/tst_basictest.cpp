#include <arithmetic.h>

#include <QtTest>

// add necessary includes here

class BasicTest : public QObject {
  Q_OBJECT

 public:
  BasicTest();
  ~BasicTest();

 private slots:
  void test_case1();
};

BasicTest::BasicTest() {}

BasicTest::~BasicTest() {}

void BasicTest::test_case1() {
  int result = Arithmetic().add(1, 2);
  QVERIFY(true);        // check that a condition is satisfied
  QCOMPARE(result, 3);  // compare two values
}

QTEST_APPLESS_MAIN(BasicTest)

#include "tst_basictest.moc"
