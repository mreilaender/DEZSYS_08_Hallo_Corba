package demo.hello;

import org.omg.PortableServer.POA;

/**
 * Generated from IDL interface "GoodDay".
 *
 * @author JacORB IDL compiler V 3.4
 * @version generated at Dec 11, 2014 9:00:04 PM
 */

public class GoodDayPOATie
	extends GoodDayPOA
{
	private GoodDayOperations _delegate;

	private POA _poa;
	public GoodDayPOATie(GoodDayOperations delegate)
	{
		_delegate = delegate;
	}
	public GoodDayPOATie(GoodDayOperations delegate, POA poa)
	{
		_delegate = delegate;
		_poa = poa;
	}
	public demo.hello.GoodDay _this()
	{
		org.omg.CORBA.Object __o = _this_object() ;
		demo.hello.GoodDay __r = demo.hello.GoodDayHelper.narrow(__o);
		return __r;
	}
	public demo.hello.GoodDay _this(org.omg.CORBA.ORB orb)
	{
		org.omg.CORBA.Object __o = _this_object(orb) ;
		demo.hello.GoodDay __r = demo.hello.GoodDayHelper.narrow(__o);
		return __r;
	}
	public GoodDayOperations _delegate()
	{
		return _delegate;
	}
	public void _delegate(GoodDayOperations delegate)
	{
		_delegate = delegate;
	}
	public POA _default_POA()
	{
		if (_poa != null)
		{
			return _poa;
		}
		return super._default_POA();
	}
	public java.lang.String hello_simple()
	{
		return _delegate.hello_simple();
	}

	public java.lang.String hello_wide(java.lang.String msg)
	{
		return _delegate.hello_wide(msg);
	}

}
