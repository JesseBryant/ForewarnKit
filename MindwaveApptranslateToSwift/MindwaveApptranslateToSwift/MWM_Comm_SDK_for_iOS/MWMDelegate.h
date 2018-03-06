//
//  MWMDelegate.h
//  MindwaveApptranslateToSwift
//
//  Created by IOS Directed Study on 3/2/18.
//  Copyright © 2018 IOS Directed Study. All rights reserved.
//

#ifndef MWMDelegate_h
#define MWMDelegate_h
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
    
    
    func mwmBaudRate(_ baudRate: Int, notchFilter: Int)
    
    
    func exceptionMessage(_ eventType: TGBleExceptionEvent)
}

#endif /* MWMDelegate_h */
