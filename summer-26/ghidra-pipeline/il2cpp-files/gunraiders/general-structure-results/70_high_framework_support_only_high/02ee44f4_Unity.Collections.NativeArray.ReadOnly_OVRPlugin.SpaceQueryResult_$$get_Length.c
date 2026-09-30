/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$get_Length
ENTRY_POINT: 02ee44f4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__get_Length(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  
  uVar1 = FUN_03cfc4c8();
  *unaff_x19 = uVar1;
  *(undefined4 *)(unaff_x19 + 1) = unaff_w21;
  *(undefined4 *)((long)unaff_x19 + 0xc) = unaff_w20;
  return;
}


