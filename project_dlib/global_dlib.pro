TEMPLATE = subdirs

SUBDIRS += \
    app_dlib \
    dlib \
    dlibsub

dlib.depends = dlibsub
app_dlib.depends = dlib






