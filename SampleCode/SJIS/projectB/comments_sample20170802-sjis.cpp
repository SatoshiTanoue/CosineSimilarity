class Test {
public:
    // TODO �����������L�q����
    Test();
    /**
     * �e�X�g�ԍ����擾����B
     * ���������͏����{��������B
     */
    int GetTestNumber();
    // �e�X�g�ԍ���ݒ肷��B
    void SetTestNumber(int testNumber);
private:
    // 2016/11/08 �����l��0����1�ɏC��
    //int m_testNumber = 0;
    int m_testNumber = 1;
};
int Test::GetTestNumber() {
    for (int i = 0; i < 10; i++) { // ���[�v )
    }
    return m_testNumber;
};
void Test::SetTestNumber(int testNumber) {
    if (testNumber > 0) {
	m_testNumber = testNumber;
    }
    // else�̃p�^�[���͂Ȃ��đ��v�H 
};
