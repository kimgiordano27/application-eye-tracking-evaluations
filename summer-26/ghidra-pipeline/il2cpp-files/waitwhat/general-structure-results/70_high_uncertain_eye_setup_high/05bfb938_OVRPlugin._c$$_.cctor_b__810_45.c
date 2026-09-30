/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_45
ENTRY_POINT: 05bfb938
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_45(long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  bool in_ZR;
  bool in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined8 in_stack_00000100;
  undefined4 uStack0000000000000108;
  undefined4 uStack000000000000010c;
  undefined4 uStack0000000000000110;
  undefined4 uStack0000000000000114;
  undefined4 in_stack_00000118;
  undefined8 uStack0000000000000120;
  undefined4 uStack0000000000000128;
  undefined4 uStack000000000000012c;
  undefined4 uStack0000000000000130;
  undefined8 uStack0000000000000134;
  
  uStack0000000000000120 = param_2._0_8_;
  uStack0000000000000128 = param_2._8_4_;
  uStack000000000000012c = param_2._12_4_;
  *(long *)(param_1 + 0x107) = param_3._8_8_;
  *(long *)(param_1 + 0xff) = param_3._0_8_;
  if (in_CY && !in_ZR) {
    *(undefined4 *)(unaff_x20 + 800) = 0x17;
    *(undefined8 *)(unaff_x20 + 0x338) = uStack0000000000000134;
    *(ulong *)(unaff_x20 + 0x330) = CONCAT44(uStack0000000000000130,uStack000000000000012c);
    *(long *)(unaff_x20 + 0x32c) = param_2._8_8_;
    *(undefined8 *)(unaff_x20 + 0x324) = uStack0000000000000120;
    in_stack_00000100 = 0;
    uStack0000000000000108 = 0;
    uStack000000000000010c = 0;
    in_stack_00000118 = 0;
    uStack0000000000000110 = 0;
    uStack0000000000000114 = 0;
    FUN_069e4d6c(DAT_012e3838,uStack000000000000000c,uStack0000000000000008,&stack0x00000100,0);
    if (0x19 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x340) = 0x18;
      *(ulong *)(unaff_x20 + 0x358) = CONCAT44(in_stack_00000118,uStack0000000000000114);
      *(ulong *)(unaff_x20 + 0x350) = CONCAT44(uStack0000000000000110,uStack000000000000010c);
      *(ulong *)(unaff_x20 + 0x34c) = CONCAT44(uStack000000000000010c,uStack0000000000000108);
      *(undefined8 *)(unaff_x20 + 0x344) = in_stack_00000100;
      if (unaff_x19 != 0) {
        lVar1 = *unaff_x21;
        *(long *)(unaff_x19 + 0x10) = unaff_x20;
        *(long *)(*(long *)(lVar1 + 0xb8) + 8) = unaff_x19;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


