/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetControllerRay
ENTRY_POINT: 057fab78
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDebugger__GetControllerRay(void)

{
  ulong uVar1;
  ulong uVar2;
  int in_w8;
  code *pcVar3;
  long unaff_x19;
  
  if (in_w8 == 0) {
    pcVar3 = FUN_02c7d13c;
  }
  else {
    uVar1 = thunk_FUN_02fc078c();
    uVar2 = FUN_02fe98dc();
    if ((uVar1 & 1) == 0) {
      if ((uVar2 & 1) == 0) {
        pcVar3 = FUN_02c7d16c;
      }
      else {
        pcVar3 = FUN_02c7d198;
      }
    }
    else if ((uVar2 & 1) == 0) {
      pcVar3 = FUN_02c7d21c;
    }
    else {
      pcVar3 = FUN_02c7d258;
    }
  }
  *(code **)(unaff_x19 + 0x18) = pcVar3;
  *(code **)(unaff_x19 + 0x38) = FUN_02c7d0e8;
  return;
}


