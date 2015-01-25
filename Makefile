# Adjust this path to your omniorb library
OMNI_PATH = $(HOME)/bin/omniORB-4.2.0

#go = 0

all: cpporb javaorb

cleanall: cleancpp cleanjava

#check:
#	if [ -d $(OMNI_PATH) ]; then $(go)=1; fi


readme:
	vim README
	
#   (                
#   )\               
# (((_)   _     _    
# )\___ _| |_ _| |_  
#((/ __|_   _|_   _| 
# | (__  |_|   |_|   
#  \___|             

cpporb: echo.idl check $(go) = 1
	omniidl -bcxx echo.idl
	mkdir -p cpp
	cp $(OMNI_PATH)/src/examples/echo/eg3_impl.cc cpp/echoCor
	cp $(OMNI_PATH)/src/examples/echo/dir.mk cpp/echoCor
	cp $(OMNI_PATH)/src/examples/echo/GNUmakefile cpp/echoCor
	mv echoSK.cc echo.hh cpp/

build: # TODO

cleancpp:
	rm -rf cpp/echoCor/echoSK.cc cpp/echoCor/echo.hh
                            
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

cleanjava: readme
	rm -rf java/echoCor
