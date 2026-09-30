/*
FUNCTION_NAME: AlterEyes.ColorACube.Analytics.AnalyticsTimer.<>c__DisplayClass14_0$$.ctor
ENTRY_POINT: 03f9d8cc
PROGRAM: cac-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;eye_or_gaze_keyword_boost_only
*/


void AlterEyes_ColorACube_Analytics_AnalyticsTimer_<>c__DisplayClass14_0___ctor
               (ulong param_1,char param_2)

{
  ulong uVar1;
  ulong in_x9;
  ulong in_x10;
  undefined8 *unaff_x19;
  long unaff_x21;
  long lVar2;
  undefined8 in_stack_00000018;
  ulong in_stack_00000020;
  long in_stack_00000028;
  
  uVar1 = in_x9 >> 1;
  if ((in_x9 & 1) != 0) {
    uVar1 = in_x10;
  }
  if (param_1 < uVar1 || param_1 - uVar1 == 0) {
    lVar2 = in_stack_00000028;
    uVar1 = param_1;
    if ((in_x9 & 1) == 0) {
      in_stack_00000018 = CONCAT71(in_stack_00000018._1_7_,param_2 << 1);
      lVar2 = unaff_x21;
      uVar1 = in_stack_00000020;
    }
    in_stack_00000020 = uVar1;
    *(undefined1 *)(lVar2 + param_1) = 0;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &stack0x00000018,param_1 - uVar1,'\0');
  }
  lVar2 = in_stack_00000028;
  uVar1 = in_stack_00000020;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  unaff_x19[1] = uVar1;
  *unaff_x19 = in_stack_00000018;
  unaff_x19[2] = lVar2;
  in_stack_00000018 = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  ~basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                &stack0x00000018);
  return;
}


