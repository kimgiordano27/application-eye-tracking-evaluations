/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopyFrom
ENTRY_POINT: 03b5fb08
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopyFrom(void)

{
  int unaff_w20;
  int unaff_w21;
  void *unaff_x23;
  undefined8 uVar1;
  long unaff_x24;
  
  if (unaff_w20 < 0) {
    FUN_04f51f34(0x10,4,0);
  }
  if (*(int *)(unaff_x24 + 0x18) - unaff_w21 < unaff_w20) {
    FUN_04f51a70(0x17,0);
  }
  uVar1 = *(undefined8 *)(unaff_x24 + 0x10);
  memcpy(&stack0x00000000,unaff_x23,0x160);
  memcpy(&stack0x00000160,&stack0x00000000,0x160);
  FUN_035a98d4(uVar1,unaff_w21,unaff_w20,&stack0x00000160);
  return;
}


