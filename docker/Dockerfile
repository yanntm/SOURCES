FROM fedora

RUN dnf -y install git

# Install dependencies
RUN (curl -H 'Cache-Control: no-cache' \
	      https://raw.githubusercontent.com/greatspn/SOURCES/master/download.sh | \
	 iconv -f latin1 | bash -s -- -Fedora  -only-deps -dont-install)



# Compile and install Meddly and GreatSPN
RUN (curl -H 'Cache-Control: no-cache' \
	      https://raw.githubusercontent.com/greatspn/SOURCES/master/download.sh | \
          iconv -f latin1 | MKFLAGS="-j 4" bash -s -- -docker -dont-install -dont-build )

RUN (curl -H 'Cache-Control: no-cache' \
	      https://raw.githubusercontent.com/greatspn/SOURCES/master/download.sh | \
          iconv -f latin1 | MKFLAGS="-j 4" bash -s -- -docker  )

RUN (curl -H 'Cache-Control: no-cache' \
	      https://raw.githubusercontent.com/greatspn/SOURCES/master/download.sh | \
          iconv -f latin1 | MKFLAGS="-j 4" bash -s -- -docker  )

#RUN ( cd GreatSPN/SOURCES/contrib ; \
#      tar xzf mcl-latest.tar.gz ; \
#      cd mcl-14-137/ ; \
#      ./configure ; make ; make install )

# Repeat update/recompile
ARG update_version
RUN (curl -H 'Cache-Control: no-cache' \
	      https://raw.githubusercontent.com/greatspn/SOURCES/master/download.sh | \
          iconv -f latin1 | MKFLAGS="-j 15" bash -s -- -docker  -dont-build-meddly -dont-install-meddly )


CMD [ "/bin/bash" ]
