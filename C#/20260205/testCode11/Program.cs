 class Unit
{
    public string Name;
    public int Hp;
    public int Mp;

}

class Program
{
    static void Main(string[] args)
    {
        Unit unit = new Unit();
        unit.Name = "ガジェッタ";
        unit.Hp = 100;
        unit.Mp = 60;
        System.Console.WriteLine(unit.Name);
        System.Console.WriteLine(unit.Hp);
        System.Console.WriteLine(unit.Mp);

    }
}