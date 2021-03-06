package client;

import org.omg.CosNaming.*;
import org.omg.CosNaming.NamingContextPackage.CannotProceed;
import org.omg.CosNaming.NamingContextPackage.NotFound;
import org.omg.CORBA.*;
import org.omg.CORBA.ORBPackage.InvalidName;

import echoCor.Echo;
import echoCor.EchoHelper;

import java.util.Properties;

public class EchoClient {

	public static void main(String[] args) {
		String ns = "NameService";
		org.omg.CORBA.Object ref;
		Echo hello;
		Properties asd = new Properties();
		asd.put("org.omg.CORBA.ORBInitialPort", "2809");
		asd.put("org.omg.CORBA.ORBInitialHost", "localhost");
		ORB orb = ORB.init(args, null);
		try {
			ref = orb.resolve_initial_references(ns);
			NamingContext namCon = NamingContextExtHelper.narrow(ref);
			
			NameComponent com1 = new NameComponent("test", "my_context");
			NameComponent com2 = new NameComponent("Echo", "Object");
			
			NameComponent path[] = {com1, com2};
			hello = EchoHelper.narrow(namCon.resolve(path));
			
			System.out.println("");
			String returnText = hello.echoString("Hello C++");
			
			System.out.println("CPP-Corba returned: " + returnText);
		} catch (InvalidName e) {
			System.err.println("Couldn't find naming Service: " + ns + ", because " + e.getMessage());
			e.printStackTrace();
		} catch (NotFound e) {
			System.err.println("Couldn't find Object-Ref(" + e.getMessage() + ")");
			e.printStackTrace();
		} catch (CannotProceed e) {
			// TODO
			System.err.println("TODO Catch-Clause in HelloClient " + e.getMessage());
		} catch (org.omg.CosNaming.NamingContextPackage.InvalidName e) {
			// TODO
			System.err.println("Invalid ContextPackage: " + e.getMessage());
		}
	}
}
