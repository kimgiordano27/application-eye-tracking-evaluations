/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 02dc2aec
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_SpaceQueryResult>(void)

{
  undefined8 uVar1;
  
  DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody();
  uVar1 = FUN_04c0af6c(*(undefined8 *)PTR_DAT_0631b190);
  if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
  }
  FUN_05c44914(uVar1,0);
  return;
}


