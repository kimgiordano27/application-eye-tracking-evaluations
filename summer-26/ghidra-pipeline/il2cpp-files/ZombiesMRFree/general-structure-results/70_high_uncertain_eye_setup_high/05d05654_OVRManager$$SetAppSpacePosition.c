/*
FUNCTION_NAME: OVRManager$$SetAppSpacePosition
ENTRY_POINT: 05d05654
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetAppSpacePosition
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14)

{
  long unaff_x26;
  undefined8 *puVar1;
  long unaff_x27;
  
  puVar1 = *(undefined8 **)(unaff_x26 + 0x368);
  if ((*(byte *)(unaff_x27 + 0x7be) & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb8368);
    *(undefined1 *)(unaff_x27 + 0x7be) = 1;
  }
  param_14 = 0;
  param_10 = param_2;
  param_11 = param_3;
  param_12 = param_4;
  param_13 = thunk_FUN_0301043c(*puVar1,param_5);
  thunk_FUN_02fdfff0(param_1,&param_10,param_6,param_7);
  return;
}


