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

cpporb: echo.idl
	omniidl -bcxx echo.idl
	mkdir -p cpp
	mv echoSK.cc echo.hh cpp/

build: # TODO
                            
#       (             (      
#   (   )\    (   (   )\     
#   )((((_)(  )\  )((((_)(   
#  ((_)\ _ )\((_)((_)\ _ )\  
# _ | (_)_\(_) \ / /(_)_\(_) 
#| || |/ _ \  \ V /  / _ \   
# \__//_/ \_\  \_/  /_/ \_\ 

javaorb: echo.idl
	idlj -fall echo.idl
	mkdir -p java
	mv Hello/* java/Hello/
	rmdir Hello
