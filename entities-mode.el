
(defconst entities-keywords
  (regexp-opt
   '("entity" "extends"))
  "List of keywords of the entities language.")

(defconst entities-types
  (regexp-opt '("string" "int" "boolean"))
  "List of standard types of the entities language.")

(defvar entities-font-lock-keywords
  (list
   (cons entities-keywords 'font-lock-keyword-face)
   (cons entities-types 'font-lock-type-face)))

(add-to-list 'lsp-language-id-configuration
             '(entities-mode . "entities"))

;;; make-lsp-client in lsp-mode.el (cl-defstruct lsp--client)
(lsp-register-client
 (make-lsp-client :major-modes '(entities-mode)
                  :server-id 'entities-ls
                  :new-connection (lsp-stdio-connection '("java" "-jar" "/home/rudi/BTSync/Documents/lsp/chapter-2/org.example.entities.parent/org.example.entities.ide/build/libs/org.example.entities.ide-1.0.0-SNAPSHOT-ls.jar"))))

;;;###autoload
(define-derived-mode entities-mode prog-mode "Entities"
  "Major mode for editing entities files.

The hook `prog-mode-hook' is run during initialization, then
`entities-mode-hook'.

The following keys are set:
\\{entities-mode-map}"
  (setq font-lock-defaults '(entities-font-lock-keywords)))

;;;###autoload
(add-to-list 'auto-mode-alist '("\\.entities\\'" . entities-mode))
