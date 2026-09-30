/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 031ffde8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy(void)

{
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  
  FUN_0358d498(*(undefined8 *)(unaff_x19 + 0x10),unaff_w22 + unaff_w21,
               *(undefined8 *)(unaff_x19 + 0x10),unaff_w21 << 1,
               *(int *)(unaff_x19 + 0x18) - unaff_w21,0);
  *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + unaff_w22;
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


