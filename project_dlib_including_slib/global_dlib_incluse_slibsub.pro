TEMPLATE = subdirs

SUBDIRS += \
    app_dlib \
    dlib \
    slibsub

dlib.depends = slibsub
app_dlib.depends = dlib






