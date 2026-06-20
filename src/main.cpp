#include <Geode/Geode.hpp>  
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

// Modificamos la clase original MenuLayer de Geometry Dash  
class $modify(MenuLayer) {  
bool init() {  
// Ejecuta primero el código original del juego  
if (!MenuLayer::init()) {  
return false;  
}

// Crea y muestra una alerta nativa de Geode en pantalla  
FLAlertLayer::create(  
"¡Hola Mundo!", // Título de la ventana  
"¡Tu mod simple de Geode funciona correctamente!", // Mensaje  
"Aceptar" // Texto del botón  
)->show();

return true;  
}  
};
