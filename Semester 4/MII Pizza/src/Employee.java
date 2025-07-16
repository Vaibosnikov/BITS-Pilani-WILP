public class Employee {
    String name;
    String phone;
    String address;
    String id;
    String type;
    double salary;
    double allowance;

    public void setEmployeeDetails(String n, String ph, String add, String eid, String t, double sal, double allow) {
        name = n;
        phone = ph;
        address = add;
        id = eid;
        type = t;
        salary = sal;
        allowance = allow;
    }

    public void showEmployeeDetails() {
        System.out.println("Employee: " + name + " (" + type + ")");
        System.out.println("ID: " + id + ", Phone: " + phone + ", Address: " + address);
        System.out.println("Salary: " + salary + ", Allowance: " + allowance);
    }
}