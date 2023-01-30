#include "objrevolucion.h"
#include "auxiliar.h"
#include "cilindro.h"


Cilindro::Cilindro( const int num_vert_perfil, const int num_instancias_perf, const float altura, const float radio ) {
    std::vector<Tupla3f> perfil_original;


    perfil_original.push_back( Tupla3f( origen, origen, origen ) );

    for( int i=0; i<num_vert_perfil-2; i++ )
        perfil_original.push_back( Tupla3f( radio, (altura/(num_vert_perfil-3))*i, origen ) );
    
    perfil_original.push_back( Tupla3f( origen, altura, origen ) );


    crearMalla( perfil_original, num_instancias_perf );
}