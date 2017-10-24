class Test {
public:
    /**
     * テスト番号を取得する。
     * 内部処理は将来本実装する。 ←検出用
     */
    int GetTestNumber();

    // テスト番号を設定する。
    void SetTestNumber(int testNumber);

private:
    // 2017/3/3 初期値を0から1に修正 ←検出用
    //int m_testNumber = 0;
    int m_testNumber = 1;
};

int Test::GetTestNumber() {
    for (int i = 0; i < 10; i++) { // ループ ←検出用(コードの後ろにコメント)
    }
    return m_testNumber;
};

void Test::SetTestNumber(int testNumber) {
    if (testNumber > 0) {
	m_testNumber = testNumber;
    }
    // elseのパターンはなくて大丈夫？ ←検出用
};
