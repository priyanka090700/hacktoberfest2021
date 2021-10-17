import java.util.Scanner;

class Transaction {
  private int value;

  public Transaction(int v) {
    value = v;
  }

  public int value() {
    return value;
  }
}

class Account {
  public boolean processCalled;
  public int accno;

  public Account(int an) {
    accno = an;
    processCalled = false;
  }

  public boolean process(Transaction t) {
    processCalled = true;
    return t.value() > -100 && t.value() < 1000000;
  }
}
class FilteredAccount extends Account
{
	int count=0;
    
    public FilteredAccount(int acc){
    super(acc);
    }
    
    public boolean process(Transaction t){
    if(t.value()==0)
    {count++;
    return true;}
    else
    return super.process(t);
    }
    
    public int filtered(){
    return count;
    }
    
    
}
class Main{
  public static void main(String[] args)
  {
    int n,t,v;
    Scanner s = new Scanner(System.in);
    n = Integer.parseInt(s.nextLine());
    FilteredAccount a1 = new FilteredAccount(n);
    t = Integer.parseInt(s.nextLine());
    while(t > 0)
    {
      v = Integer.parseInt(s.nextLine());
      Transaction t1 = new Transaction(v);
      a1.process(t1);
      t--;
    }
    System.out.print(a1.filtered());
  }
}
