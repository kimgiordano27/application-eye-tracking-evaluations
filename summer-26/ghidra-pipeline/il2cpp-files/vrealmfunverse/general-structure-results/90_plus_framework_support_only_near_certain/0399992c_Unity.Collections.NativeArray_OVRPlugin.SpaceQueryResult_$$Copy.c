/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 0399992c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(void)

{
  int iVar1;
  long unaff_x19;
  int unaff_w20;
  
  iVar1 = *(int *)(unaff_x19 + 0x18) + -1;
  *(int *)(unaff_x19 + 0x18) = iVar1;
  if (iVar1 - unaff_w20 != 0 && unaff_w20 <= iVar1) {
    FUN_04d9e334(*(undefined8 *)(unaff_x19 + 0x10),unaff_w20 + 1,*(undefined8 *)(unaff_x19 + 0x10),
                 unaff_w20,iVar1 - unaff_w20,0);
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


