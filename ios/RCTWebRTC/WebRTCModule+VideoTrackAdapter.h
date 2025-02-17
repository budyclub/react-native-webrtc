
#import "WebRTCModule.h"
#import <WebRTC/RTCPeerConnection.h>

@interface RTCPeerConnection (VideoTrackAdapter)

@property (nonatomic, strong) NSMutableDictionary<NSString *,  id> *videoTrackAdapters;

- (void)addVideoTrackAdapter:(RTCVideoTrack*)track;
- (void)removeVideoTrackAdapter:(RTCVideoTrack*)track;

@end

