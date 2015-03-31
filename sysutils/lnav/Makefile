# Created by: Thomas Hurst <tom@hur.st>
# $FreeBSD$

PORTNAME=	lnav
PORTVERSION=	0.7.2
CATEGORIES=	sysutils
MASTER_SITES=	GH

MAINTAINER=	tom@hur.st
COMMENT=	Terminal based log file navigator

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS=	${LOCALBASE}/lib/libpcre.a:${PORTSDIR}/devel/pcre

USES=		ncurses readline python
USE_SQLITE=	3

USE_GITHUB=	YES
GH_ACCOUNT=	tstack
GH_PROJECT=	lnav
GH_TAGNAME=	v0.7.2

GNU_CONFIGURE=	yes

PLIST_FILES=    bin/lnav man/man1/lnav.1.gz

.include <bsd.port.mk>
