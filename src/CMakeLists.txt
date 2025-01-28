# src/CMakeLists.txt

# Récupérer tous les fichiers cpp dans ce répertoire
file(GLOB_RECURSE SOURCES *.cpp)

# Génère un exécutable à partir des fichiers sources trouvés
add_executable(${PROJECT_NAME} ${SOURCES})

# Si des bibliothèques supplémentaires sont nécessaires, les lier ici
# target_link_libraries(${PROJECT_NAME} nom_bibliothèque)
# Lier SFML aux exécutables
target_link_libraries(${PROJECT_NAME} sfml-system sfml-window sfml-graphics sfml-audio sfml-network)