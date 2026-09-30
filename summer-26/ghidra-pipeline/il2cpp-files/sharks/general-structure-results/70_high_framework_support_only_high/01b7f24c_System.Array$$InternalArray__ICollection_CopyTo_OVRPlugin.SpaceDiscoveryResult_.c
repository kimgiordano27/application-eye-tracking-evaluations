/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 01b7f24c
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


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_SpaceDiscoveryResult>(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = thunk_FUN_018617ec();
  uVar2 = thunk_FUN_01851c08(PTR_DAT_037f93c0);
  uVar1 = FUN_02a473b8(uVar2,uVar1,0);
  thunk_FUN_01851c08(PTR_DAT_037f8d50);
  uVar2 = thunk_FUN_01861bbc();
  FUN_02bcf690(uVar2,uVar1,0);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar2);
}


