class Test{

    int testa , testb;
    Test(int a , int b){
        testa = a;
        testb  = b;
    }
    public static void main(String[] args) {
        Test test = new Test();
        System.out.println(test.testa + test.testb);
    }
}