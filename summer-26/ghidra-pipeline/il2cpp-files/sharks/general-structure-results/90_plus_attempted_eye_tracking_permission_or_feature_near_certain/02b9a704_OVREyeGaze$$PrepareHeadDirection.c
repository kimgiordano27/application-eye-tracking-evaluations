/*
FUNCTION_NAME: OVREyeGaze$$PrepareHeadDirection
ENTRY_POINT: 02b9a704
PROGRAM: sharks-libil2cpp.so
SCORE: 91
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVREyeGaze__PrepareHeadDirection(long param_1,long param_2)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  if (param_1 == 0) {
    uVar1 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03808cf0);
    FUN_02b9a774(uVar1,0,*(undefined8 *)PTR_DAT_03808ce8);
    if (*(int *)(*unaff_x20 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    thunk_FUN_018626b8(uVar1);
    FUN_017e73d0();
    param_2 = *unaff_x20;
  }
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    param_2 = *unaff_x20;
  }
  return *(undefined8 *)(*(long *)(param_2 + 0xb8) + 0x38);
}


