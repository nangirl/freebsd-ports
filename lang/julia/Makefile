PORTNAME=	julia
DISTVERSION=	1.8.5
DISTVERSIONSUFFIX=	-full
CATEGORIES=	lang math
MASTER_SITES=	https://github.com/JuliaLang/${PORTNAME}/releases/download/v${DISTVERSION}/

MAINTAINER=	rizor.reardon@yahoo.com
COMMENT=	Implementation of Julia, a language for technical computing
WWW=		https://julialang.org/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

ONLY_FOR_ARCHS=		amd64
ONLY_FOR_ARCHS_REASON=	Has not been ported to this platform for freebsd

MY_DEPENDS=	7zz:archivers/7-zip
BUILD_DEPENDS=	patchelf:sysutils/patchelf \
		cmake:devel/cmake-core \
		${MY_DEPENDS}
LIB_DEPENDS=	libcurl.so:ftp/curl \
		libgit2.so:devel/libgit2 \
		libgmp.so:math/gmp \
		libmbedtls.so:security/mbedtls \
		libmpfr.so:math/mpfr \
		libpcre2-8.so:devel/pcre2 \
		libssh2.so:security/libssh2 \
		libutf8proc.so:textproc/utf8proc \
		libnghttp2.so:www/libnghttp2 \
		libunwind.so:devel/libunwind \
		libopenlibm.so:math/openlibm
RUN_DEPENDS=	${MY_DEPENDS}

USES=		gmake cpe fortran python perl5 blaslapack:openblas

CPE_VENDOR=	julialang

USE_CXXSTD=	c++14
USE_LDCONFIG=	yes

MAKE_ARGS+=	NO_GIT=1 \
		USE_BINARYBUILDER=0 \
		prefix=${PREFIX} \
		JCXXFLAGS="${CXXFLAGS}" \
		USE_GPL_LIBS=0 \
		ARCH=x86_64 \
		JULIA_CPU_TARGET=generic \
		USE_SYSTEM_CURL=1 \
		USE_SYSTEM_GMP=1 \
		USE_SYSTEM_OPENLIBM=1 \
		USE_SYSTEM_LAPACK=1 \
		USE_SYSTEM_LIBGIT2=1 \
		USE_SYSTEM_LIBSSH2=1 \
		USE_SYSTEM_MBEDTLS=1 \
		USE_SYSTEM_MPFR=1 \
		USE_SYSTEM_PATCHELF=1 \
		USE_SYSTEM_PCRE=1 \
		USE_SYSTEM_UTF8PROC=1 \
		USE_SYSTEM_P7ZIP=1 \
		USE_SYSTEM_BLAS=1 \
		USE_SYSTEM_NGHTTP2=1 \
		USE_SYSTEM_CSL=1 \
		USE_SYSTEM_ZLIB=1 \
		USE_SYSTEM_LIBUNWIND=1
ALL_TARGET=	default
INSTALL_TARGET=	install
TEST_TARGET=	test

CFLAGS+=	-fpic

BINARY_ALIAS=	python3=${PYTHON_CMD} gfortran=gfortran${_GCC_VER}

WRKSRC=		${WRKDIR}/julia-${DISTVERSION}

PLIST_SUB=	VERSION="${PORTVERSION:R}"
PORTDOCS=	html

OPTIONS_DEFINE=		DEBUG DOCS NATIVE
OPTIONS_DEFAULT=	DOCS
OPTIONS_SUB=		yes

NATIVE_DESC=		Build with native CPU JIT tuning
NATIVE_MAKE_ARGS=	JULIA_CPU_TARGET=native

DEBUG_MAKE_ARGS=	FORCE_ASSERTIONS=1 \
			ALL_TARGET=all \
			BUNDLE_DEBUG_LIBS=1

DOCS_VARS=		INSTALL_TARGET+=install-docs

post-patch:
	echo "override TAGGED_RELEASE_BANNER=\"FreeBSD port lang/${PORTNAME} build\"" >> ${WRKSRC}/Make.user
	# unset ARCH for auto-detection
	# Julia build script uses the name x86_86/x86, which are different from ports framework
	echo "ARCH=" >> ${WRKSRC}/Make.user
	echo "LIBBLAS=-lopenblas -L${LOCALBASE}/lib" >> ${WRKSRC}/Make.user
	echo "LIBBLASNAME=libopenblas" >> ${WRKSRC}/Make.user
	echo 'LIBLAPACK= $$(LIBBLAS)' >> ${WRKSRC}/Make.user
	echo 'LIBLAPACKNAME= $$(LIBBLASNAME)' >> ${WRKSRC}/Make.user

post-configure:
	${CC} ${CFLAGS} -lopenblas ${LDFLAGS} -o ${WRKSRC}/check_openblas \
		${FILESDIR}/check_openblas.c
	${WRKSRC}/check_openblas && ( \
		echo "USE_BLAS64=1" >> ${WRKSRC}/Make.user \
	) || ( \
		echo "USE_BLAS64=0" >> ${WRKSRC}/Make.user \
	)

pre-install:
	${CP} ${WRKSRC}/deps/srccache/cacert-2022-02-01.pem ${WRKSRC}/usr/share/julia/cert.pem

post-install:
	# clean up for Pkg3.jl
.for file in .codecov.yml .travis.yml appveyor.yml bors.toml .gitignore source-extracted *.orig
	${FIND} ${STAGEDIR}${PREFIX}/share/julia/ -name "${file}" -delete
.endfor
.for dir in Statistics SuiteSparse ArgTools Pkg Downloads LibCURL NetworkOptions Tar
	${RM} -fr ${STAGEDIR}${PREFIX}/share/julia/stdlib/v${PORTVERSION:R}/${dir}/.github/
.endfor

post-install-DEBUG-off:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/julia*
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libjulia.so*
.for bin in libccalltest.so libllvmcalltest.so libjulia-internal.so* libblastrampoline.so libdSFMT.so libuv.so* libLLVM* sys.so libjulia-codegen.so*
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/julia/${bin}
.endfor

post-install-DOCS-off:
	${RM} -r ${STAGEDIR}${PREFIX}/${INSTALLDIR}/share/doc

.include <bsd.port.mk>
