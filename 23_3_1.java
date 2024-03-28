class Parent {
public void a() {
System.out.print("A");
}
public void b() {
System.out.print("B");
b();
}
}
class Child extends Parent {
@Override
public void a() {
super.b();
System.out.print("C");
b();
}
@Override
public void b() {
System.out.print("D");
}
}

public class Overriding {
public static void main(String[] args) {
Parent clas = new Child();
clas.a();
clas.b();
}
}
