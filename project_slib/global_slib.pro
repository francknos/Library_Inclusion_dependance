TEMPLATE = subdirs

SUBDIRS += \
    app_slib \
    slib \
    slibsub

slib.depends = slibsub
app_slib.depends = slib






