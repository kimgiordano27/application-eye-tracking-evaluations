/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 018b26d0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerable_GetEnumerator
               (long param_1)

{
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long unaff_x24;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_0103c244(param_1);
  }
  FUN_01fcbcf0(unaff_x20 + unaff_w22 * 0x38,unaff_x24 + unaff_w21 * 0x38,(long)(unaff_w19 * 0x38),0)
  ;
  FUN_01cbad00(&stack0x00000008,0);
  return;
}


