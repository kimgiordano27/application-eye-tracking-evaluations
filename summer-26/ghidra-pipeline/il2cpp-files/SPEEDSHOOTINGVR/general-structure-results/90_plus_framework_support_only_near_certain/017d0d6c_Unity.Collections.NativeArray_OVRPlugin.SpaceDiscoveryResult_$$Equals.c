/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Equals
ENTRY_POINT: 017d0d6c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Equals(void)

{
  int unaff_w21;
  int unaff_w22;
  long unaff_x24;
  
  if (unaff_w21 < 0) {
    FUN_01d68fac(0x10,4,0);
  }
  if (*(int *)(unaff_x24 + 0x18) - unaff_w22 < unaff_w21) {
    FUN_01d68ae8(0x17,0);
  }
  System_Array__InternalArray__ICollection_Add<TempAllocator_Page<Vertex>>
            (*(undefined8 *)(unaff_x24 + 0x10),unaff_w22,unaff_w21);
  return;
}


