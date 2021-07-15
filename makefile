all: DataFormats Analyzers

DataFormats::
	(cd DataFormats; make)
	(mvexist.sh DataFormats/src/DataFormats_Dict_rdict.pcm lib/)
	(mvexist.sh DataFormats/libDataFormats.rootmap lib/)

Analyzers::
	(cd Analyzers; make)
	(mvexist.sh Analyzers/src/Analyzers_Dict_rdict.pcm lib/)
	(mvexist.sh Analyzers/libAnalyzers.rootmap lib/)

clean::
	(cd DataFormats; make clean)
	(cd Analyzers; make clean)

distclean::
	(cd DataFormats; make distclean)
	(cd Analyzers; make distclean)

