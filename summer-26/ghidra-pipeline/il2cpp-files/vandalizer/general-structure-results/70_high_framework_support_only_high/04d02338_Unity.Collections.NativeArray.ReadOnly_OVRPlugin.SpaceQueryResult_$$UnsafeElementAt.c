/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$UnsafeElementAt
ENTRY_POINT: 04d02338
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__UnsafeElementAt(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  byte unaff_w21;
  
  uVar1 = FUN_055456b0(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38));
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x20 + 0x28),uVar1);
  *(byte *)(unaff_x20 + 0x30) = unaff_w21 & 1;
  return;
}


