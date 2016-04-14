--- setup.py.orig	2016-04-14 01:52:03 UTC
+++ setup.py
@@ -231,9 +231,6 @@ if not on_rtd:
 
 setup(
     name='borgbackup',
-    use_scm_version={
-        'write_to': 'borg/_version.py',
-    },
     author='The Borg Collective (see AUTHORS file)',
     author_email='borgbackup@python.org',
     url='https://borgbackup.readthedocs.org/',
@@ -266,7 +263,6 @@ setup(
     },
     cmdclass=cmdclass,
     ext_modules=ext_modules,
-    setup_requires=['setuptools_scm>=1.7'],
     install_requires=install_requires,
     extras_require=extras_require,
 )
