cdef extern object g(object x) nogil
cdef extern void g2(object x) nogil

cdef void f(int x) nogil:
	cdef int y
	y = 42

cdef void h(object x) nogil:
	g2(x)
