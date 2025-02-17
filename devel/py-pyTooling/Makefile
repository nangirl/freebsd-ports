PORTNAME=	pyTooling
DISTVERSIONPREFIX=	v
DISTVERSION=	2.12.3
CATEGORIES=	devel
#MASTER_SITES=	PYPI # requirements.txt is missing
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Collection of arbitrary classes, decorators, meta-classes, exceptions
WWW=		https://pytooling.github.io/pyTooling/

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.md

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}wheel>=0.38.1:devel/py-wheel@${PY_FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}anytree>=2.8.0:devel/py-anytree@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}coverage>0:devel/py-coverage@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}itertree>0:devel/py-itertree@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}lxml>=4.9:devel/py-lxml@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}mypy>=0.990:devel/py-mypy@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}networkx>=2.6:math/py-networkx@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest-benchmark>0:devel/py-pytest-benchmark@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}python-igraph>0:math/py-python-igraph@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest-cov>0:devel/py-pytest-cov@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}ruamel.yaml>=0.17:devel/py-ruamel.yaml@${PY_FLAVOR}

USES=		python
USE_PYTHON=	pep517 autoplist pytest
USE_GITHUB=	yes

NO_ARCH=	yes

TEST_WRKSRC=	${WRKSRC}/tests

.include <bsd.port.mk>
