add_executable( pthd main.cpp )
if( UNIX AND NOT APPLE )
  set(rt_library rt )
endif()

find_package( Gperftools QUIET )
if( GPERFTOOLS_FOUND )
    message( STATUS "Found gperftools; compiling pthd with TCMalloc")
    list( APPEND PLATFORM_SPECIFIC_LIBS tcmalloc )
endif()

if( SIGMAENGINE_STATIC_BUILD )
   target_link_libraries( pthd PRIVATE
      "-static-libstdc++ -static-libgcc"
      sigmaengine_plugins
      sigmaengine_mf_plugins
      sigmaengine_app
      sigmaengine_bobserver
      sigmaengine_account_history
      sigmaengine_chain
      sigmaengine_protocol
      fc
      ${CMAKE_DL_LIBS}
      ${PLATFORM_SPECIFIC_LIBS}
   )
elseif( FULL_STATIC_BUILD ) # for windows version (mingw) : include libwinpthread-1.dll in pthd
   target_link_libraries( pthd PRIVATE
      "-static-libstdc++ -static-libgcc -Wl,-Bstatic -lstdc++ -lwinpthread -Wl,-Bdynamic"
      sigmaengine_plugins
      sigmaengine_mf_plugins
      sigmaengine_app
      sigmaengine_bobserver
      sigmaengine_account_history
      sigmaengine_chain
      sigmaengine_protocol
      fc
      ${CMAKE_DL_LIBS}
      ${PLATFORM_SPECIFIC_LIBS}
  )   
else( SIGMAENGINE_STATIC_BUILD )
   target_link_libraries( pthd PRIVATE
      Threads::Threads
      sigmaengine_plugins
      sigmaengine_mf_plugins
      sigmaengine_app
      sigmaengine_bobserver
      sigmaengine_account_history
      sigmaengine_chain
      sigmaengine_protocol
      fc
      ${CMAKE_DL_LIBS}
      ${PLATFORM_SPECIFIC_LIBS}
   )
endif( SIGMAENGINE_STATIC_BUILD )

install( TARGETS
   pthd

   RUNTIME DESTINATION bin
   LIBRARY DESTINATION lib
   ARCHIVE DESTINATION lib
)
