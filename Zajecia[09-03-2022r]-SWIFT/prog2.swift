//
//  prog2.swift
//  Zajecia[09-03-2022r]-SWIFT
//
//  Created by Jakub Kurc on 09/03/2022.
//

import Foundation

let N: Int = 5

func avg(numbers: [Float]) -> Float {
    var sum : Float = 0, g = 0
    
    for number in numbers {
        if number >= 0 {
            g += 1
            sum += number
        }
    }
    
    if g > 0 {
        return Float(sum) / Float(g)
    } else {
        return -1
    }
}

func grading(score: Float) -> String {
    if score <= 1.0 {
        return "F"
    } else if score <= 2.0 {
        return "D"
    } else if score <= 3.0 {
        return "C"
    } else if score <= 4.0 {
        return "B"
    } else {
        return "A"
    }
}

func prog2() -> Int {
    var grades: [Float] = [Float](repeating: -1, count: N)
    var score: Float
    
    print("Surename? : ", terminator: "")
    let surename = readLine()
    
    print("Enter \(N) grades :")
    for i in 0...N - 1 {
        let number = Float(readLine()!)
        if let number = number {
            grades[i] = number
        }
    }
    
    score = avg(numbers: grades)
    
    print("\(surename ?? "[surename placeholder]") grade: \(grading(score: score)) score: \(score)")
    
    return 0
}

