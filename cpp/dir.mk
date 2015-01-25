CXXSRCS = eg3_impl.cc

DIR_CPPFLAGS = $(CORBA_CPPFLAGS)

CORBA_INTERFACES = echo

eg3_tieimpl = $(patsubst %,$(BinPattern),eg3_tieimpl)

eg3_impl   = $(patsubst %,$(BinPattern),eg3_impl)

all:: $(eg3_impl)

clean::
	$(RM) $(eg3_impl)

$(eg3_impl): eg3_impl.o $(CORBA_STATIC_STUB_OBJS) $(CORBA_LIB_DEPEND)
	@(libs="$(CORBA_LIB_NODYN)"; $(CXXExecutable))
