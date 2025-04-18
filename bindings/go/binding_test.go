package tree_sitter_nelt_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_nelt "github.com/kmafeni04/tree-sitter-nelt/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_nelt.Language())
	if language == nil {
		t.Errorf("Error loading Nelt grammar")
	}
}
