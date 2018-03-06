//
//  mwmdelegate.h
//  MindwaveApptranslateToSwift
//
//  Created by IOS Directed Study on 3/2/18.
//  Copyright © 2018 IOS Directed Study. All rights reserved.
//
//still need work, raw translation. Next step is transition the functions and taking more advantage of new and more effienct features
#ifndef mwmdelegate_h
#define mwmdelegate_h
import Foundation

protocol MWMDelegate: NSObjectProtocol {
    
    func deviceFound(_ devName: String, mfgID: String, deviceID: String)
    
    func didConnect()
    
    func didDisconnect()
    func eegSample(_ sample: Int)
    
    func eSense(_ poorSignal: Int, attention: Int, meditation: Int)
    
    func eegPowerDelta(_ delta: Int, theta: Int, lowAlpha: Int, highAlpha: Int)
    
    func eegPowerLowBeta(_ lowBeta: Int, highBeta: Int, lowGamma: Int, midGamma: Int)
    
    func eegBlink(_ blinkValue: Int)
    
    //will double check this one
    func mwmBaudRate(_ baudRate: Int, notchFilter: Int)
    
    
    func exceptionMessage(_ eventType: TGBleExceptionEvent)
}
#endif /* mwmdelegate_h */
