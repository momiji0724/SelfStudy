class Unit 
{
    public string Name;
    public int Hp;
    public int Mp;

    public Unit(string name,int hp,int mp) 
    {
        Name = name;
        Hp = hp;
        Mp = mp;
    }
}

class Program 
{
    static void Main(string[] arge) 
    {
        Unit unit = new Unit("ガジェッタ", 100,60);
        System.Console.WriteLine(unit.Name);
        System.Console.WriteLine(unit.Hp);
        System.Console.WriteLine(unit.Mp);

    }

}