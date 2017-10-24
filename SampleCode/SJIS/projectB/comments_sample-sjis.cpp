class Test {
public:
    //コメントを取得できているかテストするためのクラス
    int GetTestNumber();
    void SetTestNumber(int testNumber);
private:
    // 2017/3/3 初期値を0から1に修正
    //int testNumber = 0;
    int testNumber = 1;
};

int Test::GetTestNumber() {
  //TODO テスト番号を取得する内部処理を実装する。
    for (int i = 0; i < 10; i++) {
      /**
       * テスト番号を取得する。
       * 内部処理は将来本実装する。
       */
    }
    return testNumber;
};

void Test::SetTestNumber(int testNumber) {
    if (testNumber > 0) {
	     this.testNumber = testNumber;
    }
    // elseのパターンはなくて大丈夫？ ←検出用
};
