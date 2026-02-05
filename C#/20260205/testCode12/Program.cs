class Unit
{
    public string Name;
    public int Hp;
    public int Mp;

    public void Attack() 
    {
        System.Console.WriteLine("攻撃したよ！");
    }
}

class Program
{
    static void Main(string[] args)
    {
        Unit unit = new Unit();
        unit.Name = "ガジェッタ";
        unit.Hp = 100;
        unit.Mp = 60;
        unit.Attack();
    }


}