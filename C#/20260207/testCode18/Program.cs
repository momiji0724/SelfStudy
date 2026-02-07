class A 
{
    public int Value;
}
class Program 
{
    static void Main(string[] arge)
    {
        A x = new A();
        x.Value = 100;
        A y = x;
        //int x = 100;
        //int y = x;
        y.Value = 200;
        Console.WriteLine("x = " + x.Value);
        Console.WriteLine("y = " + y.Value);

    }
}