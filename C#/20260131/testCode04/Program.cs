class Program 
{
    static void  Main (string[] args) 
    {
        // 論理積
        System.Console.WriteLine(0x0C & 0x0A);
        // 論理和
        System.Console.WriteLine(0x0C | 0x0A);
        // 排他的論理和
        System.Console.WriteLine(0x0C ^ 0x0A);
        // NOTでの反転
        System.Console.WriteLine(~0x0A);



    }

}