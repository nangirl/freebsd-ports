PORTNAME=	sphinx-autodoc-typehints
DISTVERSION=	1.22
CATEGORIES=	textproc python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	sphinx_autodoc_typehints-${DISTVERSION}

MAINTAINER=	andreas@bilke.org
COMMENT=	Type hints (PEP 484) support for the Sphinx autodoc extension
WWW=		https://github.com/tox-dev/sphinx-autodoc-typehints

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE


BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}hatchling>=0.21.1:devel/py-hatchling@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}hatch-vcs>0:devel/py-hatch-vcs@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pip>=22.2:devel/py-pip@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}setuptools>=40.0.4:devel/py-setuptools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}setuptools_scm>=2.0.0:devel/py-setuptools_scm@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}wheel>=0.29.0:devel/py-wheel@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}sphinx>=5.3:textproc/py-sphinx@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sphinx>=5.3:textproc/py-sphinx@${PY_FLAVOR}

USES=		python:3.7+
USE_PYTHON=	autoplist concurrent pep517
NO_ARCH=	yes

.include <bsd.port.mk>
