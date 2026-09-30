/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 0717cd88
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  uVar1 = FUN_04980b34();
  uVar1 = thunk_FUN_04983f60(uVar1);
  FUN_0870ca1c(uVar1,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40));
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x10),uVar1);
  FUN_08dbf2f0();
  return;
}


