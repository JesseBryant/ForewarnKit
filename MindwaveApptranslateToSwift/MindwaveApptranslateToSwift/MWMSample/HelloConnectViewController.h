//
//  HelloConnectViewController.h
//  MindwaveApptranslateToSwift
//
//  Created by IOS Directed Study on 3/2/18.
//  Copyright © 2018 IOS Directed Study. All rights reserved.
//

#ifndef HelloConnectViewController_h
#define HelloConnectViewController_h
import UIKit

// The merged MWM instance
class HelloConnectViewController: UIViewController, MWMDelegate, UIPickerViewDelegate, UIPickerViewDataSource {
    @IBOutlet weak var ekgLineView: LineGraphView!
    @IBOutlet weak var toolbar: UIToolbar!
    @IBOutlet weak var devicePicker: UIPickerView!
    var devicesArray = [Any]()
    
    var logging = false
    var rawArray = [Any]()
    var rawIndex: Int = 0
    var sendDataTimer: Timer?
    var cardioZoneHeartRate: Int = 0
    var cardioZoneHeartRate_TS: Date?
    var cardioZoneHRV: Int = 0
    var cardioZoneHRV_TS: Date?
    var rrInt: Int = 0
    var rrInt_TS: Date?
    var cardioZoneBreathingIndex: Int = 0
    var cardioZoneBreathingIndex_TS: Date?
    var cardioZone3D = [Any]()
    var cardioZone3D_TS: Date?
    var heartAge: Int = 0
    var heartAge_TS: Date?
    var heartFitnessLevel: Int = 0
    var heartFitnessLevel_TS: Date?
    var heartLevel: Int = 0
    var heartLevel_TS: Date?
    var relaxation: Int = 0
    var relaxation_TS: Date?
    var mood: Int = 0
    var mood_TS: Date?
    var trainingZone: Int = 0
    var trainingZone_TS: Date?
    var stress: Int = 0
    var stress_TS: Date?
    var smoothedWave: Int = 0
    var tempDevicesArray = [AnyHashable]()
    var candidateIdArray = [AnyHashable]()
    var devNameArray = [AnyHashable]()
    var mfgIDArray = [AnyHashable]()
    //There's two types devices
    var deviceTypeArray = [AnyHashable]()
    var put_alert: UIAlertView?
    var put_alertLast: UIAlertView?
    var labEKGalert: UIAlertView?
    var labEKGalertLast: UIAlertView?
    var labEKGcount: Int = 0
    var labEKGstartTime: Date?
    var labEKGsampleRate: Int = 0
    var labEKGrealTime = false
    var labEKGcomment = ""
    // mwm device info
    var mwDevice: MWMDevice?
    
    @IBAction func onDisconnectClicked(_ sender: Any) {
    }
    
    @IBAction func onSCandidateClicked(_ sender: Any) {
    }
    
    @IBAction func onFinishedButtonClicked(_ sender: Any) {
    }
    
    @IBAction func configMWM(_ sender: Any) {
    }
    }

#endif /* HelloConnectViewController_h */
