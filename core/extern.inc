;
; extern.inc
;
; Prototypes for external functions

%ifndef EXTERN_INC
%define EXTERN_INC

	; rllpack.c
	extern rllpack, rllunpack

	; hello.c
	extern hello

	; fs.c
	extern fs_init, searchdir, getfssec, mangle_name, load_config

        ; fat.c
        extern alloc_fill_dir, readdir

%endif ; EXTERN_INC