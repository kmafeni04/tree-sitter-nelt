import XCTest
import SwiftTreeSitter
import TreeSitterNelt

final class TreeSitterNeltTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_nelt())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Nelt grammar")
    }
}
