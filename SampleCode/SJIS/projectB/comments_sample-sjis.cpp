class Test {
public:
    //�R�����g���擾�ł��Ă��邩�e�X�g���邽�߂̃N���X
    int GetTestNumber();
    void SetTestNumber(int testNumber);
private:
    // 2017/3/3 �����l��0����1�ɏC��
    //int testNumber = 0;
    int testNumber = 1;
};

int Test::GetTestNumber() {
  //TODO �e�X�g�ԍ����擾���������������������B
    for (int i = 0; i < 10; i++) {
      /**
       * �e�X�g�ԍ����擾����B
       * ���������͏����{��������B
       */
    }
    return testNumber;
};

void Test::SetTestNumber(int testNumber) {
    if (testNumber > 0) {
	     this.testNumber = testNumber;
    }
    // else�̃p�^�[���͂Ȃ��đ��v�H �����o�p
};
