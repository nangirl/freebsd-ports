PORTNAME=	qcoro
DISTVERSIONPREFIX=	v
DISTVERSION=	0.8.0
CATEGORIES=	devel kde
PKGNAMESUFFIX=	-${FLAVOR}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Coroutines for Qt
WWW=		https://github.com/danvratil/qcoro

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSES/MIT.txt

FLAVORS=	qt5 qt6
FLAVOR?=	qt5

USES=		cmake compiler:c++17-lang pkgconfig qt:${FLAVOR:S/qt//}
USE_GITHUB=	yes
GH_ACCOUNT=	danvratil
_USE_QT_qt5=	concurrent core dbus declarative network testlib websockets \
		buildtools:build qmake:build
_USE_QT_qt6=	base websockets
USE_QT=		${_USE_QT_${FLAVOR}}

CMAKE_OFF=	QCORO_BUILD_EXAMPLES
CMAKE_ARGS=	-DUSE_QT_VERSION=${FLAVOR:S/qt//}

PLIST_SUB=	QT_VER=${FLAVOR:S/qt//}

# XXX Drop after FreeBSD 12.3 EOL around 2023-03-31
.if exists(/usr/include/c++/v1) && !exists(/usr/include/c++/v1/concepts)
BROKEN_FreeBSD_12=	requires recent C++ compiler
.endif

.include <bsd.port.mk>
