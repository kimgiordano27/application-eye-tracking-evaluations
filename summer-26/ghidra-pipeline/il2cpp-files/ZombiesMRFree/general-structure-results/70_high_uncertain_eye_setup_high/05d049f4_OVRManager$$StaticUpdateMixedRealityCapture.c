/*
FUNCTION_NAME: OVRManager$$StaticUpdateMixedRealityCapture
ENTRY_POINT: 05d049f4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__StaticUpdateMixedRealityCapture
               (undefined1 param_1 [16],float param_2,float param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long unaff_x19;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  puVar2 = (undefined8 *)FUN_02feb5b8();
  fVar4 = (float)(*(code *)*puVar2)();
  if (unaff_x19 != 0) {
    uVar3 = FUN_05d038ec((unaff_s10 - param_3) * (unaff_s10 - param_3) +
                         (unaff_s8 - fVar4) * (unaff_s8 - fVar4) +
                         (unaff_s9 - param_2) * (unaff_s9 - param_2));
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_040589e8();
    }
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


