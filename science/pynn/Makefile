PORTNAME=	pynn
PORTVERSION=	0.10.1
CATEGORIES=	science python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	PyNN-${PORTVERSION}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Simulator-independent language for building neuronal network models
WWW=		https://neuralensemble.org/PyNN

LICENSE=	CeCILL
LICENSE_NAME=	CeCILL Free Software License Version 2.0
LICENSE_FILE=	${WRKSRC}/LICENSE
LICENSE_PERMS=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS=	${PYNUMPY}

NO_ARCH=	yes

USES=		python:3.6+
USE_PYTHON=	autoplist distutils
PYDISTUTILS_PKGNAME=	PyNN

.include <bsd.port.mk>
