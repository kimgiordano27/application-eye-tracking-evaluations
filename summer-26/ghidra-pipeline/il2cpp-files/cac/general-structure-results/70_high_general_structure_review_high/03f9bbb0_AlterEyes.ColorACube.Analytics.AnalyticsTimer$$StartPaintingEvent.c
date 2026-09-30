/*
FUNCTION_NAME: AlterEyes.ColorACube.Analytics.AnalyticsTimer$$StartPaintingEvent
ENTRY_POINT: 03f9bbb0
PROGRAM: cac-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only
*/


undefined1  [16] AlterEyes_ColorACube_Analytics_AnalyticsTimer__StartPaintingEvent(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined4 *puVar8;
  long *unaff_x19;
  wchar_t *unaff_x20;
  int *unaff_x21;
  int unaff_w22;
  long unaff_x29;
  double dVar9;
  undefined8 extraout_var;
  
  dVar9 = wcstold(unaff_x20,(wchar_t **)(unaff_x29 + -0x20));
  iVar1 = *unaff_x21;
  *unaff_x21 = unaff_w22;
  puVar8 = (undefined4 *)((ulong)&stack0x00000018 | 1);
  if (iVar1 == 0x22) {
    uVar2 = *puVar8;
    uVar3 = *(undefined1 *)(puVar8 + 1);
    *(undefined1 *)(unaff_x29 + -0x18) = 0x26;
    uVar7 = CONCAT26(s___out_of_range_01912b02._6_2_,s___out_of_range_01912b02._0_6_);
    *(undefined1 *)(unaff_x29 + -0x13) = uVar3;
    uVar5 = CONCAT62(s___out_of_range_01912b02._8_6_,s___out_of_range_01912b02._6_2_);
    *(undefined8 *)(unaff_x29 + -8) = 0;
    *(undefined4 *)(unaff_x29 + -0x17) = uVar2;
    *(undefined8 *)(unaff_x29 + -0x12) = uVar7;
    *(undefined8 *)(unaff_x29 + -0xc) = uVar5;
                    /* WARNING: Subroutine does not return */
    FUN_03f1eab8(unaff_x29 - 0x18U | 1);
  }
  lVar4 = *(long *)(unaff_x29 + -0x20) - (long)unaff_x20;
  if (lVar4 != 0) {
    if (unaff_x19 != (long *)0x0) {
      *unaff_x19 = lVar4 >> 2;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    ~basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  &stack0x00000018);
    auVar6._8_8_ = extraout_var;
    auVar6._0_8_ = dVar9;
    return auVar6;
  }
  uVar2 = *puVar8;
  uVar3 = *(undefined1 *)(puVar8 + 1);
  *(undefined1 *)(unaff_x29 + -0x18) = 0x28;
  uVar7 = CONCAT17(s___no_conversion_018dd779[7],s___no_conversion_018dd779._0_7_);
  *(undefined1 *)(unaff_x29 + -0x13) = uVar3;
  uVar5 = CONCAT71(s___no_conversion_018dd779._8_7_,s___no_conversion_018dd779[7]);
  *(undefined8 *)(unaff_x29 + -8) = 0;
  *(undefined4 *)(unaff_x29 + -0x17) = uVar2;
  *(undefined8 *)(unaff_x29 + -0x12) = uVar7;
  *(undefined8 *)(unaff_x29 + -0xb) = uVar5;
  uVar7 = FUN_03f9e158(unaff_x29 - 0x18U | 1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  ~basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (unaff_x29 + -0x18));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  ~basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                &stack0x00000018);
                    /* WARNING: Subroutine does not return */
  FUN_04000f8c(uVar7);
}


