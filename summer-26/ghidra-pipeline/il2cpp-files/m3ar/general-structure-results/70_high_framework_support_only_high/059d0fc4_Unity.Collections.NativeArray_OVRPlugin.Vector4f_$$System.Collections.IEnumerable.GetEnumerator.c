/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 059d0fc4
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__System_Collections_IEnumerable_GetEnumerator
               (void)

{
  int in_w8;
  int unaff_w20;
  int unaff_w21;
  void *unaff_x22;
  undefined8 uVar1;
  long unaff_x24;
  
  if (in_w8 - unaff_w20 < unaff_w21) {
    FUN_0750636c(0x17,0);
  }
  uVar1 = *(undefined8 *)(unaff_x24 + 0x10);
  memcpy(&stack0x00000008,unaff_x22,0x48);
  FUN_04d41134(uVar1,unaff_w20,unaff_w21,&stack0x00000008);
  return;
}


