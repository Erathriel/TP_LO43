#---------------------------------
# INITIALISATION DES VARIABLES 
#---------------------------------

# Indiquer le compilateur
CXX= g++

# Les chemins ou se trouvent les fichiers a inclure
INCLUDE= -I/usr/include

# Options de compilation.
CXXFLAGS=  $(INCLUDES_DIR) -c -Wno-deprecated

# Les chemins ou se trouvent les librairies
LIBRARY_PATH= -L/usr/lib

# Options pour le linker.
LDFLAGS= $(LIBRARY_PATH) -o

# Les librairies avec lesquelle on va effectueller l'edition de liens
LIBS=  

# Les fichiers sources de l'application
FILES= Client.cc Maillon.cc Liste.cc

#-----------
# LES CIBLES
#-----------
tp2 :  $(FILES:.cc=.o)
	$(CXX) $(LDFLAGS) tp2 $(FILES:.cc=.o) $(LIBS)

.PHONY : clean
clean:
	/bin/rm $(FILES:.cc=.o) tp2

#-----------------------------------------------------------------------------
# LES REGLES DE DEPENDANCE. Certaines sont implicites mais je recommande d'en 
# mettre une par fichier source. 
#-----------------------------------------------------------------------------
Client.o:Client.cc Maillon.cc Liste.cc
Maillon.o:Maillon.cc Maillon.h
Liste.o:Liste.cc Liste.h
#---------------------------------
# REGLES DE COMPILATION IMPLICITES
#---------------------------------
%.o : %.cc ; $(CXX) $(CXXFLAGS) $*.cc

