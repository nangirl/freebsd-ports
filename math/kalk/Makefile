PORTNAME=	kalk
DISTVERSION=	23.01.0
CATEGORIES=	math kde
MASTER_SITES=	KDE/stable/plasma-mobile/${DISTVERSION}/

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Kalk is a convergent calculator for Plasma
WWW=		https://apps.kde.org/kalk

LICENSE=	GPLv3+

LIB_DEPENDS=	libgmp.so:math/gmp \
		libmpfr.so:math/mpfr

USES=		bison cmake desktop-file-utils kde:5 qt:5 tar:xz
USE_KDE=	config coreaddons ecm i18n kirigami2 unitconversion
USE_QT=		core declarative gui network quickcontrols2 testlib widgets \
		buildtools:build qmake:build

.include <bsd.port.mk>
