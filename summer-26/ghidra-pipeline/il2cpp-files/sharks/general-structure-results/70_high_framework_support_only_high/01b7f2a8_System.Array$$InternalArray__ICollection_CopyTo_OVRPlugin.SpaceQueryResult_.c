/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 01b7f2a8
PROGRAM: sharks-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_SpaceQueryResult>
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_0185db00(param_3);
  }
  FUN_02d8d4c0(param_1,0);
  plVar2 = *(long **)(param_3 + 0x38);
  if (*(long *)(*plVar2 + 0x38) == 0) {
    FUN_0185db00();
    plVar2 = *(long **)(param_3 + 0x38);
  }
  lVar1 = plVar2[4];
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  FUN_028df44c();
  return;
}


