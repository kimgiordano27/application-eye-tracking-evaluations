/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 019a68f8
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


void System_Array__InternalArray__set_Item<OVRPlugin_SpaceDiscoveryResult>(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x23;
  
  uVar1 = System_Array__InternalArray__set_Item<Texture_t>();
  uVar1 = FUN_01bd4328(uVar1,*unaff_x23,*(undefined8 *)PTR_DAT_037f4350);
                    /* try { // try from 019a6928 to 01aa697f has its CatchHandler @ 019a67e8 */
  FUN_01b26490(uVar1,2,*(undefined8 *)PTR_DAT_037f4370);
  return;
}


