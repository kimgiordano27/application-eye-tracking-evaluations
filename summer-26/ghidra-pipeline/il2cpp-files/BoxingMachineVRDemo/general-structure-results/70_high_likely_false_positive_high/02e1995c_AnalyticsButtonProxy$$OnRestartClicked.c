/*
FUNCTION_NAME: AnalyticsButtonProxy$$OnRestartClicked
ENTRY_POINT: 02e1995c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void AnalyticsButtonProxy__OnRestartClicked(int param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  wchar_t __c;
  uint uVar1;
  size_t sVar2;
  __locale_t p_Var3;
  undefined1 uVar4;
  __locale_t unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  byte *__s;
  __locale_t unaff_x23;
  long unaff_x25;
  long unaff_x29;
  wchar_t in_stack_00000008;
  int iStack0000000000000020;
  _union_27 _Stack0000000000000024;
  void *in_stack_00000030;
  
  if (unaff_x23 != (__locale_t)0x0) {
    uselocale(unaff_x23);
  }
  if (param_1 == -1) {
    if ((unaff_w22 == 0x202f) || (unaff_w22 == 0xa0)) {
      uVar4 = 0x20;
    }
    else {
      uVar4 = 0xff;
    }
    *(undefined1 *)(unaff_x20 + 0x10) = uVar4;
  }
  else {
    *(char *)(unaff_x20 + 0x10) = (char)param_1;
  }
  __s = *(byte **)(unaff_x21 + 0x30);
  uVar1 = (uint)*__s;
  if (*__s != 0) {
    if (__s[1] == 0) goto LAB_02e19838;
    iStack0000000000000020 = 0;
    _Stack0000000000000024 = (_union_27)0x0;
    sVar2 = __strlen_chk(__s,0xffffffffffffffff);
    p_Var3 = uselocale(unaff_x19);
    sVar2 = mbrtowc(&stack0x00000008,(char *)__s,sVar2,(mbstate_t *)&stack0x00000020);
    if (p_Var3 != (__locale_t)0x0) {
      uselocale(p_Var3);
    }
    __c = in_stack_00000008;
    if (sVar2 < 0xfffffffffffffffe) {
      p_Var3 = uselocale(unaff_x19);
      uVar1 = wctob(__c);
      if (p_Var3 != (__locale_t)0x0) {
        uselocale(p_Var3);
      }
      if (((uVar1 != 0xffffffff) || (uVar1 = 0x20, __c == L'\xa0')) || (__c == L'\x202f'))
      goto LAB_02e19838;
    }
  }
  uVar1 = 0xff;
LAB_02e19838:
  *(char *)(unaff_x20 + 0x11) = (char)uVar1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (unaff_x20 + 0x18),*(char **)(unaff_x21 + 0x38));
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (unaff_x20 + 0x30);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(this,*(char **)(unaff_x21 + 0x20));
  uVar1 = 0;
  if (*(byte *)(unaff_x21 + 0x51) != 0xff) {
    uVar1 = (uint)*(byte *)(unaff_x21 + 0x51);
  }
  *(uint *)(unaff_x20 + 0x78) = uVar1;
  if (*(char *)(unaff_x21 + 0x56) == '\0') {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (unaff_x20 + 0x48),"()");
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (unaff_x20 + 0x48),*(char **)(unaff_x21 + 0x40));
  }
  if (*(char *)(unaff_x21 + 0x57) == '\0') {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (unaff_x20 + 0x60),"()");
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (unaff_x20 + 0x60),*(char **)(unaff_x21 + 0x48));
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &stack0x00000020,(basic_string *)this);
  FUN_02e19b88(unaff_x20 + 0x7c,&stack0x00000020,0,*(undefined1 *)(unaff_x21 + 0x52),
               *(undefined1 *)(unaff_x21 + 0x53),*(undefined1 *)(unaff_x21 + 0x56));
  FUN_02e19b88(unaff_x20 + 0x80,this,0,*(undefined1 *)(unaff_x21 + 0x54),
               *(undefined1 *)(unaff_x21 + 0x55),*(undefined1 *)(unaff_x21 + 0x57));
  if (((ulong)_iStack0000000000000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  freelocale(unaff_x19);
  if (*(long *)(unaff_x25 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


