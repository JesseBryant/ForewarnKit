//
//  Filterer.swift
//  ForewarnKit
//
//  Created by IOS Directed Study on 1/11/18.
//  Copyright © 2018 IOS Directed Study. All rights reserved.
//

import Foundation

final class Filterer {

    private(set) var minUnfiltered: NSNumber = 0.0
    private(set) var maxUnfiltered: NSNumber = 0.0
    private(set) var minFiltered: NSNumber = 0.0
    private(set) var maxFiltered: NSNumber = 0.0
    
    func filter(data rawData: inout [NSNumber], cutset: [NSNumber], paramaters: Parameters) {
        
        let half = paramaters.halfWidth
        let NN = Double(3 * (3 * half ) * (half + 3 * half - 1))
        let RD = Double((2 * half + 1) * (4 * half * half + 4 * half - 3))
        let N1 = Double(half + 1)
        let CF1 = NN / RD
        let CF2 = 15.0 / RD
        let CF3 = 45.0 / Double(RD * Double(half) * N1) 
        var F0 = 0.0
        var F1 = 0.0
        var F2 = 0.0
        var G0 = 0.0
        var G1 = 0.0
        var G2 = 0.0
        
        minUnfiltered = NSNumber(value: 1000000.0)
        maxUnfiltered = NSNumber(value: -1000000.0)
        minFiltered = NSNumber(value: 1000000.0)
        maxFiltered = NSNumber(value: -1000000.0)
        
        // Setup
        for i in 0...cutset.count {
            rawData.append(NSNumber(value: 0.0))
            
            if cutset[i].doubleValue < minUnfiltered.doubleValue {
                minUnfiltered = cutset[i]
            }
            else if cutset[i].doubleValue > maxUnfiltered.doubleValue {
                maxUnfiltered = cutset[i]
            }
        }
        
        // Filter
        for i in half...cutset.count - half {
            if i == half {
                
                for j in -half..<half {
                    F0 += cutset[i+j].doubleValue
                    F1 += cutset[i+j].doubleValue * Double(j)
                    F2 += cutset[i+j].doubleValue * Double(j) * Double(j)
                }
            }
            else {
                G0 = F0 - cutset[i - Int(N1)].doubleValue + cutset[i + half].doubleValue
                G1 = F1 + (cutset[i - Int(N1)].doubleValue * N1) + (cutset[i + half].doubleValue * Double(half)) - F0
                G2 = F2 - (cutset[i - Int(N1)].doubleValue * N1 * N1) + (cutset[i + half].doubleValue * Double(half) * Double(half)) - (2 * F1) + F0
                
                F0 = G0
                F1 = G1
                F2 = G2
            }
            
            let artifact = (CF1 * F0) - (CF2 * F2)
            
            rawData[i - half] = NSNumber(value: cutset[i].doubleValue - artifact)
            
            if rawData[i].doubleValue < minFiltered.doubleValue {
                minFiltered = rawData[i]
            }
            else if rawData[i].doubleValue > maxFiltered.doubleValue {
                maxFiltered = rawData[i]
            }
        }
    }
}
