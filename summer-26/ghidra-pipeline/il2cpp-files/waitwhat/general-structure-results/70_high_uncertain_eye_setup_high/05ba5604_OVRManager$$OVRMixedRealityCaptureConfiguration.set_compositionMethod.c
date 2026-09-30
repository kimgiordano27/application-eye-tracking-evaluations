/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_compositionMethod
ENTRY_POINT: 05ba5604
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRManager__OVRMixedRealityCaptureConfiguration_set_compositionMethod
          (undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long unaff_x19;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined8 in_stack_000000c8;
  
  if (param_4 != 0) {
    lVar1 = FUN_069d3a80(param_4,0);
    if (lVar1 != 0) {
      uVar2 = FUN_069e6fbc(lVar1,0);
      if (DAT_07547004 == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        DAT_07547004 = '\x01';
      }
      lVar1 = *(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8);
      FUN_05ba5a94(uVar2,param_2,param_3,*(undefined4 *)(lVar1 + 0x24),*(undefined4 *)(lVar1 + 0x28)
                   ,*(undefined4 *)(lVar1 + 0x2c));
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        fVar3 = (float)FUN_06a577c0(*(long *)(unaff_x19 + 0x20),0);
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          fVar4 = *(float *)(unaff_x19 + 0x28);
          lVar1 = FUN_069d3a80(*(long *)(unaff_x19 + 0x20),0);
          if (lVar1 != 0) {
            FUN_069e7098(uVar2,fVar4 + (param_2 - in_stack_000000c8._4_4_) + fVar3 * 0.5,param_3,
                         lVar1,0);
            *(undefined1 *)(unaff_x19 + 0x7c) = 1;
            *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000068;
            *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000060;
            *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000078;
            *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000070;
            *(undefined8 *)(unaff_x19 + 0x74) = uStack0000000000000084;
            *(ulong *)(unaff_x19 + 0x6c) = CONCAT44(uStack0000000000000080,in_stack_00000078._4_4_);
            FUN_05ba4f84();
            return 1;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


