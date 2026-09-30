/*
FUNCTION_NAME: AlterEyes.ColorACube.Analytics.AnalyticsTimer.<>c$$.ctor
ENTRY_POINT: 03f9d880
PROGRAM: cac-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;eye_or_gaze_keyword_boost_only
*/


void AlterEyes_ColorACube_Analytics_AnalyticsTimer_<>c___ctor(void)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  char *pcVar5;
  ulong *unaff_x19;
  char *unaff_x20;
  char *unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  undefined8 in_stack_00000000;
  ulong in_stack_00000018;
  ulong in_stack_00000020;
  char *in_stack_00000028;
  
  do {
    unaff_x23 = unaff_x22 | unaff_x23 << 1;
    while( true ) {
      uVar4 = in_stack_00000018 >> 1 & 0x7f;
      if ((in_stack_00000018 & 1) != 0) {
        uVar4 = in_stack_00000020;
      }
      if (unaff_x23 < uVar4 || unaff_x23 - uVar4 == 0) {
        pcVar5 = in_stack_00000028;
        uVar4 = unaff_x23;
        if ((in_stack_00000018 & 1) == 0) {
          in_stack_00000018 = CONCAT71(in_stack_00000018._1_7_,(char)((int)unaff_x23 << 1));
          pcVar5 = unaff_x21;
          uVar4 = in_stack_00000020;
        }
        in_stack_00000020 = uVar4;
        pcVar5[unaff_x23] = '\0';
      }
      else {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &stack0x00000018,unaff_x23 - uVar4,'\0');
      }
      pcVar5 = unaff_x21;
      if ((in_stack_00000018 & 1) != 0) {
        pcVar5 = in_stack_00000028;
      }
      uVar3 = snprintf(pcVar5,unaff_x23 + 1,unaff_x20,in_stack_00000000);
      if ((int)uVar3 < 0) break;
      uVar4 = (ulong)uVar3;
      bVar2 = uVar4 <= unaff_x23;
      unaff_x23 = uVar4;
      if (bVar2) {
        uVar1 = in_stack_00000018 >> 1 & 0x7f;
        if ((in_stack_00000018 & 1) != 0) {
          uVar1 = in_stack_00000020;
        }
        if (uVar4 < uVar1 || uVar4 - uVar1 == 0) {
          pcVar5 = in_stack_00000028;
          uVar1 = uVar4;
          if ((in_stack_00000018 & 1) == 0) {
            in_stack_00000018 = CONCAT71(in_stack_00000018._1_7_,(char)(uVar3 << 1));
            pcVar5 = unaff_x21;
            uVar1 = in_stack_00000020;
          }
          in_stack_00000020 = uVar1;
          pcVar5[uVar4] = '\0';
        }
        else {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&stack0x00000018,uVar4 - uVar1,'\0');
        }
        pcVar5 = in_stack_00000028;
        uVar4 = in_stack_00000020;
        in_stack_00000020 = 0;
        in_stack_00000028 = (char *)0x0;
        unaff_x19[1] = uVar4;
        *unaff_x19 = in_stack_00000018;
        unaff_x19[2] = (ulong)pcVar5;
        in_stack_00000018 = 0;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::~basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)&stack0x00000018);
        return;
      }
    }
  } while( true );
}


