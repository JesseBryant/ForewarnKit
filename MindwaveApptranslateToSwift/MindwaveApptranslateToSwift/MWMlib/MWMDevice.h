//
//  MWMDevice.h
//  MindwaveApptranslateToSwift
//
//  Created by IOS Directed Study on 3/2/18.
//  Copyright © 2018 IOS Directed Study. All rights reserved.
//

#ifndef MWMDevice_h
#define MWMDevice_h

import CoreBluetooth

//-
class MWMDevice: NSObject, MWMDelegate {
    weak var delegate: MWMDelegate?
    
    class func sharedInstance() -> MWMDevice {
    }
    
    func getVersion() -> String {
    }
    
  
    func scanDevice() {
    }
    
    
    func stopScanDevice() {
    }
    
 
    func connect(_ deviceID: String) {
    }
    
   
    func disconnectDevice() {
    }
    
    
    func writeConfig(_ cmd: TGMWMConfigCMD) {
    }
    
    func readConfig() {
    }
    
    func enableConsoleLog(_ enabled: Bool) {
    }
    
   
    func enableLogging(withOptions option: UInt) -> String {
    }
    
    func stopLogging() {
    }
}
#endif /* MWMDevice_h */
