/*
FUNCTION_NAME: AlterEyes.ColorACube.Analytics.AnalyticsTimer.<>c$$.cctor
ENTRY_POINT: 03f9d818
PROGRAM: cac-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;eye_or_gaze_keyword_boost_only
*/


void AlterEyes_ColorACube_Analytics_AnalyticsTimer_<>c___cctor(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  ulong *unaff_x19;
  ulong unaff_x20;
  char *pcVar4;
  ulong uVar5;
  undefined8 in_stack_00000000;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
  bStack0000000000000018;
  undefined7 uStack0000000000000019;
  ulong in_stack_00000020;
  char *in_stack_00000028;
  
  pcVar4 = (char *)(unaff_x20 | 1);
  uVar5 = param_1 >> 1;
  if ((param_1 & 1) != 0) {
    uVar5 = in_stack_00000020;
  }
  do {
    pcVar3 = pcVar4;
    if ((param_1 & 1) != 0) {
      pcVar3 = in_stack_00000028;
    }
    uVar1 = snprintf(pcVar3,uVar5 + 1,"%Lf",in_stack_00000000);
    if ((int)uVar1 < 0) {
      uVar2 = uVar5 << 1 | 1;
    }
    else {
      uVar2 = (ulong)uVar1;
      if (uVar2 <= uVar5) {
        uVar5 = (ulong)((byte)bStack0000000000000018 >> 1);
        if ((_bStack0000000000000018 & 1) != 0) {
          uVar5 = in_stack_00000020;
        }
        if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
          pcVar3 = in_stack_00000028;
          uVar5 = uVar2;
          if ((_bStack0000000000000018 & 1) == 0) {
            _bStack0000000000000018 = CONCAT71(uStack0000000000000019,(char)(uVar1 << 1));
            pcVar3 = pcVar4;
            uVar5 = in_stack_00000020;
          }
          in_stack_00000020 = uVar5;
          pcVar3[uVar2] = '\0';
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (&stack0x00000018,uVar2 - uVar5,'\0');
        }
        pcVar4 = in_stack_00000028;
        uVar5 = in_stack_00000020;
        in_stack_00000020 = 0;
        in_stack_00000028 = (char *)0x0;
        unaff_x19[1] = uVar5;
        *unaff_x19 = _bStack0000000000000018;
        unaff_x19[2] = (ulong)pcVar4;
        _bStack0000000000000018 = 0;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::~basic_string(&stack0x00000018);
        return;
      }
    }
    uVar5 = (ulong)((byte)bStack0000000000000018 >> 1);
    if ((_bStack0000000000000018 & 1) != 0) {
      uVar5 = in_stack_00000020;
    }
    if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
      pcVar3 = in_stack_00000028;
      uVar5 = uVar2;
      if ((_bStack0000000000000018 & 1) == 0) {
        _bStack0000000000000018 = CONCAT71(uStack0000000000000019,(char)((int)uVar2 << 1));
        pcVar3 = pcVar4;
        uVar5 = in_stack_00000020;
      }
      in_stack_00000020 = uVar5;
      pcVar3[uVar2] = '\0';
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(&stack0x00000018,uVar2 - uVar5,'\0');
    }
    param_1 = _bStack0000000000000018 & 0xff;
    uVar5 = uVar2;
  } while( true );
}


