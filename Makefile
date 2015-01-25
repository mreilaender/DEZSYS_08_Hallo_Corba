# Adjust this path to your omniorb library
OMNI_PATH = $(HOME)/bin/omniORB-4.2.0

#go = 0

all: cpporb javaorb

run: runcpp runjava
	

cleanall: cleancpp cleanjava

#check:
#	if [ -d $(OMNI_PATH) ]; then $(go)=1; fi

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
	cp $(OMNI_PATH)/src/examples/echo/eg3_impl.cc cpp/
	#cp $(OMNI_PATH)/src/examples/echo/dir.mk cpp/
	#cp $(OMNI_PATH)/src/examples/echo/GNUmakefile cpp/
	mv echoSK.cc echo.hh cpp/

build: # TODO

runcpp:
	./cpp/eg3_impl

cleancpp:
	rm -rf cpp/echoSK.cc cpp/echo.hh
                            
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
	mkdir -p java/echoCor
	mv echoCor/* java/echoCor/
	rmdir echoCor

cleanjava:
	rm -rf java/echoCor

runjava: javaorb java/client/EchoClient.java
	javac java/echoCor/*.java
	javac java/client/EchoClient.java
	#cd java
	#jaco client.EchoClient doesn't work dont know why
	
