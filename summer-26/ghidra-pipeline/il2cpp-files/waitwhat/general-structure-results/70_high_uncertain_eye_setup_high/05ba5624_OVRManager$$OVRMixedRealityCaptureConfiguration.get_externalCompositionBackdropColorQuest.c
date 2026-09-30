/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorQuest
ENTRY_POINT: 05ba5624
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRManager__OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  undefined4 unaff_s8;
  float unaff_s10;
  float fVar3;
  undefined8 uStack0000000000000024;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined8 in_stack_000000c8;
  
  uStack0000000000000038 = in_stack_00000068;
  uStack0000000000000030 = in_stack_00000060;
  uStack0000000000000048 = uStack0000000000000078;
  uStack0000000000000040 = in_stack_00000070;
  uStack0000000000000054 = uStack0000000000000084;
  uStack0000000000000050 = uStack0000000000000080;
  if (DAT_07547004 == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    DAT_07547004 = '\x01';
  }
  lVar1 = *(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8);
  uStack0000000000000024 = uStack0000000000000054;
  FUN_05ba5a94(unaff_s8,unaff_s10,param_3,*(undefined4 *)(lVar1 + 0x24),
               *(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x2c));
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    fVar2 = (float)FUN_06a577c0(*(long *)(unaff_x19 + 0x20),0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      fVar3 = *(float *)(unaff_x19 + 0x28);
      lVar1 = FUN_069d3a80(*(long *)(unaff_x19 + 0x20),0);
      if (lVar1 != 0) {
        FUN_069e7098(unaff_s8,fVar3 + (unaff_s10 - in_stack_000000c8._4_4_) + fVar2 * 0.5,param_3,
                     lVar1,0);
        *(undefined1 *)(unaff_x19 + 0x7c) = 1;
        *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000068;
        *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000060;
        *(undefined8 *)(unaff_x19 + 0x68) = _uStack0000000000000078;
        *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000070;
        *(undefined8 *)(unaff_x19 + 0x74) = uStack0000000000000084;
        *(ulong *)(unaff_x19 + 0x6c) = CONCAT44(uStack0000000000000080,uStack000000000000007c);
        FUN_05ba4f84();
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


