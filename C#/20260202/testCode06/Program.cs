class Program
{
    static void Main(string[] args)
    {
        int x = 10;
        // 比較演算子 同じかどうかを比較
        Console.WriteLine(x == 10); //True
        Console.WriteLine(x == 5);  //False

        // 等しくなければTrue、等しければFalseを返す
        Console.WriteLine(x != 10); //False
        Console.WriteLine(x != 5);  //True

        //  xが5より小さければTrueを返す
        Console.WriteLine(x < 5); //False

        //  xが5より大きければTrueを返す
        Console.WriteLine(x > 5); //True




    }

}