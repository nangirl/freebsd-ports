PORTNAME=	compreffor
PORTVERSION=	0.4.6
PORTREVISION=	3
CATEGORIES=	x11-fonts python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lantw44@gmail.com
COMMENT=	CFF subroutinizer for fontTools
WWW=		https://github.com/googlei18n/compreffor

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}fonttools>=3.1:print/py-fonttools@${PY_FLAVOR}

USES=		compiler:c++11-lang python:3.6+ zip
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.mk>
