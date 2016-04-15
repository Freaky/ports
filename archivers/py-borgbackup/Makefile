# Created by: Thomas Hurst <tom@hur.st>
# $FreeBSD$

PORTNAME=	borgbackup
PORTVERSION=	1.0.1
CATEGORIES=	archivers python
MASTER_SITES=	https://github.com/borgbackup/borg/releases/download/${PORTVERSION}/
DISTNAME=	${PORTNAME}-${PORTVERSION}

MAINTAINER=	tom@hur.st
COMMENT=	Deduplicating backup program

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

COMMON_DEPENDS=	${PYTHON_PKGNAMEPREFIX}msgpack-python>=0.4.6:${PORTSDIR}/devel/py-msgpack-python \
		${PYTHON_PKGNAMEPREFIX}pylibacl>=0:${PORTSDIR}/security/py-pylibacl
BUILD_DEPENDS=	${COMMON_DEPENDS}
RUN_DEPENDS=	${COMMON_DEPENDS}
LIB_DEPENDS=	liblz4.so:${PORTSDIR}/archivers/liblz4

USES=		python:3.4+
USE_PYTHON=	autoplist distutils
USE_OPENSSL=	yes

STRIP_FILES=	hashindex.so platform_freebsd.so chunker.so compress.so crypto.so

UNAMER!=	uname -r
PYDISTUTILS_BUILDPATH=${BUILD_WRKSRC}/build/lib.${OPSYS:tl}-${UNAMER}-${ARCH}-${PYTHON_VER}

.include <bsd.port.pre.mk>

.if ${OSVERSION} < 1000015
BUILD_DEPENDS+=	openssl>=1.0:${PORTSDIR}/security/openssl
RUN_DEPENDS+=	openssl>=1.0:${PORTSDIR}/security/openssl
.endif

.if defined(PACKAGE_BUILDING) && ${PYTHON_VER} != ${PYTHON_DEFAULT}
IGNORE=	you have python ${PYTHON_DEFAULT} set as the default, and this needs ${PYTHON_VER}
.endif

post-install:
	${STRIP_CMD} ${STRIP_FILES:S,^,${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/borg/,}

regression-test: build
	(cd ${PYDISTUTILS_BUILDPATH} && \
		${SETENV} PYTHONPATH="${PYDISTUTILS_BUILDPATH}:${PYTHONPATH}" \
		py.test --ignore=borg/testsuite/benchmark.py)

.include <bsd.port.post.mk>
