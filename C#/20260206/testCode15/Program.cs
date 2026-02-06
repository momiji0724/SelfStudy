using System.Formats.Asn1;
class Unit
{
    private int _hp;
    private int _maxHp;

    public int Hp
    {
        set { if (value <=_maxHp) _hp = value; }
        get { return _hp; }
    }

    public int MaxHp
    {
        set { _maxHp = value; }
        get { return _maxHp; }
    }
    //public void SetHp(int hp) { if (hp < _maxHp) _hp = hp; }
    //public int GetHp() { return _hp; }
}
    class Program
    {
        static void Main(string[] args)
        {

            Unit unit = new Unit();
            unit.MaxHp = 300;
            unit.Hp = 100;

            System.Console.WriteLine(unit.Hp);
        
            unit.Hp = 299;
            System.Console.WriteLine(unit.Hp);

            unit.Hp = 500;
            System.Console.WriteLine(unit.Hp);


    }

}
