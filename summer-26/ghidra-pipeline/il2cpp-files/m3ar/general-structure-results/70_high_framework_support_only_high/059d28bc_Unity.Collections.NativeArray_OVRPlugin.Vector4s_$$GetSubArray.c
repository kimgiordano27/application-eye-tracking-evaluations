/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$GetSubArray
ENTRY_POINT: 059d28bc
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__GetSubArray(void)

{
  int iVar1;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  
  iVar1 = *(int *)(unaff_x19 + 0x18) - unaff_w20;
  *(int *)(unaff_x19 + 0x18) = iVar1;
  if (iVar1 - unaff_w21 != 0 && unaff_w21 <= iVar1) {
    FUN_07508590(*(undefined8 *)(unaff_x19 + 0x10),unaff_w20 + unaff_w21,
                 *(undefined8 *)(unaff_x19 + 0x10),unaff_w21,iVar1 - unaff_w21,0);
    iVar1 = *(int *)(unaff_x19 + 0x18);
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  FUN_075082e0(*(undefined8 *)(unaff_x19 + 0x10),iVar1,unaff_w20,0);
  return;
}


