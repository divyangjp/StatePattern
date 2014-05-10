########################################################
# command	output
# -------   	-----------------------------------
# make		Makes executable without debug info
# make debug	Makes executable with debug info
# make clean	Cleans executable, object files and core
#######################################################

#------------------------------------------------------------------------------

SOURCEDIR=.
OBJDIR=./obj/
OUTDIR=./bin/

SOURCE=\
	$(SOURCEDIR)/TCPConnection.cpp\
	$(SOURCEDIR)/TCPState.cpp\
	$(SOURCEDIR)/TCPOpen.cpp\
	$(SOURCEDIR)/TCPClosed.cpp\
	$(SOURCEDIR)/TCPEstablished.cpp\
	$(SOURCEDIR)/StateMain.cpp


OBJECTS=\
	TCPConnection.o\
	TCPState.o\
	TCPOpen.o\
	TCPClosed.o\
	TCPEstablished.o\
	StateMain.o

MYPROGRAM=statepattern.out
MYINCLUDES=\
	-I./

MYLIBRARIES=

CFLAGS= -Wall
CDEBUGFLAGS= -g -DDEBUG

CC=g++

#------------------------------------------------------------------------------


all: $(MYPROGRAM)

$(MYPROGRAM): $(SOURCE)
	$(CC) $(CFLAGS) $(MYINCLUDES) $(SOURCE) -o$(MYPROGRAM) 

debug: $(OBJECTS)
	$(CC) $(CFLAGS) $(CDEBUGFLAGS) $(MYINCLUDES) $(OBJECTS) -o$(MYPROGRAM)


.cpp.o:
	$(CC) $(CFLAGS) $(CDEBUGFLAGS) $(MYINCLUDES) -c $<

clean:
	rm -f $(MYPROGRAM) *.o core
