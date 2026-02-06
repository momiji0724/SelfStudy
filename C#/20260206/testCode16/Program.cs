using System.Formats.Asn1;
class Unit
{
    private int _hp;
    private int _maxHp;

    public int Hp
    {
        set { if (value <= _maxHp) _hp = value; }
        get { return _hp; }
    }

    public int MaxHp
    {       
        get { return _maxHp; }
    }

    public Unit(int maxHp) { _maxHp = maxHp; }
}
class Program
{
    static void Main(string[] args)
    {

        Unit unit = new Unit(300);
        unit.Hp = 100;

        System.Console.WriteLine(unit.Hp+"/"+unit.MaxHp);
    }

}
