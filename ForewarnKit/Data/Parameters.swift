//
//  Parameters.swift
//  ForewarnKit
//
//  Created by IOS Directed Study on 1/11/18.
//  Copyright © 2018 IOS Directed Study. All rights reserved.
//

import Foundation

final class Parameters {
    //let allows them to be changed but there initially set to int
    //you create all the parameters and give them a default of int
    let baseCases: Int
    let cutsetSize: Int
    let halfWidth: Int
    let numberOfSymbols: Int
    let numberOfDimensions: Int
    let lag: Int
    let mu: Int
    
    let symbolPowers: [Int]
    let ssdd: Int
    //
    init(baseCases: Int,
         cutsetSize: Int,
         halfWidth: Int,
         numberOfSymbols: Int,
         numberOfDimensions: Int,
         lag: Int,
         mu: Int) {
        //set the variables of parameters equal to the variables passed into the init
        //so the variables in the Parameters will actually be equal to the variables coming in from the init function
        self.baseCases = baseCases
        self.cutsetSize = cutsetSize
        self.halfWidth = halfWidth
        self.numberOfSymbols = numberOfSymbols
        self.numberOfDimensions = numberOfDimensions
        self.lag = lag
        self.mu = mu
        
        var tempSymPowers: [Int] = []
        for i in 1...numberOfDimensions - 1 {
            let res = NSDecimalNumber(decimal: pow(Decimal(numberOfSymbols), i))
            tempSymPowers.append(Int(truncating: res))
        }
        
        self.symbolPowers = tempSymPowers
        self.ssdd = self.symbolPowers[self.symbolPowers.count - 1] * numberOfSymbols
    }
}
