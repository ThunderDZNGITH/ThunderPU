cmake_minimum_required(VERSION 3.10)

# Nom du projet
project(ThunderPU VERSION 1.0 LANGUAGES CXX)

# Définit la norme C++ à utiliser (C++17 dans cet exemple)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_BINARY_DIR ${PROJECT_SOURCE_DIR}/bin)

# Recherche la bibliothèque SFML (avec les composants système, fenêtrage, graphique, audio, réseau)
find_package(SFML 2.5 COMPONENTS system window graphics audio network REQUIRED)

# Chemin vers les fichiers d'en-têtes
include_directories(${PROJECT_SOURCE_DIR}/include)

# Ajoute les sous-répertoires contenant les sources
add_subdirectory(src)

# Ajout des options de compilation
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -O2")

# Cible de nettoyage personnalisée (make clean)
add_custom_target(
    clean-all
    COMMAND ${CMAKE_BUILD_TOOL} clean
    COMMAND ${CMAKE_COMMAND} -E remove_directory ${CMAKE_BINARY_DIR}
    COMMENT "Nettoyage complet du projet (binaries et fichiers générés)"
)
