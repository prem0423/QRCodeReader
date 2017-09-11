//
//  ViewController.h
//  QRCodeReader
//
//  Created by Blaze Automation on 08/09/17.
//  Copyright © 2017 Blaze Automation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate>

@property (nonatomic) BOOL isReading;

@property (weak, nonatomic) IBOutlet UIView *viewPreview;
@property (weak, nonatomic) IBOutlet UILabel *lblStatus;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *bbitemStart;

- (IBAction)startStopReading:(id)sender;

@property (nonatomic, strong) AVCaptureSession *captureSession;
@property (nonatomic, strong) AVCaptureVideoPreviewLayer *videoPreviewLayer;

- (BOOL)startReading;
- (void)stopReading; 

@property (nonatomic, strong) AVAudioPlayer *audioPlayer;
- (void)loadBeepSound;
@end
