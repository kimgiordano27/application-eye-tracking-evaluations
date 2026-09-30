/*
FUNCTION_NAME: OVRPlugin$$GetEyeGazesState
ENTRY_POINT: 090ac304
PROGRAM: Hyper-libil2cpp.so
SCORE: 94
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetEyeGazesState(void)

{
  int in_w8;
  undefined1 in_stack_00000000 [16];
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  
  uStack0000000000000030 = 0;
  uStack0000000000000034 = 0;
  if (in_w8 == 0) {
    thunk_FUN_049a583c();
  }
  FUN_0a188688(&stack0x00000000 + 4,0);
  in_stack_00000020 = in_stack_00000000._4_8_;
  uStack0000000000000034 = (undefined4)in_stack_00000018;
  in_stack_00000038 = (undefined4)((ulong)in_stack_00000018 >> 0x20);
  uStack000000000000002c = in_stack_00000010;
  FUN_090ac360();
  return;
}


