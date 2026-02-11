
# ROOT/CERN
#
export ROOTSYS=/Users/kalousis/root/builddir/
export PATH=$ROOTSYS/bin:$PATH
export ROOTLIBS="$(root-config --glibs)"
export ROOTINC="$(root-config --incdir)"
export LD_LIBRARY_PATH=$ROOTSYS/lib:$LD_LIBRARY_PATH
export DYLD_LIBRARY_PATH=$ROOTSYS/lib:$DYLD_LIBRARY_PATH

# GSL
#

export GSL="$(gsl-config --prefix)"
export GSLIBS="$(gsl-config --libs)"

# ROOUNFOLD
#

export ROOUNFOLD=/Users/kalousis/RooUnfold
export LD_LIBRARY_PATH=$ROOUNFOLD:$LD_LIBRARY_PATH
export DYLD_LIBRARY_PATH=$ROOUNFOLD:$DYLD_LIBRARY_PATH

# CRY
#

export CRY=/Users/kalousis/cry
export LD_LIBRARY_PATH=$CRY/lib:$LD_LIBRARY_PATH
export DYLD_LIBRARY_PATH=$CRY/lib:$DYLD_LIBRARY_PATH

# PMTCALIB
#

export PMTCALIB=/Users/kalousis/PMTCalib
export LD_LIBRARY_PATH=$PMTCALIB/lib/:$LD_LIBRARY_PATH
export DYLD_LIBRARY_PATH=$PMTCALIB/lib/:$DYLD_LIBRARY_PATH

# SOLO
#

export SOLO=/Users/kalousis/SoLO
export PATH=$SOLO/src/bin/:$PATH
export LD_LIBRARY_PATH=$SOLO/lib/:$LD_LIBRARY_PATH
export DYLD_LIBRARY_PATH=$SOLO/lib/:$DYLD_LIBRARY_PATH

# RooUnfold
#

export LD_LIBRARY_PATH=/Users/kalousis/RooUnfold:$LD_LIBRARY_PATH
export DYLD_LIBRARY_PATH=/Users/kalousis/RooUnfold:$DYLD_LIBRARY_PATH

# DFit
#
export DFIT=/Users/kalousis/DFit
export PATH=$DFIT/src/bin/:$PATH
export LD_LIBRARY_PATH=$DFIT/lib/:$LD_LIBRARY_PATH
export DYLD_LIBRARY_PATH=$DFIT/lib/:$DYLD_LIBRARY_PATH
export MACOSX_DEPLOYMENT_TARGET=12.7

alias ccal="ssh -X -Y kalousis@cca.in2p3.fr"

