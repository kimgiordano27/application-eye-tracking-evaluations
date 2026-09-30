/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$ToArray
ENTRY_POINT: 0199728c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__ToArray(void)

{
  int iVar1;
  long unaff_x19;
  int unaff_w20;
  
  FUN_01f88350(0);
  iVar1 = *(int *)(unaff_x19 + 0x18) + -1;
  *(int *)(unaff_x19 + 0x18) = iVar1;
  if (iVar1 - unaff_w20 != 0 && unaff_w20 <= iVar1) {
    FUN_01f89ca0(*(undefined8 *)(unaff_x19 + 0x10),unaff_w20 + 1,*(undefined8 *)(unaff_x19 + 0x10),
                 unaff_w20,iVar1 - unaff_w20,0);
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


