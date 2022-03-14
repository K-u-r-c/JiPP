//
//  prog1.swift
//  Zajecia[09-03-2022r]-SWIFT
//
//  Created by Jakub Kurc on 09/03/2022.
//

import Foundation

func prog1() -> Int {
    print("Int \(MemoryLayout<Int>.size) [\(Int.min), \(Int.max)]")
    print("Int8 \(MemoryLayout<Int8>.size) [\(Int8.min), \(Int8.max)]")
    print("Int16 \(MemoryLayout<Int16>.size) [\(Int16.min), \(Int16.max)]")
    print("Int32 \(MemoryLayout<Int32>.size) [\(Int32.min), \(Int32.max)]")
    print("Int64 \(MemoryLayout<Int64>.size) [\(Int64.min), \(Int64.max)]")
    
    print("UInt \(MemoryLayout<UInt>.size) [\(UInt.min), \(UInt.max)]")
    print("UInt8 \(MemoryLayout<UInt8>.size) [\(UInt8.min), \(UInt8.max)]")
    print("UInt16 \(MemoryLayout<UInt16>.size) [\(UInt16.min), \(UInt16.max)]")
    print("UInt32 \(MemoryLayout<UInt32>.size) [\(UInt32.min), \(UInt32.max)]")
    print("UInt64 \(MemoryLayout<UInt64>.size) [\(UInt64.min), \(UInt64.max)]")
    
    print("Float \(MemoryLayout<Float>.size) [\(Float.leastNonzeroMagnitude), \(Float.greatestFiniteMagnitude)]")
    print("Float32 \(MemoryLayout<Float32>.size) [\(Float32.leastNonzeroMagnitude), \(Float32.greatestFiniteMagnitude)]")
    print("Float64 \(MemoryLayout<Float64>.size) [\(Float64.leastNonzeroMagnitude), \(Float64.greatestFiniteMagnitude)]")
    print("Double \(MemoryLayout<Double>.size) [\(Double.leastNonzeroMagnitude), \(Double.greatestFiniteMagnitude)]")
    
    
    return 0
}
