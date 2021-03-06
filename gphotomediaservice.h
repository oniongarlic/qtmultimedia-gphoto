#ifndef GPHOTOMEDIASERVICE_H
#define GPHOTOMEDIASERVICE_H

#include <QMediaService>

class GPhotoCameraSession;
class GPhotoCameraControl;
class GPhotoVideoRendererControl;
class GPhotoCameraImageCaptureControl;
class GPhotoCameraCaptureDestinationControl;
class GPhotoVideoProbeControl;
class GPhotoExposureControl;


class GPhotoMediaService : public QMediaService
{
    Q_OBJECT

public:
    explicit GPhotoMediaService(QObject *parent = 0);

    QMediaControl* requestControl(const char *name);
    void releaseControl(QMediaControl *control);

private:
    GPhotoCameraSession *m_session;
    GPhotoCameraControl *m_cameraControl;
    GPhotoVideoRendererControl *m_videoRendererControl;
    GPhotoCameraImageCaptureControl *m_imageCaptureControl;
    GPhotoCameraCaptureDestinationControl *m_destinationControl;
    GPhotoVideoProbeControl *m_videoProbeControl;
    GPhotoExposureControl *m_exposureControl;
};

#endif // GPHOTOMEDIASERVICE_H
