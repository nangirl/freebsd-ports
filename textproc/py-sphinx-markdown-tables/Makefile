PORTNAME=	sphinx-markdown-tables
PORTVERSION=	0.0.15
PORTEPOCH=	1
CATEGORIES=	textproc python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Sphinx extension for rendering tables written in markdown
WWW=		https://github.com/ryanfox/sphinx-markdown-tables

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}markdown>=0:textproc/py-markdown@${PY_FLAVOR}

USES=		python:3.6+
USE_PYTHON=	autoplist distutils concurrent

NO_ARCH=	yes

.include <bsd.port.mk>
