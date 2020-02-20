# $FreeBSD$

PORTNAME=	checkrestart
PORTVERSION=	0.1.0
CATEGORIES=	sysutils

MAINTAINER=	tom@hur.st
COMMENT=	Find processes that need restarting after an upgrade

LICENSE=	MIT

USE_GITHUB=	yes
GH_ACCOUNT=	Freaky
GH_TAGNAME=	fe2ea8ada55f5a03e42201d6faf8d504b2c0d93d

PLIST_FILES=	bin/checkrestart man/man1/checkrestart.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/checkrestart ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/checkrestart.1 ${STAGEDIR}${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
