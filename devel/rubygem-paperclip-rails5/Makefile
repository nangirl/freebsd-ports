PORTNAME=	paperclip
DISTVERSION=	6.1.0
PORTREVISION=	2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails5

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Easy upload management for ActiveRecord
WWW=		https://github.com/thoughtbot/paperclip

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-activemodel5>=4.2.0:databases/rubygem-activemodel5 \
		rubygem-activesupport5>=4.2.0:devel/rubygem-activesupport5 \
		rubygem-mimemagic>=0.3.0:misc/rubygem-mimemagic \
		rubygem-mime-types>=0:misc/rubygem-mime-types \
		rubygem-terrapin>=0.6.0:devel/rubygem-terrapin

USES=		cpe gem
CPE_VENDOR=	thoughtbot

NO_ARCH=	yes

OPTIONS_SINGLE=			IMAGEMAGICK
OPTIONS_SINGLE_IMAGEMAGICK=	IMX11 IMNOX11
OPTIONS_DEFAULT=		IMNOX11

IMNOX11_DESC=		Depend on ImageMagick without X11 support
IMX11_DESC=		Depend on ImageMagick with X11 support

IMNOX11_USES=		magick:6,run,nox11
IMX11_USES=		magick:6,run

.include <bsd.port.mk>
