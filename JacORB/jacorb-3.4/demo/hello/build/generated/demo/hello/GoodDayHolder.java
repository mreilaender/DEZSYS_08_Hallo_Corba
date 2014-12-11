package demo.hello;

/**
 * Generated from IDL interface "GoodDay".
 *
 * @author JacORB IDL compiler V 3.4
 * @version generated at Dec 11, 2014 9:00:04 PM
 */

public final class GoodDayHolder	implements org.omg.CORBA.portable.Streamable{
	 public GoodDay value;
	public GoodDayHolder()
	{
	}
	public GoodDayHolder (final GoodDay initial)
	{
		value = initial;
	}
	public org.omg.CORBA.TypeCode _type()
	{
		return GoodDayHelper.type();
	}
	public void _read (final org.omg.CORBA.portable.InputStream in)
	{
		value = GoodDayHelper.read (in);
	}
	public void _write (final org.omg.CORBA.portable.OutputStream _out)
	{
		GoodDayHelper.write (_out,value);
	}
}
