# Created by: Thomas Hurst <tom@hur.st>
# $FreeBSD$

PORTNAME=	qgrep
PORTVERSION=	0.0.2015022301
CATEGORIES=	textproc

MAINTAINER=	tom@hur.st
COMMENT=	Fast regular expression searcher with incrementally updated search index

LICENSE=	BSD2CLAUSE

USES=		gmake

USE_GITHUB=	YES
GH_ACCOUNT=	zeux
GH_COMMIT=	ea1a2a87

PLIST_FILES=	bin/qgrep

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/qgrep ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
