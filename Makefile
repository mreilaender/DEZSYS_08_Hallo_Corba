cleanall:
	rm -rf cpp/*
	rm -rf java/*

#   (                
#   )\               
# (((_)   _     _    
# )\___ _| |_ _| |_  
#((/ __|_   _|_   _| 
# | (__  |_|   |_|   
#  \___|             

cpporb: corba.idl
	omniidl -bcxx corba.idl
	mkdir -p cpp
	mv corbaSK.cc corba.hh cpp/

build: # TODO
                            
#       (             (      
#   (   )\    (   (   )\     
#   )((((_)(  )\  )((((_)(   
#  ((_)\ _ )\((_)((_)\ _ )\  
# _ | (_)_\(_) \ / /(_)_\(_) 
#| || |/ _ \  \ V /  / _ \   
# \__//_/ \_\  \_/  /_/ \_\ 

javaorb: corba.idl
	idlj -fall corba.idl
	mkdir -p java
	mv Hello/* java/
	rmdir Hello
