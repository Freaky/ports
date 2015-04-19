# Created by: Thomas Hurst <tom@hur.st>
# $FreeBSD: head/sysutils/lnav/Makefile 384207 2015-04-18 06:03:59Z riggs $

PORTNAME=	lnav
PORTVERSION=	0.7.3
CATEGORIES=	sysutils

MAINTAINER=	tom@hur.st
COMMENT=	Terminal based log file navigator

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/lib/libpcre.a:${PORTSDIR}/devel/pcre

USE_GITHUB=	yes
GH_ACCOUNT=	tstack
GH_TAGNAME=	v${PORTVERSION}

GNU_CONFIGURE=	yes
USES=		autoreconf execinfo ncurses python readline
USE_SQLITE=	3

PLIST_FILES=	bin/lnav man/man1/lnav.1.gz

.include <bsd.port.mk>
