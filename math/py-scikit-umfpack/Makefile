PORTNAME=	scikit-umfpack
DISTVERSION=	0.3.3
CATEGORIES=	math python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Python interface to UMFPACK sparse direct solver
WWW=		https://scikit-umfpack.github.io/scikit-umfpack/

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BROKEN=		does not build with SuiteSparse 6 # https://github.com/scikit-umfpack/scikit-umfpack/issues/78

BUILD_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}scipy>0:science/py-scipy@${PY_FLAVOR} \
		swig:devel/swig
LIB_DEPENDS=	libamd.so:math/suitesparse-amd \
		libopenblas.so:math/openblas \
		libumfpack.so:math/suitesparse-umfpack
RUN_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}scipy>0:science/py-scipy@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	distutils cython autoplist pytest # tests fail, see https://github.com/scikit-umfpack/scikit-umfpack/issues/77

TEST_ENV=	${MAKE_ENV} PYTHONPATH=${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/scikits/umfpack/__umfpack${PYTHON_EXT_SUFFIX}.so

.include <bsd.port.mk>
