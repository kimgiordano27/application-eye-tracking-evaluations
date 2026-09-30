/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 01b8cc20
PROGRAM: sharks-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_SpaceDiscoveryResult>(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  FUN_02325088(unaff_x20 + 0x48,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0xb8));
  return;
}


