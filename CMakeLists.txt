cmake\_minimum\_required(VERSION 3.25)

project(MiPrimerMod)

find\_package(Geode REQUIRED)

add\_geode\_mod(  
ID tuusuario.mi\_primer\_mod  
VERSION 1.0.0

SOURCES  
src/main.cpp  
)
