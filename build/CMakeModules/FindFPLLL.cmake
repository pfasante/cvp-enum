# Try to find the FPLLL library
#  FPLLL_FOUND - system has FPLLL lib
#  FPLLL_INCLUDE_DIR - the FPLLL include directory
#  FPLLL_LIBRARIES - Libraries needed to use FPLLL

# TODO: check for GMP and MPFR, as FPLLL needs these...

if (FPLLL_INCLUDE_DIR AND FPLLL_LIBRARIES)
  # Already in cache, be silent
  set (FPLLL_FIND_QUIETLY TRUE)
endif (FPLLL_INCLUDE_DIR AND FPLLL_LIBRARIES)

find_path (FPLLL_INCLUDE_DIR NAMES fplll.h )
find_library (FPLLL_LIBRARIES NAMES fplll libfplll )
MESSAGE (STATUS "FPLLL libs: " ${FPLLL_LIBRARIES})

include (FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS (FPLLL DEFAULT_MSG FPLLL_INCLUDE_DIR FPLLL_LIBRARIES)

mark_as_advanced (FPLLL_INCLUDE_DIR FPLLL_LIBRARIES)
