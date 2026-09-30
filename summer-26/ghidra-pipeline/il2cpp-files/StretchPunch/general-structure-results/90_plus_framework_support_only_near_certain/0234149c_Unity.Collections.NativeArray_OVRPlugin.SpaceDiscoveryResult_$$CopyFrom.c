/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyFrom
ENTRY_POINT: 0234149c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyFrom(void)

{
  int iVar1;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  
  if (unaff_w19 < 0) {
    FUN_033b3224(0x10,4,0);
  }
  if (*(int *)(unaff_x20 + 0x18) - unaff_w21 < unaff_w19) {
    FUN_033b2d60(0x17,0);
  }
  if (0 < unaff_w19) {
    iVar1 = *(int *)(unaff_x20 + 0x18) - unaff_w19;
    *(int *)(unaff_x20 + 0x18) = iVar1;
    if (iVar1 - unaff_w21 != 0 && unaff_w21 <= iVar1) {
      FUN_033b4f38(*(undefined8 *)(unaff_x20 + 0x10),unaff_w19 + unaff_w21,
                   *(undefined8 *)(unaff_x20 + 0x10),unaff_w21,iVar1 - unaff_w21,0);
      iVar1 = *(int *)(unaff_x20 + 0x18);
    }
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    FUN_033b4c84(*(undefined8 *)(unaff_x20 + 0x10),iVar1,unaff_w19,0);
    return;
  }
  return;
}


