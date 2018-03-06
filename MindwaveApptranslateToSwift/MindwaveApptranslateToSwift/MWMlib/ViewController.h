//
//  ViewController.h
//  MindwaveApptranslateToSwift
//
//  Created by IOS Directed Study on 3/2/18.
//  Copyright © 2018 IOS Directed Study. All rights reserved.
//

#ifndef ViewController_h
#define ViewController_h
import AlgoSdk
import UIKit

@IBOutlet var stateLabel: UILabel!
@IBOutlet var signalLabel: UILabel!
@IBOutlet var intervalSlider: UISlider!
@IBOutlet var intervalValue: UILabel!
@IBOutlet var dataButton: UIButton!
@IBOutlet var startPauseButton: UIButton!
@IBOutlet var stopButton: UIButton!
@IBOutlet var bcqThreshold: UISegmentedControl!
@IBOutlet var bcqThresholdTitle: UILabel!
@IBOutlet var bcqWindowStepper: UIStepper!
@IBOutlet var bcqWindow: UILabel!
@IBOutlet var bcqWindowTitle: UILabel!
@IBOutlet var textView: UITextView!
@IBOutlet var myGraph: CPTGraphHostingView!
@IBOutlet var segment: UISegmentedControl!
@IBOutlet var apCheckbox: UISwitch!
@IBOutlet var meCheckbox: UISwitch!
@IBOutlet var me2Checkbox: UISwitch!
@IBOutlet var fCheckbox: UISwitch!
@IBOutlet var f2Checkbox: UISwitch!
@IBOutlet var attCheckbox: UISwitch!
@IBOutlet var medCheckbox: UISwitch!
@IBOutlet var crCheckbox: UISwitch!
@IBOutlet var alCheckbox: UISwitch!
@IBOutlet var cpCheckbox: UISwitch!
@IBOutlet var etCheckbox: UISwitch!
@IBOutlet var yyCheckbox: UISwitch!
@IBOutlet var bpCheckbox: UISwitch!
@IBOutlet var blinkCheckbox: UISwitch!
@IBOutlet var setAlgoButton: UIButton!
@IBOutlet var attLevelIndicator: UIProgressView!
@IBOutlet var attValue: UILabel!
@IBOutlet var attLabel: UILabel!
@IBOutlet var medLevelIndicator: UIProgressView!
@IBOutlet var medValue: UILabel!
@IBOutlet var medLabel: UILabel!
@IBOutlet var blinkImage: UIImageView!
@IBOutlet var configButton: UIButton!
@IBOutlet var devicePicker: UIPickerView!
@IBOutlet var selectBtn: UIButton!
@IBOutlet var scanDeviceBtn: UIButton!

#if TARGET_IPHONE_SIMULATOR
#else
// still should#import "TGStreamDelegate.h"
#endif
#if TARGET_IPHONE_SIMULATOR
class ViewController: UIViewController, NskAlgoSdkDelegate, CPTPlotDataSource, CPTPlotDelegate, CPTPlotSpaceDelegate {
}

#endif /* ViewController_h */
