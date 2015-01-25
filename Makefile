javaorb: corba.idl
	idlj -fall corba.idl

classes:
	javac java/*

clean:
	rm -rf java/*.class

cleanall:
	rm -rf java/*
