// First argument to macro is a boolean indicating whether or not a function is
// essential or not. If a non-essential function is not exported by the DLL,
// then initialization fails.

OVRFUNC(true,  ovrResult,        ovr_Initialize,                 (const ovrInitParams* param))
OVRFUNC(true,  void,             ovr_Shutdown,                   ())
OVRFUNC(true,  void,             ovr_GetLastErrorInfo,           (ovrErrorInfo* errorInfo))
OVRFUNC(true,  const char*,      ovr_GetVersionString,           ())
OVRFUNC(true,  int,              ovr_TraceMessage,               (int level, const char* message))
OVRFUNC(true,  ovrHmdDesc,       ovr_GetHmdDesc,                 (ovrSession session))
OVRFUNC(true,  ovrResult,        ovr_Create,                     (ovrSession* pSession, ovrGraphicsLuid* pLuid))
OVRFUNC(true,  void,             ovr_Destroy,                    (ovrSession session))
OVRFUNC(true,  ovrResult,        ovr_GetSessionStatus,           (ovrSession session, ovrSessionStatus* sessionStatus))
OVRFUNC(true,  ovrResult,        ovr_RecenterTrackingOrigin,     (ovrSession session))
OVRFUNC(true,  ovrTrackingState, ovr_GetTrackingState,           (ovrSession session, double absTime, ovrBool latencyMarker))
OVRFUNC(true,  ovrResult,        ovr_GetInputState,              (ovrSession session, unsigned int controllerTypeMask, ovrInputState* inputState))
OVRFUNC(true,  ovrResult,        ovr_SetControllerVibration,     (ovrSession session, unsigned int controllerTypeMask, float frequency, float amplitude))
OVRFUNC(true,  void,             ovr_DestroyTextureSwapChain,    (ovrSession session, ovrTextureSwapChain textureSet))
OVRFUNC(true,  void,             ovr_DestroyMirrorTexture,       (ovrSession session, ovrMirrorTexture mirrorTexture))
OVRFUNC(true,  ovrSizei,         ovr_GetFovTextureSize,          (ovrSession session, ovrEyeType eye, ovrFovPort fov, float pixelsPerDisplayPixel))
OVRFUNC(true,  ovrEyeRenderDesc, ovr_GetRenderDesc,              (ovrSession session, ovrEyeType eyeType, ovrFovPort fov))
OVRFUNC(true,  ovrResult,        ovr_SubmitFrame,                (ovrSession session, long long frameIndex, const ovrViewScaleDesc* viewScaleDesc, ovrLayerHeader const * const * layerPtrList, unsigned int layerCount))
OVRFUNC(true,  ovrResult,        ovr_WaitToBeginFrame,           (ovrSession session, long long frameIndex))
OVRFUNC(true,  ovrResult,        ovr_BeginFrame,                 (ovrSession session, long long frameIndex))
OVRFUNC(true,  ovrResult,        ovr_EndFrame,                   (ovrSession session, long long frameIndex, const ovrViewScaleDesc* viewScaleDesc, ovrLayerHeader const * const * layerPtrList, unsigned int layerCount))
OVRFUNC(true,  double,           ovr_GetPredictedDisplayTime,    (ovrSession session, long long frameIndex))
OVRFUNC(true,  double,           ovr_GetTimeInSeconds,           ())
OVRFUNC(true,  ovrBool,          ovr_GetBool,                    (ovrSession session, const char* propertyName, ovrBool defaultVal))
OVRFUNC(true,  ovrBool,          ovr_SetBool,                    (ovrSession session, const char* propertyName, ovrBool value))
OVRFUNC(true,  int,              ovr_GetInt,                     (ovrSession session, const char* propertyName, int defaultVal))
OVRFUNC(true,  ovrBool,          ovr_SetInt,                     (ovrSession session, const char* propertyName, int value))
OVRFUNC(true,  float,            ovr_GetFloat,                   (ovrSession session, const char* propertyName, float defaultVal))
OVRFUNC(true,  ovrBool,          ovr_SetFloat,                   (ovrSession session, const char* propertyName, float value))
OVRFUNC(true,  unsigned int,     ovr_GetFloatArray,              (ovrSession session, const char* propertyName, float values[], unsigned int valuesCapacity))
OVRFUNC(true,  ovrBool,          ovr_SetFloatArray,              (ovrSession session, const char* propertyName, float values[], unsigned int valuesSize))
OVRFUNC(true,  const char*,      ovr_GetString,                  (ovrSession session, const char* propertyName, const char* defaultVal))
OVRFUNC(true,  ovrBool,          ovr_SetString,                  (ovrSession sessiondesc, const char* propertyName, const char* value))
OVRFUNC(true,  ovrDetectResult,  ovr_Detect,                     (int timeoutMsec))
OVRFUNC(true,  ovrMatrix4f,      ovrMatrix4f_Projection,         (ovrFovPort fov, float znear, float zfar, unsigned int projectionModFlags))
OVRFUNC(true,  ovrTimewarpProjectionDesc, ovrTimewarpProjectionDesc_FromProjection, (ovrMatrix4f projection, unsigned int projectionModFlags))
OVRFUNC(true,  ovrMatrix4f,      ovrMatrix4f_OrthoSubProjection, (ovrMatrix4f projection, ovrVector2f orthoScale, float orthoDistance, float hmdToEyeViewOffsetX))
OVRFUNC(true,  void,             ovr_CalcEyePoses2,               (ovrPosef headPose, const ovrPosef HmdToEyePose[2], ovrPosef outEyePoses[2]))
OVRFUNC(true,  void,             ovr_GetEyePoses,                (ovrSession session, long long frameIndex, ovrBool latencyMarker, const ovrPosef HmdToEyePose[2], ovrPosef outEyePoses[2], ovrTrackingState* outHmdTrackingState))
OVRFUNC(true,  ovrResult,        ovr_CreateTextureSwapChainGL,   (ovrSession session, const ovrTextureSwapChainDesc* desc, ovrTextureSwapChain* out_TextureSwapChain))
OVRFUNC(true,  ovrResult,        ovr_GetTextureSwapChainBufferGL,(ovrSession session, ovrTextureSwapChain chain, int index, unsigned int* out_TexId))
OVRFUNC(true,  ovrResult,        ovr_CreateMirrorTextureGL,      (ovrSession session, const ovrMirrorTextureDesc* desc, ovrMirrorTexture* out_MirrorTexture))
OVRFUNC(true,  ovrResult,        ovr_GetMirrorTextureBufferGL,   (ovrSession session, ovrMirrorTexture mirrorTexture, unsigned int* out_TexId))
OVRFUNC(true,  ovrResult,        ovr_GetTextureSwapChainLength,  (ovrSession session, ovrTextureSwapChain chain, int* out_Length))
OVRFUNC(true,  ovrResult,        ovr_GetTextureSwapChainCurrentIndex,(ovrSession session, ovrTextureSwapChain chain, int* out_Index))
OVRFUNC(true,  ovrResult,        ovr_GetTextureSwapChainDesc,    (ovrSession session, ovrTextureSwapChain chain, ovrTextureSwapChainDesc* out_Desc))
OVRFUNC(true,  ovrResult,        ovr_CommitTextureSwapChain,     (ovrSession session, ovrTextureSwapChain chain))

#ifdef _WIN32
OVRFUNC(true,  ovrResult,        ovr_GetAudioDeviceOutGuidStr,   (wchar_t deviceOutStrBuffer[OVR_AUDIO_MAX_DEVICE_STR_SIZE]))
#endif

