PORTNAME=	cue2toc
PORTVERSION=	0.1
CATEGORIES=	audio perl5
MASTER_SITES=	http://www.oook.cz/bsd/distfiles/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl script that converts CUE files into TOC files for cdrdao

DEPRECATED=	Abandonware and unmaintained, please consider using audio/cuetools or sysutils/cdrdao
EXPIRATION_DATE=2023-03-31

RUN_DEPENDS=	p5-Audio-Wav>=0:audio/p5-Audio-Wav

USES=		perl5 shebangfix
NO_WRKSUBDIR=	yes
NO_BUILD=	yes
PLIST_FILES=	bin/cue2toc.pl
SHEBANG_FILES=	cue2toc

pre-patch:
	@${REINPLACE_CMD} -e 's|use warnings;||' ${WRKSRC}/cue2toc

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/cue2toc ${STAGEDIR}${PREFIX}/bin/cue2toc.pl

.include <bsd.port.mk>
