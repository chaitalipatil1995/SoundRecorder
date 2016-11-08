//
//  ViewController.h
//  CPSoundRecorder
//
//  Created by Student P_06 on 07/11/16.
//  Copyright © 2016 chaitu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController
{
    AVAudioPlayer *audioPlayer;
    AVAudioRecorder *audioRecoder;
    NSMutableDictionary *recordSetting;

}
- (IBAction)recordAction:(id)sender;
- (IBAction)playAction:(id)sender;
- (IBAction)stopAction:(id)sender;


@end

