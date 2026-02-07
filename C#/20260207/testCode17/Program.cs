using System.Formats.Asn1;
class Unit
{
    private int _hp;
    private int _maxHp;

    public int Hp
    {
        set { if (value <= MaxHp) _hp = value; }
        get { return _hp; }
    }

    //public int MaxHp
    //{
        //set { _maxHp = value; }
    //    get { return _maxHp; }
    //}
    public int MaxHp { get; private set; }

    public Unit(int maxHp) { MaxHp = maxHp; }
}
class Program
{
    static void Main(string[] args)
    {

        Unit unit = new Unit(300);
        unit.Hp = 100;

        System.Console.WriteLine(unit.Hp + "/" + unit.MaxHp);
    }

}