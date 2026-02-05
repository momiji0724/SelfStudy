class Unit
{
    public string Name;
    public int Hp;
    public int Mp;

    public int Attack(int power)
    {
        System.Console.WriteLine("攻撃したよ！ ダメージ: " + power);
        return Mp - power;
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
        int result = unit.Attack(50);
        System.Console.WriteLine("結果: " + result);
    }


}