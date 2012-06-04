#pythran export CAXPY(int, complex, complex list, int, complex list, int)
def CAXPY(N,CA,CX,INCX,CY,INCY):
#  Purpose
#  =======
#
#     CAXPY constant times a vector plus a vector.
#
#  Further Details
#  ===============
#
#     jack dongarra, linpack, 3/11/78.
#     modified 12/3/93, array(1) declarations changed to array(#)
#
#  =====================================================================
#
	if N <= 0:
		return
	if (abs(CA) == 0.0E+0):
		return
	if (INCX == 1 and INCY == 1):
		for I in range(N):
			CY[I] = CY[I] + CA*CX[I]
#
#        code for both increments equal to 1
#
      	else:
#
#        code for unequal increments or equal increments
#          not equal to 1
#
         	IX = 0
	        IY = 0
	 	if (INCX < 0):
		 	IX = (-N+1)*INCX
		if (INCY < 0):
			IY = (-N+1)*INCY
	 	for I in range(N):
            		CY[IY] = CY[IY] + CA*CX[IX]
            		IX = IX + INCX
            		IY = IY + INCY
      	return CY
