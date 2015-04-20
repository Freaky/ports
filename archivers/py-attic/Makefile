# Created by: Thomas Hurst <tom@hur.st>
# $FreeBSD: $

PORTNAME=	attic
PORTVERSION=	0.15
CATEGORIES=	archivers python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Attic-${PORTVERSION}

MAINTAINER=	tom@hur.st
COMMENT=	Deduplicating backup program

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}msgpack>=0.1.10:${PORTSDIR}/devel/py-msgpack
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}msgpack>=0.1.10:${PORTSDIR}/devel/py-msgpack

USES=		python:3.2+
USE_PYTHON=	autoplist distutils
USE_OPENSSL=	yes

PYDISTUTILS_BUILDPATH=${BUILD_WRKSRC}/build/lib.${OPSYS:tl}-${UNAMER}-${ARCH}-${PYTHON_VER}

.include <bsd.port.pre.mk>

.if ${OSVERSION} < 1000000 && !defined(WITH_OPENSSL_PORT)
IGNORE=		requires OpenSSL >= 1.0.0
.endif

regression-test: build
	${SETENV} PYTHONPATH="${PYDISTUTILS_BUILDPATH}:${PYTHONPATH}" \
	  ${PYTHON_CMD} -m attic.testsuite.run

.include <bsd.port.post.mk>
