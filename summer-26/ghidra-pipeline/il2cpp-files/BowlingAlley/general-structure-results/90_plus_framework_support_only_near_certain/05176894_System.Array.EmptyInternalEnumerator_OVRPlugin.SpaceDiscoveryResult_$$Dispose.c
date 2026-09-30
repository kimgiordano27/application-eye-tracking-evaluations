/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 05176894
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__Dispose(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0xab) & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727dc00);
    *(undefined1 *)(unaff_x20 + 0xab) = 1;
  }
  plVar3 = (long *)(param_1 + 0x48);
  lVar1 = *plVar3;
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727dc00);
    FUN_059660a0(uVar2,0);
    FUN_032ef8c0(plVar3,uVar2,0);
    lVar1 = *plVar3;
  }
  return lVar1;
}


