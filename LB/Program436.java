import java.util.*;

class Sorting
{
    public int Arr[];

    public Sorting(int Size)
    {
        Arr = new int[Size];
    }

    public void Accept()           //Behaviour
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements :");
        for(int i=0;i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()          //Behaviour
    {
        System.out.println("Elements of array are : ");
        for(int i=0;i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }
}

class Program436
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array :");
        int Size = sobj.nextInt();

        Sorting obj = new Sorting(Size);
        obj.Accept();
        obj.Display();
    }
}