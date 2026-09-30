/*
FUNCTION_NAME: OVRManager$$InitializeBoundary
ENTRY_POINT: 0530a508
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__InitializeBoundary(long param_1,undefined1 param_2 [16],float param_3)

{
  char in_NG;
  char in_OV;
  long lVar1;
  long unaff_x19;
  float fVar2;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  fVar2 = -param_3;
  if (in_NG == in_OV) {
    fVar2 = param_3;
  }
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000008 = 0;
  uStack0000000000000000 = 0;
  FUN_060df604(0,fVar2 * *(float *)(param_1 + 0x74c),0,0);
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    FUN_052fae5c();
    lVar1 = *(long *)(unaff_x19 + 0x68);
    if (lVar1 != 0) {
      in_stack_00000048 = uStack0000000000000018;
      in_stack_00000040 = uStack0000000000000010;
      in_stack_00000058 = uStack0000000000000028;
      in_stack_00000050 = uStack0000000000000020;
      in_stack_00000038 = uStack0000000000000008;
      in_stack_00000030 = uStack0000000000000000;
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),&stack0x00000030,*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


