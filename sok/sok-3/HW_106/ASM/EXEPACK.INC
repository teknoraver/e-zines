
;                                       ��ᥤ� �����  堪�ࠬ� �ਭ���� ���쬠
;                                 ���⨬�� �����,  ������ �����᪠�� �  �����
;                                 ��� ���� 堪�஢ �����६���� �������⨬�. �
;                                 ������⥫�� १���⠬ ��  ��  �ਢ����,
;                                 ����� ⮣�,  ����� ���������� �஢��஫��-
;                                 ��. �� �ᥬ ⮬, �� �᪫�砥���, �� ࠧ��
;                                 ���� �������� 堪�஢ � ��ᠤ�� �� � ࠧ��
;                                 �������, ����� ������� ��᮫�⭮ �������
;                                 �ணࠬ��.
;                                    (�) ������� ��������, 07.90
;
;	�� �� ������. ��祬� ?  - ����� ����
;
;    � ����� ᮧ����� ����� � �⮫����� � ᫥���饩 �஡�����:
;  �� ���-譨�� ����� ��������� � ⠡���� �ਢ燐�. ���⮬� ��। ��娢�樥�
;  �㦭� �������� ��������� � ���������� �� �ਢ燐�. � ����� ���-譨�
;  ����᪠���� �ᯠ���뢠�� ��� � 㦥 ��⮬ �믮����� �ਢ離� ᠬ����⥫쭮.
;  ���������� ��� ��諠 � ������ ����: � ��祬� �� �� �믮����� ��ࠦ����
;  � �� �⠯�:
;    1. ������塞�� �� �ਢ燐� - ��⨬����㥬 �� � �࠭�� � ⥫� ���-譨��.
;    2. ��娢��㥬 ���-譨�.
;    3. �����뢠�� �����.
;  �����᪨, � ��ࢮ� �⠯� �� �ਢ���� ���-䠩� � �ଠ�� ���. ��娢���,
;  ��� � ᠬ �����, �� �ࠪ��᪨ ��⮢ - ��⠢����� ������� �ணࠬ��
;  ��� ��⨬���樨 ���������.
;  ���稢 ��᪮�쪮 �ணࠬ� � Hiew � ��襫 � �뢮��, �� ࠧ���� �����
;  �ᥤ���� �ਢ離���, ��� �ࠢ���, �� �ॢ��室�� 255 ����. �� ��⮫��㫮
;  ���� �� ���� � ⮬, �� ������ �� �����஢��� �� ��뫪� � ���浪�
;  �����⠭��, � �࠭��� �� ᠬ� ��뫪�, � ᬥ饭�� �� ᫥���饩. �����
;  ��ࠧ��, ���� ��뫪� ����� 4� ���� �㤥� �������� 1 ���� (ॠ�쭮 - ���浪�
;  1.2 ����). ���饬, ����⠫ � �ணࠬ��. ���쪮 ���஢�� ᤥ���
;  ����쪮��� :( - ⠪ �ମ��� ࠡ�⠫�. �� �� �����. �� ��࠭�� ��� �⠫�
;  ������� - �ᯠ����� �४�᭮ ࠡ�⠫� ��� 95% ���-譨��� �� ���� ����,
;  ��� ��⠫��� - ��᫠. ��९஢�ਢ ��᪮�쪮 ࠧ ᢮� �ணࠬ�� � ��
;  ��襫 � ��� ��祣� ������⥫쭮��. ����� � �訫 ��ᬮ���� ��� �襭�
;  ⠪�� �஡���� � PKLITE. ������, ᪠�� � ���, ⠬ �� �����筮 �㯮�, :(
;  ���⮬� � �� ��� ���� � �訫 ���������� LZEXE. ������ �� �뫮 ���
;  㤨������, ����� ��⨬���஢���� ⠡���� �ਢ燐� � LZEXE � � ����
;  ��������� _��᮫�⭮_ ������묨 ! � ����� ���஭� �� ���� ��ࠤ����� -
;  - ����� ��⮢�� LZEXE-��� ��楤���, � ��㣮� ���஭� - ���稫� -
;  - ���� ��祣� ������ � �� ����५. ��� ����� �, �����, � SOURCER, ����稫
;  LST-譨�, ��襫 ��楤��� �ਢ離�. ��� ᮢ������ � ���� � �筮���� ��
;  ���� �ᯮ�짮������ ॣ���஢ � ���浪� ������ ! �⫨砫��� ��� ����
;  ���樠����樥� �⥪�. ��� ! ����뢠���� � ��� 5% �ணࠬ� �⥪ �����砥���
;  �� 100-200 ��᫥���� ���� �ணࠬ��, � ��⮬ ���樠����஢���� �����.
;  ��-���� ����-�� PUSH'�� �ᯮ��� ���� �ᯠ���騪, ���� �ਢ離�. ��ࠢ��.
;  ��ࠡ�⠫�. ��⮬ ��।���� ������ ���஢�� - ��� ��ꥪ⭨� ��
;  �������⮢᪮� qsort �� �譮�� ��������, �����ᥬ���஢��, � ��� ����
;  ��ࠢ�� � ��⠢��. � �⠫� ࠡ����! :)
;

PackThizEXE:
	push cs
	pop ds
	cmp Header_Len,10
	jc @fault
	cmp Header_Relocs,0
	jz NoRel
;	cmp Header_Relocs,40
;	jc @fault
	call LoadRelocs	
	call SortRelocs	
	call RepackRelocs
	cmp di,1
	jc @fault
	call Save_Header	
	jc @fault
	call CopyFile	
	call WriteRelocs
NoRel:
	clc
@fault:
	retn

LoadRelocs:
	mov bx,ds:FileNum
	mov dx,ds:Header_ReloAdr
	xor cx,cx
	mov ax,4200h
	@CallInt21
	mov cx,ds:Header_Relocs
	mov ds,ds:FileSeg
	push ds
	pop es
	push cx
	shl cx,2
	mov ah,3Fh
	xor dx,dx
	@CallInt21
	xor di,di
	xor si,si
	pop cx
	cld
	push cx
@lr2:
	xor eax,eax
	lodsw
	mov ebx,eax
	lodsw
	shl eax,4
	add eax,ebx
	stosd
	
	loop @lr2
@lr1:
	pop cx
	retn

SortRelocs:
Start_Of_Code_g:
	byte "�����"
	
	mov	DI,SP
	dec	CX
	shl cx,2
	push	CX
	push	0
L6B:	cmp	SP,DI
	jae	L60
L6F:	mov	BP,SP
	mov	SI,0[BP]
	cmp	SI,2[BP]
	jb	L7E
	add	SP,4
	jmp short	L6B
L7E:	sub	SP,4
	mov	DX,2[BP]
	mov	[BP-2],DX
	add	DX,4
	mov	[BP-4],SI
L8E:	push	DX
L8F:	add	SI,4
	cmp	SI,2[BP]
	je	LAE

	mov bx,[BP]
	mov eax,[si]
	cmp eax,[bx]
	
	jg	LAE
	je	L8F
	mov	[BP-4],SI
	jmp short	L8F
LAE:	pop	DX
	push	SI
	mov	SI,DX
LB2:	sub	SI,4
	
	mov bx,[BP]
	mov eax,[bx]
	cmp eax,[si]
	
	jg	LD1
	je	LCC
	mov	[BP-2],SI
	jmp short	LB2
LCC:	cmp	SI,[BP]
	jne	LB2
LD1:	mov	DX,SI
	pop	SI
	cmp	DX,SI
	jbe	LEB

	xchg	DI,DX
	mov	eax,[SI]
	xchg	eax,[DI]
	mov	[SI],eax
	xchg	DI,DX
	
	mov	[BP-2],DX
	mov	[BP-4],SI
	jmp short	L8E
LEB:	
	xchg	DI,DX
	mov	CX,SI
	mov	SI,[BP]
	mov	eax,[SI]
	xchg	eax,[DI]
	mov	[SI],eax
	mov	SI,CX
	xchg	DI,DX
	mov	SI,[BP+2]
	sub	SI,[BP-2]
	add	SI,[BP]
	sub	SI,[BP-4]
	jb	L120
	mov	CX,[BP]
	mov	AX,[BP-2]
	mov	[BP],AX
	mov	AX,[BP-4]
	mov	[BP-2],AX
	mov	[BP-4],CX
	jmp	near ptr L6F
L120:	mov	CX,[BP+2]
	mov	AX,[BP-4]
	mov	[BP+2],AX
	mov	AX,[BP-2]
	mov	[BP-4],AX
	mov	[BP-2],CX
	jmp	near ptr L6F
L60:	
	retn
	nop
End_Of_Code_g:
	
RepackRelocs:
Start_Of_Code_h:
	byte "�����"
	xor di,di
	xor si,si
	mov cx,cs:Header_Relocs
	xor edx,edx
@lr12:	lodsd
	push eax
	sub eax,edx
	jz @lr19
	test eax,000FFFF00h
	jz @lr8
	shl eax,8
@lr19:	stosd
	byte 0B4h	; �⮡� �� �믮����� stosb � �� ������ ��譨� jmp��
@lr8:	stosb
@lr14:	pop edx
	loop @lr12
@lr10:	push cs
	pop ds

	mov PackedLen,di
	add di,relocs-unpacker
	mov un_all,di
	mov ax,di
	add ax,15+32
	shr ax,4
	cmp ax,Header_Len
	jg @lr40
	
	add di,512
	
	mov ax,Header_cs
	mov un_cs,ax
	mov ax,Header_ip
	mov un_ip,ax
	mov ax,Header_sp
	mov un_sp,ax
	mov ax,Header_ss
	mov un_ss,ax
	
	mov Header_sp,di

	xor eax,eax
	mov ax,header_pages
	dec ax
	imul eax,eax,512

	xor ebx,ebx
	mov bx,Header_Last
	add eax,ebx
	
	mov dword ptr AllLen_l,eax
	
	xor edx,edx
	mov dx,Header_Len
	shl dx,4
	mov HeadLen,dx
	sub eax,edx
	add eax,15
	and eax,0FFFFFFF0h
	mov dword ptr FileLen_l,eax
	retn
@lr40:
	xor di,di
	retn
	nop
End_Of_Code_h:

Save_Header:
	push cs
	pop ds
	
	mov Header_Relocs,0
	mov Header_len,2

	shr eax,4
	mov Header_ss,ax
	mov Header_cs,ax
	mov header_ip,0
	mov bx,filenum
	call Write_Header
	retn
	
CopyFile:
	mov dx,Headlen
	mov read_pos_l,dx
	mov read_pos_h,0
	mov ds,FileSeg
	mov dx,32768
@wr2:
	sub dword ptr cs:FileLen_l,32768
	jc @wr1
	mov cx,32768
	call read_next
	call write_next
	jmp short @wr2
	
@wr1:	mov cx,cs:FileLen_l
	add cx,32768
	jz @wr3
	call read_next
	call write_next
@wr3:	
	retn
	
WriteRelocs:
	push cs
	pop ds
	lea dx,unpacker
	mov cx,relocs-unpacker
	call write_next
	mov cx,PackedLen
	mov ds,FileSeg
	xor dx,dx
	call write_next

;	mov cx,cs:read_pos_l
;	sub cx,cs:write_pos_l
;	push cx
;	shr cx,2
;	inc cx
;	xor eax,eax
;	xor di,di
;	push ds
;	pop es
;	rep stosd
;	xchg ax,dx
;	pop cx
;	call write_next
@23:
	retn	

include fileio.inc
include unpacker.inc
