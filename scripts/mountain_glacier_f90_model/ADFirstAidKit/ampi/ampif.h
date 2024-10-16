!##########################################################
!# This file is part of the AdjoinableMPI library         #
!# released under the MIT License.                        #
!# The full COPYRIGHT notice can be found in the top      #
!# level directory of the AdjoinableMPI distribution.     #
!########################################################## 

       include 'mpif.h'

       INTEGER AMPI_ACTIVE
       PARAMETER (AMPI_ACTIVE=1)

       INTEGER AMPI_TO_RECV
       PARAMETER (AMPI_TO_RECV=0)
       INTEGER AMPI_FROM_SEND
       PARAMETER (AMPI_FROM_SEND=1)
       INTEGER AMPI_TO_IRECV_WAIT
       PARAMETER(AMPI_TO_IRECV_WAIT=2)
       INTEGER AMPI_TO_IRECV_WAITALL
       PARAMETER(AMPI_TO_IRECV_WAITALL=3)
       INTEGER AMPI_FROM_ISEND_WAIT
       PARAMETER(AMPI_FROM_ISEND_WAIT=4)
       INTEGER AMPI_FROM_ISEND_WAITALL
       PARAMETER(AMPI_FROM_ISEND_WAITALL=5)
       INTEGER AMPI_FROM_BSEND
       PARAMETER(AMPI_FROM_BSEND=6)
       INTEGER AMPI_FROM_RSEND
       PARAMETER(AMPI_FROM_RSEND=7)
! The following commented out because of clash with Fortran AMPI subroutine names
!       INTEGER AMPI_ISEND
!       PARAMETER(AMPI_ISEND=8)
!       INTEGER AMPI_IRECV
!       PARAMETER(AMPI_IRECV=9)
!       INTEGER AMPI_WAIT
!       PARAMETER(AMPI_WAIT=10)

       COMMON /ACTIVE_TYPES/ AMPI_ADOUBLE_PRECISION, AMPI_AREAL
       
       INTEGER AMPI_ADOUBLE_PRECISION, AMPI_AREAL

       EXTERNAL AMPI_INIT_NT, AMPI_COMM_RANK, AMPI_FINALIZE_NT
       EXTERNAL ADTOOL_AMPI_TURN
       EXTERNAL AMPI_SEND, AMPI_RECV
       EXTERNAL AMPI_ISEND, AMPI_IRECV, AMPI_WAIT
       EXTERNAL AMPI_BARRIER, AMPI_REDUCE
       EXTERNAL TLS_AMPI_SEND, TLS_AMPI_RECV
       EXTERNAL TLS_AMPI_ISEND, TLS_AMPI_IRECV, TLS_AMPI_WAIT
       EXTERNAL TLS_AMPI_BARRIER, TLS_AMPI_REDUCE
       EXTERNAL FW_AMPI_SEND, FW_AMPI_RECV
       EXTERNAL FW_AMPI_ISEND, FW_AMPI_IRECV, FW_AMPI_WAIT
       EXTERNAL FW_AMPI_BARRIER, FWS_AMPI_REDUCE
       EXTERNAL BW_AMPI_SEND, BW_AMPI_RECV
       EXTERNAL BW_AMPI_ISEND, BW_AMPI_IRECV, BW_AMPI_WAIT
       EXTERNAL BW_AMPI_BARRIER, BWS_AMPI_REDUCE
