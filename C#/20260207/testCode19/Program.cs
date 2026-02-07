struct A 
{
    public int Value;
}

class Program 
{
    static void Main(string[] args) 
    {
        A x;
        x.Value = 100;

        A y = x;
        y.Value = 200;

        System.Console.WriteLine("X = " + x.Value);
        System.Console.WriteLine("Y = " + y.Value);


    }

}