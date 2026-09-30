/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_chromaKeyColor
ENTRY_POINT: 05ba569c
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


undefined8 OVRManager__OVRMixedRealityCaptureConfiguration_get_chromaKeyColor(long param_1)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  float unaff_s10;
  float fVar3;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined8 in_stack_000000c8;
  
  if (param_1 != 0) {
    fVar2 = (float)FUN_06a577c0(param_1,0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      fVar3 = *(float *)(unaff_x19 + 0x28);
      lVar1 = FUN_069d3a80(*(long *)(unaff_x19 + 0x20),0);
      if (lVar1 != 0) {
        FUN_069e7098(unaff_s8,fVar3 + (unaff_s10 - in_stack_000000c8._4_4_) + fVar2 * 0.5,unaff_s9,
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
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


