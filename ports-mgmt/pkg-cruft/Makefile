# $FreeBSD$

PORTNAME=	pkg-cruft
PORTVERSION=	0.1
CATEGORIES=	ports-mgmt

MAINTAINER=	tom@hur.st
COMMENT=	Help keep FreeBSD tidy

LICENSE=	MIT

USE_GITHUB=	yes
GH_ACCOUNT=	Freaky
GH_TAGNAME=	84c12968cd3a51840c288746588600b034ea50c4

USES=	shebangfix

NO_BUILD=	yes
NO_ARCH=	yes
USE_RUBY=	yes
RUBY_NO_BUILD_DEPENDS=	yes
SHEBANG_FILES=	${PORTNAME}

PLIST_FILES=	bin/${PORTNAME} \
		man/man8/${PORTNAME}.8.gz

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/pkg-cruft ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/pkg-cruft.8 ${STAGEDIR}${MAN8PREFIX}/man/man8

.include <bsd.port.mk>
