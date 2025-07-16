import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Branch branch = new Branch();
        Employee employee = new Employee();
        Pizza pizza = new Pizza();
        Sales sales = new Sales();

        // 1. Branch details
        System.out.println("Enter branch name:");
        String bname = sc.nextLine();
        System.out.println("Enter branch location:");
        String bloc = sc.nextLine();
        System.out.println("Enter branch country:");
        String bctry = sc.nextLine();
        System.out.println("Enter Pizza Variety 1:");
        String p1 = sc.nextLine();
        System.out.println("Enter Pizza Variety 2:");
        String p2 = sc.nextLine();
        System.out.println("Enter Pizza Variety 3:");
        String p3 = sc.nextLine();
        branch.setBranchDetails(bname, bloc, bctry, p1, p2, p3);
        branch.showBranchDetails();

        // 2. Employee details
        System.out.println("Enter employee name:");
        String ename = sc.nextLine();
        System.out.println("Enter employee phone:");
        String eph = sc.nextLine();
        System.out.println("Enter employee address:");
        String eadd = sc.nextLine();
        System.out.println("Enter employee id:");
        String eid = sc.nextLine();
        System.out.println("Enter employee type (Chef/Salesman/etc.):");
        String etype = sc.nextLine();
        System.out.println("Enter employee salary:");
        double esalary = Double.parseDouble(sc.nextLine());
        System.out.println("Enter employee allowance:");
        double eallow = Double.parseDouble(sc.nextLine());
        employee.setEmployeeDetails(ename, eph, eadd, eid, etype, esalary, eallow);
        employee.showEmployeeDetails();

        // 3. Pizza ordering
        System.out.println("Enter number of pizzas you require:");
        String numPizzaStr = sc.nextLine();
        int numPizzas = 1;
        if(numPizzaStr.length()>0 && numPizzaStr.charAt(0) >= '0' && numPizzaStr.charAt(0) <= '9') {
            numPizzas = Integer.parseInt(numPizzaStr);
        }
        for(int i=1; i<=numPizzas; i++) {
            System.out.println("Enter name of pizza " + i + ":");
            String pname = sc.nextLine();
            System.out.println("Enter type (Automatic/Handmade):");
            String ptype = sc.nextLine();
            System.out.println("Enter toppings for your pizza:");
            String ptoppings = sc.nextLine();
            pizza.setPizzaDetails(pname, ptype, ptoppings);
            System.out.println("Your pizza is getting prepared...");
            pizza.showPizzaDetails();
            System.out.println("Here is your order!\n");
        }

        // 4. Sales details
        System.out.println("Enter sales date:");
        String sdate = sc.nextLine();
        System.out.println("Enter home delivery app used (Zomato, Swiggy, etc):");
        String sapp = sc.nextLine();
        System.out.println("Enter total sales amount:");
        double samt = Double.parseDouble(sc.nextLine());
        sales.setSalesDetails(bname, sdate, ename, sapp, samt);
        sales.showSalesDetails();

        // Display lab user ID
        System.out.println("\nLab User ID: Vaibosnikov");
    }
}